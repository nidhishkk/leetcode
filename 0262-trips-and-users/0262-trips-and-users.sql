# Write your MySQL query statement below
SELECT
    Request_at AS Day,
    ROUND(
        COUNT(CASE WHEN Status != 'completed' THEN 1 END) /
        COUNT(*),
        2
    ) AS `Cancellation Rate`
FROM Trips
WHERE Request_at BETWEEN '2013-10-01' AND '2013-10-03'
  AND Client_Id NOT IN (
      SELECT Users_Id
      FROM Users
      WHERE Banned = 'Yes'
        AND Role = 'client'
  )
  AND Driver_Id NOT IN (
      SELECT Users_Id
      FROM Users
      WHERE Banned = 'Yes'
        AND Role = 'driver'
  )
GROUP BY Request_at;
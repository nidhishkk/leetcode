# Write your MySQL query statement below
WITH qualified AS (
    SELECT
        *,
        id - ROW_NUMBER() OVER (ORDER BY id) AS grp
    FROM Stadium
    WHERE people >= 100
)
SELECT id, visit_date, people
FROM qualified
WHERE grp IN (
    SELECT grp
    FROM qualified
    GROUP BY grp
    HAVING COUNT(*) >= 3
)
ORDER BY visit_date;

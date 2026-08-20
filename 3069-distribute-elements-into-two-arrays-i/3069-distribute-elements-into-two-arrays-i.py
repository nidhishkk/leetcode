class Solution:
    def resultArray(self, nums: List[int]) -> List[int]:
        arr1,arr2=[],[]
        n=len(nums)
        i=2
        arr1.append(nums[0])
        arr2.append(nums[1])
        while(i<n):
            if(arr1[-1]<arr2[-1]):
                arr2.append(nums[i])
            else:
                arr1.append(nums[i])
            i+=1
        arr1.extend(arr2)
        return arr1 
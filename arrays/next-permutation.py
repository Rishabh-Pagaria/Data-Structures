def swap(self, nums, index1, index2):
    temp = nums[index1]
    nums[index1] = nums[index2]
    nums[index2] = temp

def reverse(self, nums, beg, end):
    while beg < end:
        self.swap(nums, beg, end)
        beg += 1
        end -= 1

def nextPermutation(self, nums):
    if len(nums) == 1:
        return
    if len(nums) == 2:
        return self.swap(nums, 0, 1)
    
    decrease = len(nums) - 2
    while ((decrease >= 0) and (nums[decrease] >= nums[decrease + 1])):
        decrease -= 1
    
    self.reverse(nums, decrease + 1, len(nums) - 1)

    if decrease == -1:
        return
    next_num = decrease + 1
    while next_num < len(nums) and nums[next_num] <= nums[decrease]:
        next_num += 1
    self.swap(nums, next_num, decrease)
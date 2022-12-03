
# 1480. Running Sum of 1d Array

[![difficulty](https://img.shields.io/badge/difficulty-easy-green)](https://leetcode.com/problems/running-sum-of-1d-array/?envType=study-plan&id=level-1)


Given an array `nums`. We define a running sum of an array as `runningSum[i] = sum(nums[0]…nums[i])`.
Return the running sum of nums.


### Example 1


```bash
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
```


### Example 2


```bash
Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
```

### Example 3


```bash
Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
```



### Constraints

- 2 <= nums.length <= 104
- -109 <= nums[i] <= 109
- -109 <= target <= 109
- Only one valid answer exists.


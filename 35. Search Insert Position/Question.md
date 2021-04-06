## 35. Search Insert Position
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

 
```shell
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
```
```shell
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
```
```shell
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
```
```shell
Example 4:

Input: nums = [1,3,5,6], target = 0
Output: 0
```
```shell
Example 5:

Input: nums = [1], target = 0
Output: 0
 ```
 ```shell

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
```
/*
https://leetcode.com/problems/two-sum/
Easy

You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size() - 1; i++) {      // проходимся по каждому элементу до предпоследнего (чтобы сравнить его с последним)
            
            for (int j = i + 1; j < nums.size(); j++) { // дальше проходимся по элементам, следующим дальше

                if (nums[i] + nums[j] == target) {      // если находим пару которая соответстует условию задачи, то возвращаем индексы этих элементов
                    return {i, j};
                }
            }
        }
        return {};
    }
};

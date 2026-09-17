/*
https://leetcode.com/problems/find-the-original-array-of-prefix-xor/description/
Medium

You are given an integer array pref of size n. Find and return the array arr of size n that satisfies:

pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i].
Note that ^ denotes the bitwise-xor operation.

It can be proven that the answer is unique.
*/

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> result;        // сюда будем записывать результат
        int total_xor = pref[0];   // сюда будем передавать bitwise-xor всех полученых значений
        int value;                 // сюда будем передавать результат расчёта искомых значений

        result.push_back(pref[0]); // первый элемент из pref инициализирующий

        // суть алгоритма в том, что для bitwise-xor обратной операцией является тоже bitwise-xor
        for(int i = 0; i < pref.size()-1; i++){ // идём по всему pref
            
            value = (total_xor ^ pref[i+1]); // считаем искомое значение 
            result.push_back(value);         // пишем искомое значение в итоговый вектор

            total_xor = (total_xor ^ value); // делаем bitwise-xor найденного значения в счётчик
        }
        return result;
    }
};

/*
https://leetcode.com/problems/maximum-substrings-with-distinct-start/
Medium
You are given a string s consisting of lowercase English letters.

Return an integer denoting the maximum number of substrings you can split s into such that each substring starts with a distinct character (i.e., no two substrings start with the same character).
*/

// для решения задачи достаточно найти все уникальные символы в строке
class Solution {
public:
    int maxDistinct(string s) {
        string ch;
        map<string, unsigned> symbols;  // для хранения символов использую словарь тк при использовании строки процесс падает из-за 'Memory limit exceeded'

        for(int i = 0; i < s.length(); i++){ // посимвольно проходимся по строке
            ch = s[i];
            if(symbols.count(ch) == 0) { //если символ не находится в словаре, то записываем его туда
                symbols[ch] = 1;
            }
            if(symbols.size() == 26){ //если достигли величины словаря английского алфавита, то можно выводить его величину и заканчивать проверку, больше уже не будет
                return 26;
            }
        }
        return symbols.size();
    }
};

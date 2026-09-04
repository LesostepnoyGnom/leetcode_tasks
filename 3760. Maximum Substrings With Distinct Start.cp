// https://leetcode.com/problems/maximum-substrings-with-distinct-start/
// для решения задачи достаточно найти все уникальные символы в строке
class Solution {
public:
    int maxDistinct(string s) {
        string ch;
        map<string, unsigned> symbols;  // для хранения символов использую словарь тк при использовании строки процесс падал из-за 'Memory limit exceeded'

        for(int i = 0; i < s.length(); i++){ // посимвольно проходимся по строке
            ch = s[i];
            if(symbols.count(ch) == 0) { //если символ не находится в словаре, то записываем его туда
                symbols[ch] = 1;
            }
            if(symbols.size() == 26){ //если достигли величины словаря, то можно выводить его величину и заканчивать проверку, больше уже не будет
                return 26;
            }
        }
        return symbols.size();
    }
};

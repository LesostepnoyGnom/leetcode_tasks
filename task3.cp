class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string sub = "";
        string ch;
        int max_len = 0;

        for(int i = 0; i < s.length(); i++){
            ch = s[i];

            if(sub.find(ch) != std::string::npos){

                if(sub.length() > max_len){
                    max_len = sub.length();
                }

                sub = "" + ch;
            }

            else{
                sub = sub + ch;
            }
        }
        return max_len;
    }
};

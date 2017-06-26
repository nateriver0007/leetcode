class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() < 2)
        {
            return s.size();
        }

        int result = 0;
        bool exist[256] = {false};
        
        int i = 0, j = 0;
        
        while(j < s.size())
        {
            if(exist[s[j]])
            {
                result = result > (j - i) ? result : (j - i);
                
                while(s[i] != s[j])
                {
                    exist[s[i]] = false;
                    i++;
                }
                i++;
                j++;
            }
            else
            {
                exist[s[j]] = true;
                j++;
            }
            
        }
        result = result > (j - i) ? result : (j - i);
        
        return result;
    }
};
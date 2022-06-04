class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        /*
         * A recursive function
         * works on only two inputs at the end
         * Recursion is beautiful! 
         */
        
        int length_strs = size(strs);
        
        if (length_strs < 1) return "";
        else if (length_strs == 1) return strs[0];
        else if (length_strs == 2) {
            
            string word1 = (strs[0]);
            string word2 = (strs[1]);

            int index_limit = min( word1.length(), word2.length() );
            string prefix = "";

            for (int index=0; index<index_limit; index++) {

                if (word1[index] == word2[index]) {

                    prefix += word1[index];

                }
                
                else {
                    
                    break;

                }

            }
            
            return prefix;

        }
        
        else {
            
            vector<string> left;
            left = vector<string> (strs.begin(), strs.end() - 1);
            
            vector<string> final = {longestCommonPrefix(left), strs[length_strs - 1]};
            
            return longestCommonPrefix(final);
        
        }
    
    }

};

// EOF

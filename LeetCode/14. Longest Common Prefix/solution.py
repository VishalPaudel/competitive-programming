
class Solution():
    """
        Author: Vishal Paudel
        Note: The try-except solution I consider elegant
        
        Accepted: true
        Runtime: 34 ms (90.29%)
        Memory Usage: 14 MB (49.39%)
    """

    def longestCommonPrefix(self, strs: List[str]) -> str:
        """
            Grab the index of the smallest one
            Search all the three words on that index
            Update the prefix
        """


        prefix = ""  # stores the current prefix
        
        try:
            # try-except for skipping searching for min word-len
            
            for index in range( len( strs[0] ) ):
            
                # this loops changes the index

                temp_prefix = ( strs[0] )[index]

                for word in strs:

                    # and this loop changes the word to viewed

                    if temp_prefix == word[index]:

                        # if the prefix has already been known

                        continue

                    else:

                        # temp_prefix does not match with letter

                        return prefix
                
                # - Update the prefix
                prefix += temp_prefix

            return prefix

        except:

            # if the index crosses the size of other words

            return prefix

# EOF


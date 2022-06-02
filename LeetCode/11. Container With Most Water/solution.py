
class Solution:
    def maxArea(self, height: List[int]) -> int:
        """         
        Author: Vishal Paudel
        Note: A brute-force solution
        
        Status: Time Limit Exceeded
        Runtime: N/A
        Memory Usage: N/A
        
        Time Complexity: O( (n * (n - 1)) / 2 ) == O( n^2 )
        """ 
        
        # Brute force begins here
        max_area = 0
        
        size = len(height)
        
        for left in range(size - 1):
            
            for right in range(left + 1, size):
                
                area = min(height[right], height[left]) * (right - left) 
                
                if area > max_area:
                    
                    max_area = area

        return max_area



#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:    
    
    /*
     * Author: Vishal Paudel
     * Note: This was fairly involving
     *
     * Accepted: 
     * Runtime: 
     * Memory Usage: 
     */
    
    int maxArea(vector<int>& height) {
        
        int * left_wall;
	int * right_wall;
        
        // initializing both walls
        left_wall = &( height.front() );
        right_wall = &( height.back() );
        
	int current_area = return_area(height, left_wall, right_wall);

	// Shrinking the view

	return max_area;

    }
    
    static int return_area(vector<int>& height, int * left, int * right) {
        
        return min(*left, *right) * (right - left);

    }

};


int main() {
	
	std::vector <int> my_vector = { 1, 2, 3, 4, 5 };

	std::cout << Solution::return_area(my_vector, &( my_vector.front() ), &( my_vector.back() )) << std::endl;

	return EXIT_SUCCESS;

}

// EOF


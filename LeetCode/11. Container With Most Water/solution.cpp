
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

	// Shrinking the waters!
	int * temp_wall = left_wall + 1;
	
	while (right_wall > temp_wall) {

		// Base Case
		if (*temp_wall > *left_wall || *temp_wall > *right_wall) {
		
			// Found a prospective new wall
			int left_area = return_area(height, left_wall, temp_wall);
			int right_area = return_area(height, temp_wall, right_wall);

			if (left_area > current_area) {

				// The left side is now of focus
				
				start = height.begin() + temp_left - left_wall;
				finish = height.end() + 
				
				right_area = maxArea( height(start, finish) );
				
				return max(left_area, )
			}
		}

		else

		temp_wall++;

	}

	return max_area;

    }
    
    static int return_area(vector<int>& height, int * left, int * right) {
        
	/*
	 * Returns the area between two walls
	 * Takes input the array of heights
	 */
        
	return min(*left, *right) * (right - left);

    }

};


int main() {

	std::vector <int> my_vector = { 1, 2, 3, 4, 5 };

	std::cout << Solution::return_area(my_vector, &( my_vector.front() ), &( my_vector.back() )) << std::endl;

	return EXIT_SUCCESS;

}

// EOF


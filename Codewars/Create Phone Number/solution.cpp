
#include <string>

std::string createPhoneNumber(const int arr [10]){
    /*
     * Author: Vishal Paudel
     * Note: This was fairly easy
     *
     * Accepted: true
     * Runtime: 2760 ms (90.29%)
     * Memory Usage: ? MB (49.39%)
     */

    // Converting the const int arr to a string
    std::string num;
    for (int i=0; i<10; i++) {
        num += std::to_string(arr[i]);
    }
  
    // slicing the string appropriately
    return "(" + num.substr(0, 3) + ")" + " " + num.substr(3, 3) + "-" + num.substr(6, 4);
  
}

// EOF


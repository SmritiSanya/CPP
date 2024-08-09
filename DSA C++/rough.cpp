#include <iostream>
#include <vector>
using namespace std;
vector<int> constructNewArray(vector<int> arr) {
    vector<int> new_arr;
    int n=arr.size();
    int start = 0;
    int end = n - 1;
    

    while (start <= end) {
        new_arr.push_back(arr[start]);
        new_arr.push_back(arr[end]);
        start++;
        end--;
    }

    return new_arr;
}

int main() {
    std::vector<int> original_array = {0,4,3,2,1};
    std::vector<int> new_array = constructNewArray(original_array);

    for (int num : new_array) {
        std::cout << num << " ";
    }
    // Output: 1 8 2 7 3 6 4 5

    return 0;
}

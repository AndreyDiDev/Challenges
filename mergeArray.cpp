// #include <bits/stdc++.h> 
using namespace std;
#include <vector>
#include <stdio.h>
#include <iostream>
// using std::vector<int> vector;

class Solution {
public:
    // Merges two increasing order arrays
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        // sorted in decreasing order
        // put nums2 into nums1 with non decreasing order

        int i = m - 1; // Index for nums1
        int j = n - 1; // Index for nums2
        int k = m + n - 1; // Index for merged result

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // If there are remaining elements in nums2, copy them to nums1
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
    //     int j = 0;
    //     int i = 0;

    //     printf("size: %d, size2: %d\n", m, n);

    //     for (auto i: nums1)
    //         std::cout << i << ' ';

    //     std::cout << endl;

    //     for (auto i: nums2)
    //         std::cout << i << ' ';

    //     std::cout << endl;

    //     // for(j; j < n; j++){

    //         for(i; i < n; i++){
    //             printf("i: %d\n", i);

    //             j = 0;

    //             while(nums2[i] > nums1[j] && j <= n){
    //                 // pre-append nums2[j]
    //                 printf("nums1: %d, nums2: %d\n", nums1[j], nums2[i]);

    //                 if(nums2[i] < nums1[j+1] || j > m-n){
                    
    //                     nums1.insert(nums1.begin() + j + 1, nums2[i]);

    //                     break;
    //                 }

    //                 printf("ALL nums1: %d, nums2: %d\n", nums1[j], nums2[i]);

    //                 for (auto u: nums1)
    //                     std::cout << u << ' ';
    //                 std::cout << endl;

    //                 j += 1;

    //             }
    //         // }

            
            
    //     }
    // }
};


int main(){
    vector<int> vector1{1,2,3,5,0,0,0};
    vector<int> vector2{4,6,7};

    Solution *sol = new Solution();

    int n = vector1.size();
    int m = vector2.size();

    printf("first size: %d, size2: %d\n", n, m);

    sol->merge(vector1, vector1.size() + m, vector2, vector2.size());

    return 0;
}
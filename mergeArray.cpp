// #include <bits/stdc++.h> 
// using namespace std;
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
        int j = 0;

        printf("size: %f size2: %f\n", m, n);

        for (auto i: nums1)
            std::cout << i << ' ';

        for (auto i: nums2)
            std::cout << i << ' ';

        for(j; j < n; j++){

            for(int i = 0; i < m-n; i++){
                printf("nums1: %f, nums2: %f\n", nums1[i], nums2[j]);

                if(nums1[i] > nums2[j]){
                    // pre-append nums2[j]
                    
                    nums1.insert(nums1.begin() + i, nums2[j]);
                }
            }
        }
    }
};


int main(){
    std::vector<int> vector1 = {1,2,3,5};
    std::vector<int> vector2 = {4,6,7};

    Solution *sol = new Solution();

    sol->merge(vector1, vector1.size(), vector2, vector2.size());

    return 0;
}
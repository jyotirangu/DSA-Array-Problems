#include<iostream>
#include<vector>
using namespace std;


// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:
// Input: nums = [3,2,3]
// Output: 3

// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


//Brute Force Approch

// int main(){

//     int nums[] = {2,2,1,1,1,2,2};
//     int n = sizeof(nums) / sizeof(nums[0]);

//     for(int i = 0 ; i < n ; i++){

//         int count = 0;
//         for(int j = 0 ; j < n ; j++){

//             if(nums[i] == nums[j])
//             count++;
//             cout << "count : " <<  count << endl;

//         }
//         if(count > n/2){

//             cout << nums[i] << endl;
//             break;

//         }
            
//     }
// }


//Optimal Approch using Boyer- Moore Majority Vote Algorithm


int findMajorityElement(vector<int>& nums){
    int count = 0;
    int  candidate;

    for(int num : nums){
        if(count == 0)
            candidate = num;

        count += (num == candidate) ? 1 : -1;
    }
    return candidate;

}

int main(){

    vector<int> nums =  {2,2,1,1,1,2,2};
    cout << " Majority Element is : " << findMajorityElement(nums) << endl;

}
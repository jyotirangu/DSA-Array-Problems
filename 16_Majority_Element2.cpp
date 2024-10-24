#include<iostream>
#include<vector>
using namespace std;

//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

// Example 1:
// Input: nums = [3,2,3]
// Output: [3]

// Example 2:
// Input: nums = [1]
// Output: [1]

// Example 3:
// Input: nums = [1,2]
// Output: [1,2]

//Boyer-Moore Majority vote Algorithm

vector<int> majorityElement(vector<int>& nums){

    int n = nums.size();

    if(n = 0)
        return {};


    int candidate1 = 0;
    int candidate2 = 1;
    int count1 = 0;
    int count2 = 0;

    for(int num : nums){
        
        if(num == candidate1)
            count1++;

        else if(num == candidate2)
            count2++;

        else if(count1 == 0){

            candidate1 = num;
            count1 = 1;
        }

        else if(count2 == 0){
            candidate2 = num;
            count2 = 1;
        }

        else{
            count1--;
            count2--;
        }
    }

    //Verify the candidates by counting their occurances

    count1 = 0;
    count2 = 0;

    for(int num : nums){
        if(num == candidate1)
            count1++;

        else if(num == candidate2)
            count2++;
    }

        //result vector to store the element of the array that occur more than n/3 times
        vector<int> result;

        if(count1 > n/3)
            result.push_back(candidate1);
        
        if(count2 > n/3 && candidate2 != candidate1)
            result.push_back(candidate2);
    
    
    return result;

}


int main(){

    vector<int> nums = {2,2,1,1,1,2,2};

    //Vector to store elements
    vector<int> result = majorityElement(nums);

    //diplay the elements of the result vector
    for(int num : result){
        cout << num << " ";
    }
    
}

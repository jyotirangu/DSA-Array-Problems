#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.

// Examples:

// Input: arr = [16, 17, 4, 3, 5, 2]
// Output: [17, 5, 2]
// Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.

// Input: arr = [10, 4, 2, 4, 1]
// Output: [10, 4, 4, 1]
// Explanation: Note that both of the 4s are in output, as to be a leader an equal element is also allowed on the right. side

// Input: arr = [5, 10, 20, 40]
// Output: [40]
// Explanation: When an array is sorted in increasing order, only the rightmost element is leader.

// Input: arr = [30, 10, 10, 5]
// Output: [30, 10, 10, 5]
// Explanation: When an array is sorted in non-increasing order, all elements are leaders.


vector<int> leader(vector<int>& arr){

    int n = arr.size();
    vector<int> leaders;
    
    //Brute force approach

    // for(int i = 0 ; i < n ; i++){
    //     bool isleader = true; 
    //     for(int j = i+1 ; j < n ; j++){
    //         if(arr[i]<arr[j]){
    //             isleader = false;
    //             break;    
    //         }
    //         else
    //             isleader = true;
    //     }

    //     if(isleader)
    //         leaders.push_back(arr[i]);
    // }

    //optimal approach
    int element = arr[n-1];  // The last element is always a leader.
    leaders.push_back(element);  // Add the last element to the leaders.

    for(int i = n-2 ; i >= 0 ; i--){    // Start from the second-to-last element
        if(arr[i] >= element){
            leaders.push_back(arr[i]);
            element = arr[i];
        }
            
    }

    // Reverse the leaders vector to maintain the correct order
    reverse(leaders.begin(), leaders.end());


    return leaders;
}


int main(){

    vector<int> arr = {30, 10, 10, 5};
// Output: [30, 10, 10, 5]};
    vector<int> result;
    result = leader(arr);

    //Displaying the results
    for(int i: result)
        cout << i << " ";
}
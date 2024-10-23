#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//Pair Sum

// void findSum(int arr[], int size, int target){

//     for(int i = 0 ; i < size ; i++){

//         for( int j = i+1 ; j < size ; j++)
//         {
//             if( arr[i] + arr[j] == target)
//                 cout << "{" << arr[i] << ", " << arr[j] << "}";
//         }
//     }

// }

// int main(){

//     int arr[10];
//     int size;

//     cout << "Enter the size of the array : ";
//     cin >> size;

//     cout << "Enter the values in the array : ";

//     for ( int i = 0 ; i < size ; i++){

//         cin >> arr[i] ;
//     }

//     int target;

//     cout << "Enter the target : ";
//     cin >> target;

//     findSum(arr, size, target);
// }


//Pair2sum using vector
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

vector<int> twoSum(vector<int>& a, int target) {
        
    unordered_map<int, int> aMap;
    
    for(int i = 0 ; i < a.size() ; i++){
        int complement = target - a[i];


        //aMap.find(complement) : This tries to find the complement in the unordered_map. I fit exists, find() returns a interator pointing to the element. If it doesn't, it returns an iterator to aMap.end()

        //!= aMap.end() : This oart checks if the iterator returned by find() is not equal to aMap.end(). If they are not equal, it means the complement was found in the map.
        if(aMap.find(complement) != aMap.end())
            return{aMap[complement], i};

        aMap[a[i]] = i;
    }

    //The function returns an empty vector, indicating that no solution exists
    return {};
}


int main(){
    
    int n;
    int target;

    cout << "Enter the size of the vector : ";
    cin >> n;

    //Create a vector to store integers
    vector<int> a(n);

    //Input from user
    cout << "Enter the elements of the vector : ";
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    //Accessing element of the vector4
    cout << "The elements of the vector : ";
    for(int i = 0 ; i < a.size() ; i++){
        cout << a[i] <<" ";
    }

    cout << "Enter the target element : ";
    cin >> target;

    vector<int> result = twoSum(a, target);

    if(!result.empty()){
        cout << "Indices : " << result[0] << " " << result[1];
    }
    else
        cout << "No solution found !";
}
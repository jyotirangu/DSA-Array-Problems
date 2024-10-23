// For positive and zeros

// Given an array arr containing n integers and an integer k. Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value k.

// Examples:

// Input : n = 6, arr[] = {10, 5, 2, 7, 1, 9}, k = 15
// Output : 4
// Explanation: The sub-array is {5, 2, 7, 1}.

// Input : n= 3, arr[] = {-1, 2, 3}, k = 6
// Output : 0
// Explanation: There is no such sub-array with sum 6.

//Note : A subarray or substring will always be contiguous, but a subsequence need not be contiguous.


#include<iostream>
using namespace std;

int lenOfLongSubarr(int arr[],  int N, int K){

    int left = 0;
    int right = 0;
    long long int sum = arr[0];
    int maxlen = 0;

    while(right < N ){

        while(left < right && sum > K){
            sum -= arr[left];
            left++;
        }

        if(sum == K){
            maxlen = max(maxlen, right-left+1);
        }
        right++;

        if(right < N){
            sum += arr[right];
        }

    }
    return maxlen;
}

int main(){

    int arr[] = {10, 5, 2, 7, 1, 9};
    int ans = lenOfLongSubarr(arr, 6, 15);
    cout << "The length of the subarray : " << ans << endl;
}
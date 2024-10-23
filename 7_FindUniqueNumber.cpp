#include<iostream>
using namespace std;

//Find Unique number in array
//{ 2, 5, 3, 2, 6, 3, 6} in this only 5 is the unique number

int Unique( int arr[], int size){
    
    int ans = 0;

    for ( int i = 0 ; i < size ; i++){

        //we use XOR to get unique element

        ans ^= arr[i];
    }
    return ans;
}

int main() {

    int arr[7] ={ 2, 5, 3, 2, 6, 3, 6};
    int size = 7;
    cout << "Unique element is : " << Unique(arr, size);
}
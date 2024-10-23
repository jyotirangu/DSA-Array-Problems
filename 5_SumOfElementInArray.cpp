#include<iostream>
using namespace std;


int SumArray( int arr[], int size){   // Function definition

    int sum = 0;

    for (int i = 0 ; i < size ; i++){
        sum += arr[i];
    }
    return(sum);
}


int main() {                         // driver code

    int arr[10];
    int size;

    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the values in the array : ";

    for ( int i = 0 ; i < size ; i++){

        cin >> arr[i] ;
    }

    cout << "Sum of all elements of the Array : " << SumArray(arr, size);
}
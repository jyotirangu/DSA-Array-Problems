#include<iostream>
using namespace std;

int main() {

    // int arr[5]; // declaration of array
    // int arr1[5] = {1, 2, 3, 4, 5}; //Initializtion of the array
    // int arr2[] = {7, 4, 5, 6};      //Even if we not declare the size we can add values to it
    // int arr3[100] = {1, 2};

    // Accesing elements of the array using loop
    //For accessing the array we should know the size of the array

    int arr[10];
    int size;

    cout << "Enter the size of the array : ";
    cin >> size;

    // Initializing the values in the array using for loop
    cout << "Enter the values in the array : ";

    for ( int i = 0 ; i < size ; i++){

        cin >> arr[i] ;
    }

    // Accessing the values of the array using for loop

    cout << "The values of the array are : ";

    for (int i = 0 ; i < size ; i++){

        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Everything is Fine ";
}
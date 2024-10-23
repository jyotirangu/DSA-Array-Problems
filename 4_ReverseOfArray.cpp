#include<iostream>
using namespace std;

void ReverseArray ( int arr[], int size){

    int start = 0;
    int end = size - 1;

    while(start < end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        // using inbuilt function that is swap

        swap(arr[start], arr[end]);

        start ++;
        end --;
    }
}

void PrintArray( int arr[], int size){

    for (int i = 0 ; i < size ; i++){

        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[10];
    int size;

    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the values in the array : ";

    for ( int i = 0 ; i < size ; i++){

        cin >> arr[i] ;
    }

    cout << "The Array before reverse : ";
    printArray( arr, size);
    
    ReverseArray( arr , size);

    cout << "The Array After reverse : ";
    printArray( arr, size);

}
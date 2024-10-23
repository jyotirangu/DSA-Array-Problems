#include<iostream>
using namespace std;

//Swap alternate elements of the array


void AlternateSwap(int arr[], int size){

        for (int i = 0 ; i < size ; i += 2){
            
            if( i + 1 < size){
                swap(arr[i], arr[i + 1]);
            }
            
        }
}

void printArray( int arr[], int size){

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

    cout << "The Array Before swap : ";
    printArray( arr, size);

    AlternateSwap(arr, size);

    cout << "The Array After swap : ";
    printArray( arr, size);
}
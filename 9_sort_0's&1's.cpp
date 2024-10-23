#include<iostream>
using namespace std;



//Sort 0's and 1's


void SortArray( int arr[], int size){

    int left = 0;
    int right = size - 1 ;

    for( int i = 0 ; i < size ; i++){

        while( left < right){
            if (arr[left] == 0)
                left ++;

            else if (arr[right] == 1 )
                right --;

            else if( arr[left] == 1 && arr[right] == 0){
                swap(arr[left], arr[right]);
                left ++;
                right --;
            }
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

    cout << "Enter Only 0's and 1's in the array : ";

    for ( int i = 0 ; i < size ; i++){

        cin >> arr[i] ;
    }

    cout << "Array before sorting: ";

    printArray(arr, size);

    SortArray(arr, size);

    cout << "Sorted Array is : ";
    printArray(arr, size);
}
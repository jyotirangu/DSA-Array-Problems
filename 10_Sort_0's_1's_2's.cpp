#include<iostream>
using namespace std;


// Sort 0's, 1's and 2's


// void SortArray( int arr[], int size){

//     for( int i = 0 ; i < size ; i++){

//         for( int j = i + 1; j < size ; j++){

//             if( arr[i] > arr[j])
//                 swap(arr[i], arr[j]);   
//         }    
//     }
// }

//OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR

void SortArray( int arr[], int size){//optimise code

    int low = 0, mid = 0, high = size - 1;

    while ( mid <= high){

        if (arr[mid] == 0 ){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
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

    cout << "Enter Only 0's, 1's and 2's in the array : ";

    for ( int i = 0 ; i < size ; i++){

        cin >> arr[i] ;
    }

    cout << "Array before sorting: ";

    printArray(arr, size);

    SortArray(arr, size);

    cout << "Sorted Array is : ";
    printArray(arr, size);
}
#include<iostream>
using namespace std;

//Array with functions


void ArrayAccess(int arr[], int size){

    for ( int i = 1 ; i <= size ; i++){
        cout << arr[i] <<" ";
    }

}

int main() {

    int arr[10];
    int size;

    cout << "Enter the size of the array : ";
    cin >> size;

    arr[10] = {0};

    ArrayAccess(arr, size);
    
}

Finding max and min number

int ArrayMin( int arr[], int size){

    // int min = INT16_MAX;

    // for( int i = 0; i < size ; i++){

    //     if( arr[i] < min ){
    //         min = arr[i];
    //     }
    // }
    // return min;.

    //OOOOOOOOOOOOOOOOOOOOOOOOOORRRRRRRRRRRRRRRRRR
    // There are inbuilt functions made 

    int mini = INT16_MAX;

    for( int i = 0; i < size ; i++){

        mini = min(mini, arr[i]);
    }
    return mini;

}

int ArrayMax( int arr[], int size) {

    // int max = INT16_MIN;

    // for( int i = 0; i < size ; i++){

    //     if( arr[i] > max ){
    //         max = arr[i];
    //     }
    // }
    // return max;

    int maxi = INT16_MIN;

    for( int i = 0; i < size ; i++){

        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int main() {

    int arr[10];
    int size;

    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the values in the array : ";

    for ( int i = 0 ; i < size ; i++){

        cin >> arr[i] ;
    }

    cout << "The minimum element is : " << ArrayMin(arr, size) << endl;
    cout << "The maximum element is : " << ArrayMax(arr, size);
}
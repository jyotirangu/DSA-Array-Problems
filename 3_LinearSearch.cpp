#include<iostream>
using namespace std;

bool SearchKey(int arr[], int size, int key){

    for (int i = 0; i < size ; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
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

    int key;
    cout << "Enter the key to be found : ";
    cin >> key;

    bool ans = SearchKey( arr, size, key);

    if(ans){
        cout << "Key found "<< endl;
    }
    else{
        cout << "Key not found ";
    }
}
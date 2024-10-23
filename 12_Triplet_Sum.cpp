#include<iostream>
using namespace std;

//Triplet sum

void findTripletSum(int arr[], int size, int target){

    for(int i = 0 ; i < size ; i++)
    {
        for( int j = i + 1 ; j < size ; j++)
        {   
            for( int z = j + 1 ; z < size ; z++){
                //cout << " inside 3rd for loop "<< endl;
                int ans = arr[i] + arr[j] + arr[z];
                if( ans == target){
                    //cout << " inside 3rd if "<< endl;
                    //cout << arr[i] << arr[j] << arr[z];
                    cout << "{" << arr[i] << ", " << arr[j] <<", "<<arr[z]<<"}";
                }            
            } 
        }
    }
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

    int target;

    cout << "Enter the target : ";
    cin >> target;

    findTripletSum(arr, size, target);
}

#include<iostream>
#include <map>
using namespace std;

int lenOfLongSubarr(int a[],  int N, int K){

    map <long long, int> preSumMap;
    long long sum = 0;
    int maxlen = 0;

    for(int i = 0 ; i < N ; i++){

        sum += a[i];
        cout << "sum =   " << sum;

        if( sum == K )
            maxlen = max(maxlen, i+1);
        cout << "  maxlen = " << maxlen;

        long long rem = sum -K;
        cout << " rem = " << rem;

        if(preSumMap.find(rem) != preSumMap.end())
        {    
            int len = i - preSumMap[rem];
            maxlen = max(maxlen, len);
            cout << " IN 1st IF , maxlen = " << maxlen;
            cout << " preSumMap[rem] = " << preSumMap[rem] ;
        }
        
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
            cout << " IN 2nd IF , preSumMap[" << sum << "] = " << i ;
        }
        cout << endl;
    }
    return maxlen;

}


int main(){

    int a[] = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
    int ans = lenOfLongSubarr(a, 17, 15);
    cout << "The length of the subarray : " << ans << endl;
}


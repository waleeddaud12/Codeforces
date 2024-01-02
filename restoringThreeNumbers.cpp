#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[4];
    int max=INT_MIN;
    int maxIndex;
    for(int i=0;i<4;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max =arr[i];
            maxIndex = i;
        }
    }
    for(int i=0;i<4;i++){
        if(i==maxIndex){
            continue;
        }
        cout<<arr[maxIndex]-arr[i]<<" ";
    }
    
   
    return 0;
}
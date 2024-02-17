#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    int i;
    int score;
    while(t--){
        cin>>n;
        score = 0;
        long long int *arr = new long long int[2*n];
        for(i=0;i<2*n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+(2*n));
        for(i=0;i<2*n;i+=2){
            score += min(arr[i],arr[i+1]);
            arr[i] = 0; arr[i+1] = 0;
        }
        cout<<score<<endl;
        delete[]arr;
    }
    return 0;
}
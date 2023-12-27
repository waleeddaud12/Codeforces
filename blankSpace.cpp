#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        int arr[t] ;
        int count = 0;
        int max = 0; 
        for(int j=0;j<t;j++){
            cin>>arr[j];
            if(arr[j] == 0)  count++;
            if(count>max) max=count;
            if(arr[j]==1){
                count=0;
                continue;
            }
        }
        cout<<max<<endl;
        
    }
    return 0;
}
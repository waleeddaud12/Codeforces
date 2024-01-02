#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int chest=0,bicep=0,back=0;
    for(i=0;i<n;i+=3){
        chest+=arr[i];
    }
    for(i=1;i<n;i+=3){
        bicep+=arr[i];
    }
    for(i=2;i<n;i+=3){
        back+=arr[i];
    }
    //cout<<chest<<bicep<<back;
    if(chest>bicep&&chest>back) cout<<"chest\n";
    else if(bicep>chest && bicep>back)  cout<<"biceps\n";
    else cout<<"back\n";
    return 0;
}
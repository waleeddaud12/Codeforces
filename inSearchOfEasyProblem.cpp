#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans;
    bool flag =0 ;
    for(int i=1;i<=n;i++){
        cin>>ans;
        if(ans == 1) {
            flag = 1;
            break;

        }   
    }
    if(flag==1) cout<<"HARD";
    else     cout<<"EASY";
    return 0;
}
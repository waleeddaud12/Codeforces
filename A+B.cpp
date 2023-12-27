#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string ans;
    for(int i=0;i<n;i++){
        cin>>ans;
        
        int x = ans[0] - '0';
        int y= ans[2] - '0';
        cout<<x+y<<endl;;

    }
    
    return 0;
}
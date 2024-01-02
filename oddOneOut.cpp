#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a , b, c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a==b& a!=c)  cout<<c<<endl;
        else if(a==c && a!=b) cout<<b<<endl;
        else if(b==c && b!=a)   cout<<a<<endl;
    }
    return 0;
}
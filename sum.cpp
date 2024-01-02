#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    cin>>n;
    int a,b,c;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;
        if((a+b)==c)    cout<<"Yes\n";
        else if((b+c)==a)   cout<<"YES\n";
        else if((a+c)==b)   cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        string s;
        cin >> s;
        for(int j=0;j<s.length();j++){
            s[j]=tolower(s[j]);
        }
        if(s=="yes")
            cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
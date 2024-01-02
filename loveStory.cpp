#include<iostream>
using namespace std;
int countDifferentElement(string x){
    string given = "codeforces";
    int len = x.length();
    int i;
    int count=0;
    for(i=0;i<len;i++)
        if(x[i]!=given[i])  count++;
    return count;
}
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        string x;
        cin>>x;
        int ans = countDifferentElement(x);
        cout<<ans<<"\n";

    }
return 0;
}
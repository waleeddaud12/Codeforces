#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        int len;
        cin>>len;
        string input;
        cin>>input;
        int count[26] = {0};
        for(j=0;input[j]!=0;j++){
            count[input[j]-'A']++;
        }
        int sum=0;
        for(j=0;j<26;j++){
            if(count[j]!=0)
                sum += count[j]+1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string  words;
    int len;
    for(int i=0;i<n;i++){
        cin>> words;
        len = words.length();
        if(len>10){
            cout<<words[0]<<len-2<<words[len-1]<<endl;
        }
        else{
            cout<<words<<endl;;
        }
    }
    return 0;
}
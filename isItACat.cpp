#include<iostream>
#include<cctype>
using namespace std;

bool checkMeow(string meow){
    int start;
    int end=meow.length();
    int i;
    if(tolower(meow[0])!='m')    return 0;
    for(i=0;i<end;i++){
        if(tolower(meow[i])!='m')    break;
        else continue;
    }
    if(tolower(meow[i])!='e')    return 0;
    for(;i<end;i++){
        if(tolower(meow[i])!='e')    break;
        else continue;
    }
    if(tolower(meow[i])!='o')    return 0;
    for(;i<end;i++){
        if(tolower(meow[i])!='o')    break;
        else continue;
    }
    if(tolower(meow[i])!='w')    return 0;
    for(;i<end;i++){
        if(tolower(meow[i])!='w')    break;
        else continue;
    }
    if(meow[i]!=0)  return 0;
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        int l;
        cin>>l;
        string meow;
        cin>>meow;
        
        if(checkMeow(meow))    cout<<"YES\n";
        else                   cout<<"NO\n";
    }
    return 0;
}
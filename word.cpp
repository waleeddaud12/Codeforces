#include<iostream>
using namespace std;
void toUpper(string &ch){
    for(int i=0;ch[i]!=0;i++){
        if(ch[i]>='a'&&ch[i]<='z')
            ch[i] = ch[i] - 'a'+'A';
    }
}
void toLower(string &ch){
    for(int i=0;ch[i]!=0;i++){
        if(ch[i]>='A'&&ch[i]<='Z')
            ch[i] = ch[i] - 'A'+'a';
    }
}
int main()
{
    string ans;
    cin>>ans;
    int x = ans.length();
    int lower=0;
    int upper=0;
    for(int i=0;i<x;i++){
        if(ans[i]>='A'&&ans[i]<='Z')  upper++;
        if(ans[i]>='a'&&ans[i]<='z') lower++;
    }
        //cout<<upper<<" "<<lower<<endl;
    if(upper>lower) {
        toUpper(ans);
        
        cout<<ans;
    }
    else{
    toLower(ans);
    cout<<ans;

    } 
    return 0;
}
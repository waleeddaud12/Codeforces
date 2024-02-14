#include<iostream>
using namespace std;
string find(int num){
    string ans;
    int j,k,l;
    for(j=1;j<=26;j++){
        for(k=1;k<=26;k++){
            for(l=1;l<=26;l++){
                if((j+k+l)==num){
                    ans.push_back(j+'a'-1);
                    ans.push_back(k+'a'-1);
                    ans.push_back(l+'a'-1);
                    return ans;
                }
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    int i;
    
    int num;
    for(i=0;i<t;i++){
        cin>>num;
        string ans = find(num);
        // string ans;
        // for(j=1;j<=26;j++){
        //     for(k=1;k<=26;k++){
        //         for(l=1;l<=26;l++){
        //             if((j+k+l)==num){
        //                 ans.push_back(j+'a'-1);
        //                 ans.push_back(k+'a'-1);
        //                 ans.push_back(l+'a'-1);
        //                 break;
        //             }
        //         }
        //     }
        // }
        cout<<ans<<endl;
    }
    return 0;
}
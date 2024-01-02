#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        char arr[3][3];
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                cin>>arr[j][k];
            }
        }
        int MissingRow;
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                if(arr[j][k]=='?'){
                    MissingRow = j;
                    break;
                }
            }
        }
        //cout<<MissingRow<<endl;
        char one,two;
        char store[2];
        k=0;
        for(j=0;j<3;j++){
            if(arr[MissingRow][j]!='?'){
                store[k++] = arr[MissingRow][j];
                continue;
            }

        }
        k=0;
        if(store[k]=='A'&&store[k+1]=='B')  cout<<"C"<<endl;
        else if(store[k]=='B'&&store[k+1]=='A')  cout<<"C"<<endl;
        else if(store[k]=='B'&&store[k+1]=='C')  cout<<"A"<<endl;
        else if(store[k]=='C'&&store[k+1]=='B')  cout<<"A"<<endl;
        else if(store[k]=='A'&&store[k+1]=='C')  cout<<"B"<<endl;
        else if(store[k]=='C'&&store[k+1]=='A')  cout<<"B"<<endl;
        
        

    }
    return 0;
}
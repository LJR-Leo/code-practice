#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];}
        }        
    int panduan=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        int c=a[i][j];
        int hang_max=1,lie_min=1;
        for(int k=0;k<5;k++){
            if(a[i][k]>c) hang_max=0;
        }
        for(int k=0;k<5;k++){
            if(a[k][j]<c) lie_min=0;}
            if(hang_max==1&&lie_min==1){
                cout<<i+1<<" "<<j+1<<" "<<c;
                panduan=1;
            }
        }           
    }
    if(panduan==0) 
    {cout<<"not found";}

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[1105];
    cin>>s;
    int cnt[26]={0};
    for(int i=0;s[i]!='\0';i++){
        char c=s[i];
        cnt[c-'a']++;}
        for(int i=0;s[i]!='\0';i++){
            char c=s[i];
            if(cnt[c-'a']==1){
                cout<<c;
            return 0;
        }
                
    }cout<<"no"; 
    return 0;
}

  


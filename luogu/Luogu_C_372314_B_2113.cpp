#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[105];
    cin>>s;
    int i;
    for (i=0;s[i+1]!='\0';i++){
       char c=s[i+1]+s[i];
       cout<<c;
        }
    char l=s[i]+s[0];
    cout<<l;
    return 0;
}
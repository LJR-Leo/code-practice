#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    int a[105][105];
    cin>>m>>n;
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i==0 || i==m-1 || j==0 || j==n-1)
            {
                sum += a[i][j];
            }
        }
    }
    cout<<sum;
    return 0;
}

#include <iostream>
using namespace std;

const int MAXN = 105;
int a[MAXN][MAXN], b[MAXN][MAXN];

int main()
{
    int n, m;
    cin >> n >> m;

  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] + b[i][j];
            if (j != m - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n][n], i,j, sum=0;
    float average;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cin>>a[i][j];
            sum = sum + a[i][j];
        }
    }
    cout<<sum<<endl;
    int result = n*n;
    average = sum/result;
    cout<<average<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i;
    cin>>n;
    int arr[n];
    int maxi;
    for (i=1; i<=n; i++)
    {
        cin>>arr[i];
        maxi = arr[0];
        if (arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    cout<<maxi<<endl;


    return 0;
}

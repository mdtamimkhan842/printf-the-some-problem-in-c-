#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i;
    cin>>n;
    int arr[n], even_sum=0, odd_sum=0;
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
        if (arr[i]%2==0)
        {
            even_sum = even_sum+arr[i];
        }
        else
        {
            odd_sum= odd_sum+arr[i];
        }
    }
    cout<<even_sum<<endl;
    cout<<odd_sum<<endl;
    return 0;
}

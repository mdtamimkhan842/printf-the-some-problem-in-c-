#include <bits/stdc++.h>
#include <math.h>
using namespace std;
class member
{
    int n,c=0,k,m;
public:

    void division()
    {
        cin>>n;
        k = pow(n,2);
        cin>>m;
        for (int i=1; i<=k; i++)
        {
            if (m%i==0)
            {
                c++;
            }
        }
        if (c==0)
        {
            cout<<"Number is prime"<<endl;
        }
        else
        {
            cout<<"Number is not prime"<<endl;
        }
    }
};
int main ()
{
    member p;
    p.division();
    return 0;
}

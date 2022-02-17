#include <iostream>
using namespace std;
int a,n;
int main()
{
    cin>>n;
    while (n--)
    {
        cin>>a;
        int res =0;
        while(a) res+=a&1,a>>=1;
        cout<<res<<" ";
    }
    return 0;
}

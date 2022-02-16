#include <iostream>
#include <vector>
using namespace std;

vector<int> mul(vector<int> A,int b)
{
    int t = 0;
    vector<int> C;
    for(int i=0;i<A.size();i++)
    {
        t+=b*A[i];
        C.push_back(t%10); //本位
        t/=10;  //进位
    }
    while(t) 
    {
        C.push_back(t%10); 
        t/=10;
    }
    return C;
}

int main()
{
    string a;
    int b;

    cin >> a >> b;
    if(b==0) cout<<0;
    else
    {
    vector<int> A;
    for (int i = a.size() - 1; i >= 0; i -- ) A.push_back(a[i] - '0');

    auto C = mul(A, b);

    for (int i = C.size() - 1; i >= 0; i -- ) printf("%d", C[i]);
    }
    return 0;
}
//AcWing 829. 模拟队列
//https://www.acwing.com/problem/content/831/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

const int N = 1e6+10;
int m,x,q[N],hh=0,tt=-1;
//tail=-1;  head=0;  head>tial为空
int main()
{
    string s;
    cin>>m;

    while(m--)
    {
        cin>>s;
        if(s=="push")  cin>>x, q[++tt]=x;
        else if(s=="empty") cout<<(hh>tt?"YES":"NO")<<endl;
        else if(s=="pop") hh++;
        else cout<<q[hh]<<endl; //query
    }
    return 0;
}

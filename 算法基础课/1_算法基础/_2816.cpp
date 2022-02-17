#include <iostream>

using namespace std;

const int N=1e5+9;
int n,m,a[N],b[N];

int main()
{   
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);

    for(int i=0,j=0;i<n;i++)
    {
        while (j<m && a[i]!=b[j]) j++;
        if(j==m) //b扫完,仍然不匹配
            {cout<<"No"<<endl; return 0;}
        j++;//
    }
    cout<<"Yes"<<endl;
    return 0;
}
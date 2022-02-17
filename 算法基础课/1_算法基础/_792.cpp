//不压位
#include <iostream>
#include <vector>

using namespace std;

bool cmp(vector<int> A,vector<int> B)// 返回A>=B
{
    if(A.size()!=B.size()) return A.size()>B.size();
    for(int i=A.size()-1;i>=0;i--)//高位开始比较 
    {
        if(A[i]!=B[i]) return A[i]>B[i];
    }
    return true;
}

vector<int> sub(vector<int> A,vector<int> B)
{
    vector<int> C;
    for(int i=0,t=0;i<A.size();i++)//从低位开始相减
    {
        t = A[i]-t;
        if(i<B.size()) t-=B[i];
        C.push_back((t+10)%10); //借位与不借位合并
        if(t<0) t=1;//有借位
        else t=0; //无借位
        
    }
    while (C.size() > 1 && C.back() == 0) C.pop_back();//去前导0
    return C;
}

int main()
{
    string a,b;
    vector<int> A,B,C;
    cin>>a>>b;
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
    for(int i=b.size()-1;i>=0;i--) B.push_back(b[i]-'0');

    if (cmp(A, B)) C = sub(A, B);
    else C = sub(B, A), cout << '-';
    for (int i= C.size()-1; i>=0;i -- ) cout << C[i];
    cout << endl;
    return 0;
}


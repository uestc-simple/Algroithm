#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;

void merge(vector<PII> &segs)
{
    vector<PII> res;

    sort(segs.begin(), segs.end());//pair排序优先左端点

    int st = -2e9, ed = -2e9;
    for (auto item : segs)
    {
        if (ed < item.first)
        {
            if (st != -2e9) res.push_back({st, ed});
            st = item.first, ed = item.second; //无交集
        }
        else ed = max(ed, item.second); //有交集
    }
    if (st != -2e9) res.push_back({st, ed});//特判：输入为空的时 区间个数为1

    segs = res;
}

int main()
{
    int n;
    scanf("%d", &n);

    vector<PII> segs;
    for (int i = 0; i < n; i ++ )
    {
        int l, r;
        scanf("%d%d", &l, &r);
        segs.push_back({l, r});
    }

    merge(segs);

    cout << segs.size() << endl;

    return 0;
}
 
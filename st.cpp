#include<bits\stdc++.h>
using namespace std;
int a[1010];//原始输入数组
int st[1010][20];//st表
void init(int n)
{
    for (int i = 0; i < n; i++)
        st[i][0] = a[i];

    for (int j = 1; (1 << j) <= n; j++)
    {
        for (int i = 0; i + (1 << j) - 1 < n; i++)
            st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
    }
}
int search(int l, int r)
{
    int k = (int)(log((double)(r - l + 1)) / log(2.0));//k=log len 2;向下取整
    return min(st[l][k], st[r - (1 << k) + 1][k]);
}
int main()
{
    for (int i = 0; i < 8; i++)
    {
        a[i] = i+1;
    }
    init(8);
    return 0;
}
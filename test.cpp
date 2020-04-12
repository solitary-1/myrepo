/*#include<stdio.h>
int main()
{
    int a[500010];
    int n;
    while(1)
    {
        int sum=0;
        scanf("%d",&n);
        if(n==0) break;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    flag=1;
                    sum++;
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
            if(flag==0) break;
        }
        printf("%d\n",sum);
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 7;
int viss[maxn];
int prime[100000+7];
int flag = 1;
void Prime(int a)
{
    int vis[maxn];
	memset(vis, 0, sizeof(vis));
	memset(prime, 0, sizeof(prime));
    int sum=0;
    vis[2]=0;
	for (int i = 2; i <=a+2; i++)
	{
		if (!vis[i])
		{
            sum++;
			prime[flag++] = i;
			for (int j = 2 * i; j <= a+2; j+=i)
			{
                if(!vis[j]) vis[j] = sum;
			}
		}
	}
}
int main()
{
    int n;
    scanf("%d",&n);
    Prime(n);
    for(int i=2;i<n;i++)
    {
        printf("%d ",viss[i]);
    }
    printf("%d\n",viss[n]);
    return 0;
}
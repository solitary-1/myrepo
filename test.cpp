#include<stdio.h>
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
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    sum++;
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
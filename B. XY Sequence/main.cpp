#include<cstdio>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long n,B,x,y;
        scanf("%lld%lld%lld%lld",&n,&B,&x,&y);
        long long now=0,sum=0;
        while(n--)
        {
            if(now+x<=B) now+=x;
            else now-=y;
            sum+=now;
        }
        printf("%lld\n",sum);
    }
}

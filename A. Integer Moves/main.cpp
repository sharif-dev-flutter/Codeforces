#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int b,c;
        cin>>b>>c;
        if(b==0&c==0)
        {
            cout<<0<<endl;
        }
        else if(sqrt(b*b+c*c)==(int)sqrt(b*b+c*c))
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
}

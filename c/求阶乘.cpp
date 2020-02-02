#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0 || n==1)
            cout<<1<<endl;
        else
        {
            int a[10000]={0},i,j,sum,t,k,q;
            a[0]=1;
            k=1;
            for(i=2;i<=n;i++)
            {
                sum=0;
                for(j=0;j<k;j++)
                {
                    t=a[j]*i+sum;
                    a[j]=t%10;
                    sum=t/10;
 
                }
                while(sum)
                {
                    a[k++]=sum%10;
                    sum/=10;
                }
            }
            for(q=k-1;q>=0;q--)
                cout<<a[q];
            cout<<endl;
 
        }
    }
                 
    return 0;
}


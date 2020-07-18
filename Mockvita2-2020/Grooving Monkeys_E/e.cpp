#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            ll a[n+1],b[n+1],i,j=0,k=0,ans=0,d=0;
            for(i=1;i<=n;i++)
            {
                cin>>a[i];
                b[i]=a[i];
            }
            for(i=1;i<=n;i++)
            {
                if(true)
                {   j=b[i];k=1;
                    while(b[i]!=0)
                    {
                        if(i==j)
                            {break;}
                        else
                            {
                                d=b[j];
                                b[j]=0;
                                j=d;
                                k++;
                            }
                    }

                if(ans==0)
                {
                    ans=k;
                }
                else
                {
                    ans=(ans*k)/gcd(ans,k);
                }
                }

            }

            cout<<ans<<endl;
        }

    }

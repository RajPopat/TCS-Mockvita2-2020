#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

ll pow1(ll a,ll b)
{
    ll t=1;
    while(b>0)
    {
        t=t*a;
        b--;
    }
    return t;
}
int binomialCoeff(int n, int k)
{
    // Base Cases
    if (k == 0 || k == n)
        return 1;

    // Recur
    return binomialCoeff(n - 1, k - 1) +
                binomialCoeff(n - 1, k);
}


int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            ll a=0,h=0,l1=0,l2=0,m=0,c=0,i=0,j=0,k=0,ans=0,p=0,q=0,r=0,p1=0,p2=0;
            cin>>a>>h>>l1>>l2>>m>>c;//cout<<l1<<endl;
            if(m*(a+c)<h)
            {
                cout<<"RIP"<<endl;
            }
            else if(m*a>=h)
            {
                cout<<"1/1"<<endl;
            }
            else
            {
                p=h-m*a;
                p=(p/c)+1;cout<<p<<endl;
                for(i=p;i<=m;i++)
                {
                    cout<<binomialCoeff(m,i)<<" "<<pow1(l1,i)<<" "<<pow1(l2-l1,m-i)<<endl;
                    p1=p1+binomialCoeff(m,i)*pow(l1,i)*pow(l2-l1,m-i);

                     cout<<p1<<endl;

                }
                      p2=p2+pow(l2,m);
                    k=gcd(p1,p2);cout<<k<<endl;
                    p1=p1/k;
                    p2=p2/k;
                    cout<<p1<<"/"<<p2<<endl;

            }


        }

    }

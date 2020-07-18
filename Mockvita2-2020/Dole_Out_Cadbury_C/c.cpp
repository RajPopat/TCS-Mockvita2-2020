#include<bits/stdc++.h>
using namespace std;


int main()
{
    int p,q,r,s,i,j,i1,j1,sum=0;
    cin>>p>>q;
    cin>>r>>s;


    for(i1=p;i1<=q;i1++)
    {
        for(j1=r;j1<=s;j1++)
        {
            i=i1;j=j1;
            while(true)
            {
                if(i==j)
                {
                    sum=sum+1;
                    break;
                }
                else if(i>j)
                {
                    if(i%j==0)
                    {
                        sum=sum+i/j;
                        break;
                    }
                    else
                    {
                        sum++;
                        i=i-j;
                    }
                }
                else
                {
                    if(j%i==0)
                    {
                        sum=sum+j/i;
                        break;
                    }
                    else
                    {
                        sum++;
                        j=j-i;
                    }
                }

            }

        }
    }
    cout<<sum;



}



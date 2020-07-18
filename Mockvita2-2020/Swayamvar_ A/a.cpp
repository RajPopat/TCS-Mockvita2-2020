#include<bits/stdc++.h>
using namespace std;


int main()
{
 int n,i,j,k;
 cin>>n;
 int g[n],b[n],gr=0,gm=0,br=0,bm=0,lr,lm;
 char drink;
 for(i=0;i<n;i++)
 {
     cin>>drink;
     if(drink=='r')
        {g[i]=1;gr++;lr=i;}
     else
        {g[i]=0;gm++;lm=i;}
 }
 for(i=0;i<n;i++)
 {
     cin>>drink;
     if(drink=='r')
        {b[i]=1;br++;}
     else
        {b[i]=0;bm++;}
 }

 if(gr==br && gm==bm)
    cout<<0;
 else if(gr>br && gm<bm)
 {   k=0;
     for(i=0;i<n;i++)
     {
        if(g[i]==1)
        {
            k++;
        }
        if(k==br+1)
        {
            cout<<n-i;
            break;
        }
     }
 }
  else if(gr<br && gm>bm)
{   k=0;
     for(i=0;i<n;i++)
     {
        if(g[i]==0)
        {
            k++;
        }
        if(k==bm+1)
        {
            cout<<n-i;
            break;
        }
     }
 }

}



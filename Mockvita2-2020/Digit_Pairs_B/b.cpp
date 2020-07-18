    #include<bits/stdc++.h>
    using namespace std;

    int maximum(int no)
    {   int max1=0,c,i;
       for(i=0;i<3;i++)
       {
           c=no%10;
           if(c>max1)
            max1=c;
           no=no/10;
       }
       return max1;
    }

    int minimum(int no)
    {   int min1=10,c,i;
       for(i=0;i<3;i++)
       {
           c=no%10;
           if(c<min1)
            min1=c;
           no=no/10;
       }
       return min1;
    }

    int main()
    {   int c[10]={0,0,0,0,0,0,0,0,0,0},d[10]={0,0,0,0,0,0,0,0,0,0};
        int n,sum=0;
        cin>>n;
        int a[n],b[n],i,j,k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=(maximum(a[i])*11+minimum(a[i])*7)%100;
            if(i%2==0)
                c[b[i]/10]++;
            else
                d[b[i]/10]++;
        }
        for(i=0;i<10;i++)
        {
            if(c[i]>=d[i])
            {
            if(c[i]>2)
                sum+=2;
            else if(c[i]==2)
                sum+=1;
            }
            else
            {

            if(d[i]>2)
                sum+=2;
            else if(d[i]==2)
                sum+=1;
            }
        }

    /*
        for(i=0;i<n;i++)
            cout<<b[i]<<endl;
        */

        cout<<sum<<endl;

    }

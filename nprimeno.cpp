#include <iostream>
#include<math.h>
using namespace std;


void prime(int a[][2],int t)
{
    int l,x,k;
    int m,n;
    for(l=0;l<t;l++)
    {
        m=a[l][0];
        n=a[l][1];
        
        while(m<=n)
        {
            if(m==1)
             ++m;
       
       
          if(m>1)
         {
            for(x=2;x<=sqrt(m);x++)
            {
                if((m%x)==0)
                {
                      k=1;
                      continue;
                 }
               
           }
           if(k==0)
           {
               cout<<m<<endl;
           }
          
       }
       k=0;
       ++m;
        }
        cout<<endl;
    }
    
}

int main() 
{
    int a[10][2];
    int t;
    
    cin>>t;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
        
        

    }
    
    prime(a,t);
   
	return 0;
}


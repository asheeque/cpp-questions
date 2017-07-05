#include <iostream>


using namespace std;

int main()
{
    int n,q,i,j;
    string a[1000],b[1000];
    static int countno[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
     cin>>a[i];
    }

   cin>>q;
   for(i=0;i<q;i++)
   {
       cin>>b[i];
   }

for(i=0;i<q;i++)
{

    for(j=0;j<n;j++)
    {

        if(b[i]==a[j])
            countno[i]++;
    }
}
for(i=0;i<q;i++)
{
    cout<<countno[i]<<endl;
}

    return 0;
}
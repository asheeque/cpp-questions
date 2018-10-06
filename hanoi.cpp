//Anas, Lets code!!


#include <iostream>
using namespace std;

void hanoi(int n,char src, char dest, char helper)
{
   if(n==0)
   	return;


	hanoi(n-1,src,helper,dest);

	cout<<"move "<<n<<"th disk"<<" from "<<src<<" to "<<dest<<endl;

	hanoi(n-1,helper,dest,src) ;
}

int main()
{
	int ndisk;
	cin>>ndisk;

	hanoi(ndisk,'A','B','C');

return 0;	
}
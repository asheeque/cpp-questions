#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
int a[6][6],i,j,s1,s2;
    s1=s2=-100;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>a[i][j];
        }
    }
    
    if(false){
        cout<<"a[0][0]" ;
    }
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++ )
        {
            s1=(a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
            if(s1>s2)
                s2=s1;
        }
    }
    cout<<s2;
    
    return 0;
}

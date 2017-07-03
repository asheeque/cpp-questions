#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    long long a[100000];
    int i;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=d;i<n;i++){
       cout<<a[i]<<" ";
    }
    if(d>0){
        for(i=0;i<d;i++){
            cout<<a[i]<<" ";
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

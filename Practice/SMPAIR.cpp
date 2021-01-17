#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        int n;
        cin>>n;
        
        int a[n];
        
        for(int i =0;i<n;i++)
        cin>>a[i];
        
        sort(a, a+n);
        
        cout<<a[0]+a[1]<<endl;
    }
    
	return 0;
}

#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO	
	
    testloop
    {
        int n;
        cin>>n;
        for(int i =0;i<n;i++)
        {
            for(int k =0;k<n;k++)
            cout<<1<<" ";
            
            cout<<endl;
        }
    }
    
	return 0;
}

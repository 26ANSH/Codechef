#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)
#define ll long long int
#define ull unsigned long long int
#define loop(a, b) for(int i = a; i<b; i++)

int main() 
{
    fastIO
	
    testloop
    {
        int coins, n, max = 0;
        
        cin>>coins>>n;
        
        for(int i = n; i>0; i--)
        if( coins%i > 0)
        if(max < coins%i)
        max = coins%i;
        
        cout<<max<<endl;
    }
    
	return 0;
}

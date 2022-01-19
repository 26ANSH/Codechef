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
        int sunny = 0, temp = 1;
        
        loop(0,7)
        {
            cin>>temp;
            
            if(temp == 1)
            sunny++;
        }
        
        if(sunny >3)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
	return 0;
}

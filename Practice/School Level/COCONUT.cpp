#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        int A, B, A_quant, B_quant;
        cin>>A>>B>>A_quant>>B_quant;
        
        cout<< (A_quant/A) + (B_quant/B) <<endl;
    }
    
    
	return 0;
}

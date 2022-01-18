#include <iostream>
#include <cmath>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)
#define ll long long int
#define ull unsigned long long int
#define loop(a, b) for(int i = a; i<b; i++)

int main() 
{
    fastIO
	
    int cell;
    cin>>cell;
        
    cout<<pow(cell, 2)/2<<endl;
    
	return 0;
}

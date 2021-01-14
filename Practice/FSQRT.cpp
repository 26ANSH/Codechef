#include <iostream>
#include <cmath>
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
        cout<<round(sqrt(n))<<endl;
    }
    
	return 0;
}

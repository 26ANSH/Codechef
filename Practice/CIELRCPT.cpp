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
        int menu = 0;
        int n;
        cin>>n;
        int i = 12;
        
        while(i--)
        {
          if(n==0)
          break;
          
          menu += n/(int)(pow(2, i));
          n %= (int)(pow(2, i));
        }
        
        cout<<menu<<endl;
    }
    
	return 0;
}

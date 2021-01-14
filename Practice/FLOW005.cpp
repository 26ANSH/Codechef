#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    int currency[] = {100, 50, 10, 5, 2, 1};
    
    while(test--)
    {
        int n, count =0;
        cin>>n;
        
        for(int i=0;i<6;i++)
        {
            count += n/currency[i];
            n %= currency[i];
            
            if(n==0)
            break;
        }
        
        cout<<count<<endl;
    }
    
	return 0;
}

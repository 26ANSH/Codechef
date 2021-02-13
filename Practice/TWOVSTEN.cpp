#include <iostream>
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
        
        if(n%5 == 0)
        {
            int i = 1;
            
            while( ((n*i)%10)!=0 )
            i++;
            
            cout<<i-1<<endl;
        }
        else
        cout<<-1<<endl;
    }
    
	return 0;
}

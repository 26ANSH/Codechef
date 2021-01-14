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
        int num;
        cin>>num;
        int rev =0, rem =0; 
        while(num!=0)
        {
            rem=num%10;
            rev= (rev*10) +rem;
            num/=10;
        }
        
        cout<<rev<<endl;
    }
    
	return 0;
}

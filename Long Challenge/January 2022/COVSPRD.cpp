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
        int people, days;
        cin>>people>>days;
        
        if (days == 0)
        cout<<1<<endl;
        else if( days<=10)
        {
            int temp = pow(2, days);
            
            if (temp<=people)
            cout<<temp<<endl;
            else
            cout<<people<<endl;
        }
        else
        {
            days -= 10;
            unsigned long long int temp = 1024;
            
            bool flag = true;
            
            while(days--)
            {
                temp *= 3;
                if(temp >= people)
                {
                    flag = false;
                    break;
                }
            }
            
            if(flag)
            {
                cout<<temp<<endl;
            }
            else
            {
                cout<<people<<endl;
            }
            
            
        }
    }
    
	return 0;
}

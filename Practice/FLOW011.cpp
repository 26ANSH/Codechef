#include <iostream>
#include <iomanip>
using namespace std;
#define big long double

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
        big salary;
        cin>>salary;
        
        if(salary >= 1500)
        {
            salary = salary + 500.00 + (salary*0.98);
        }
        else
        {
            salary = salary + (salary*0.1) + (salary*0.9);
        }
        
        cout<< fixed << setprecision(2)<<salary<<endl;
    }
    
	return 0;
}

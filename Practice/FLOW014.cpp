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
        float hard, cc, ten;
        cin>>hard>>cc>>ten;
        
        int grade = 5;
        
        if(hard>50 && cc<0.7 && ten>5600)
        grade = 10;
        else if(hard>50 && cc<0.7)
        grade = 9;
        else if(ten>5600 && cc<0.7)
        grade = 8;
        else if(hard>50 && ten>5600)
        grade = 7;
        else if(hard>50 || cc<0.7 || ten>5600)
        grade = 6;
        
        cout<<grade<<endl;
    }
    
	return 0;
}

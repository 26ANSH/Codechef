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
       
       string str;
       cin>>str;
       
       bool y = false;
       bool in = false;
       
       for(int i =0; i<n; i++)
       {
           if(str[i] == 'Y')
           y = true;
           
           if(str[i] == 'I')
           in = true;
           
       }
       
       if(in == true)
       cout<<"INDIAN\n";
       else if(y == true)
       cout<<"NOT INDIAN\n";
       else 
       cout<<"NOT SURE\n";
       
    }
    
	return 0;
}

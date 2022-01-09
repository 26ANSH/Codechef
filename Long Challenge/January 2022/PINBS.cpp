#include <iostream>
#include <string>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    cin>>test;
    
    while(test--)
    {
     string binaryString;
     cin>>binaryString;
     
     bool flag = true;
     
     if(binaryString.length()>1)
     {
        for(int i = 0; i<binaryString.length(); i++)
        {
            if(binaryString[i] == '1')
            if(i+1 != binaryString.length())
            {
                flag = false;
                break;
            }
            
        }
        
        if(flag == true)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
     }
     else
     {
        cout<<"No"<<endl;
     }
    
    }
    
	return 0;
}

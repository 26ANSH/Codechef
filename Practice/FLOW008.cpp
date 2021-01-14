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
        
        if(n<10)
        cout<<"Thanks for helping Chef!"<<endl;
        else
        cout<<-1<<endl;
    }
    
	return 0;
}

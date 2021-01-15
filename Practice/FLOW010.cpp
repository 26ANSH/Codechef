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
        char code;
        cin>>code;
        
        code = toupper(code);
        
        if(code == 'B')
        cout<<"BattleShip\n";
        else if(code == 'C')
        cout<<"Cruiser\n";
        else if(code == 'D')
        cout<<"Destroyer\n";
        else
        cout<<"Frigate\n";
    }
    
	return 0;
}

#include <iostream>
using namespace std;
bool isvowel(int n)
{
    int vow[] = {65, 69, 73, 79, 85};
    
    for(int i=0; i<5; i++)
    if(n == vow[i])
    return true;
    
    return false;
}
int main() 
{
	char c;
	cin>>c;
	if(isvowel((int)c))
	cout<<"Vowel";
	else
	cout<<"Consonant";
	return 0;
}

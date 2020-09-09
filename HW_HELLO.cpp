#include<iostream>
#include<string>
using namespace std;
int main()
{
	char STR[50];
	int lenSTR;
	cout << "Enter String\t: ";
	cin >> STR;
	lenSTR = strlen(STR);
	cout << "Reverse String\t:";
	for(int i = lenSTR; i >= 0; i--)
	{
		cout << (char)toupper(STR[i]);
	}
	cout << endl;
	system("pause");
	return 0;
}
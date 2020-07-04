#include <iostream>
using namespace std;
/*int main()
{
	int a=10;
	do
	{
		cout << a;
		cout << "\n";
		a++;
	}
	while(a<30);
	return 0;
}*/

/*int main()
{
	int a=10;
	do
	{
		cout << a;
		cout << "\n";
		a++;
		if(a>20)
		{
			break;
		}
	}
	while(a<30);
	return 0;
}*/

int main()
{
	int a=10;
	do
	{
		if(a==20)
		{
			a++;
			continue;
		}
		cout << a;
		cout << "\n";
		a++;
		if(a>25)
		{
			break;
		}
		
	}
	while(a<30);
	return 0;
}




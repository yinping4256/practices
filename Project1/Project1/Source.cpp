#include <iostream>
using std::cout;

int main()
{

	int *p = new int[10];
	
	for (int i = 0; i < 10; i++)
	{
		cout << *p << " " ;
	}
	getchar();
	return 0;
}
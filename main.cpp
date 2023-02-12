#include <iostream> 
using namespace std;
int main()
{
	int a, n;
	cout << "Input number a:";
	cin >> a;
	cout << "Input stepin n:";
	cin >> n;
	int result = 1;
	if (n == 0)
	{
		cout << result;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			result *= a;
		}
		cout << result;
	}
}
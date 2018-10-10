#include <iostream>
using namespace std;
int main()
{
	int t, x,tem,tem2;
	cin >> t;
	while (t--)
	{
		tem = 0;;
		cin >> x;
		if (x % 2 != 0)
		{
			cout << x << endl;
			continue;
		}
			
		while (x != 0)
		{
			tem = tem << 1;
			tem = tem + (x & 1);
			x = x >> 1;
			
		}
		cout << tem << endl;
	}
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int calcPow(int n)
{
	//int bits = log2(n)+1;

	int sum = 0, i = 0, temp = n;

	while(n>0)
	{
		if(n&1)
		{
			sum += temp<<i;
		}

		n>>=1;
		i++;
	}

	return sum;
}
int main(int argc, char const *argv[])
{
	int num ;
	cin >> num ;

	cout << calcPow(num);

	return 0;
}
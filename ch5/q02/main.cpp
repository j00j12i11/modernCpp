#include <iostream>

using namespace std;

void half(double& num);

int main() {
	double n = 20;
	half(n);
	cout << n;
}

void half(double& num)
{
	num /= 2;
}

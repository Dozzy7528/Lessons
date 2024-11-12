#include <iostream>
using namespace std;

int main()
{
	cout << "Enter four numbers, each on a new line:\n";
	float a, b, c, d;
	cin >> a, cin >> b, cin >> c, cin >> d;
	float end;
	end = ((a * d) + (b * c)) / (a * d);
	cout << "Output of program:" << " " << end;
}
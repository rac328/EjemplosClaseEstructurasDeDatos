#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	int x = 'a';
	x = x + 'b';
	char c = x;
	cout << "El valor del int \"x\" es " << x << "." << endl;
	cout << "El valor del int \"c\" es " << c << "." << endl;	
	
	return 0;
}

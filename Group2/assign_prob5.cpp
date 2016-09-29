#include <iostream>
#include <cstring>

using namespace std;

int ascVal(size_t ip, const char* p)
{
	// Return the ASCII value of the char
	if(!p || ip > strlen(p)) {
		return  -1;
	}
	else {
	return p[ip];
	}
}

int main() {
	char character = 'a';
	char* pchar = &character;
	cout << "The ascii value of " << character << " is: " << ascVal(0, pchar) << endl;
	system("pause");
	return 0;
}

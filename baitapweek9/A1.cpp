#include <iostream>
#include <cstring>
using namespace std;
const char* concat(const char* s1, const char* s2)
{
	char* s = new char;
	int n=strlen(s1),t=strlen(s2);
	for (int i = 0; i < n; i++) *(s + i) = *(s1 + i);
	for (int i = 0; i < t; i++) *(s + n + i) = *(s2 + i);
	return s;
}
int main()
{
	char* s1 = new char;
	char* s2 = new char;
	cin >> s1;
	cin >> s2;
	const char* result = concat(s1, s2);
	cout << result;
	return 0;
}

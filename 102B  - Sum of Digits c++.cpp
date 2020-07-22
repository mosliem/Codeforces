#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int total = 0, cnt = 0;
	while (s.length() > 1)
	 {
		for (int i = 0; i < s.length(); i ++) 
		{
				total += (s[i] - '0');
		}
		s.clear();
		s = to_string(total);
		total = 0;
		cnt++;
	 }
	cout << cnt;
}
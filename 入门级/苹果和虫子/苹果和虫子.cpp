#include <iostream>
using namespace std;

int main(){
	int n = 0, x = 0, y = 0;
	cin >> n >> x >> y;
	if (y / x >= n)
		cout << 0 << endl;
	else if (y % x == 0)
		cout << n - y / x << endl;
	else
		cout << n - y / x - 1 << endl;
        return 0;
}
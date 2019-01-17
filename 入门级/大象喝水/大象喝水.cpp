#include <iostream>
using namespace std;

int main(){
	int h = 0, r = 0;
	float cap = 0;
	cin >> h >> r;
	cap = 3.14159 * r*r*h;
	cout << (int)(20000 / cap) + 1 << endl;
        return 0;
}
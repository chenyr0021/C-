#include <iostream>
using namespace std;

int main(){
        int n = 0;
	cin >> n;
	for (int i = 2; i >= 0; i--) {
		int temp = 1;
		for (int j = 0; j < i; j++)
			temp *= 10;
		cout << n / temp << endl;
		n %= temp;
	}
        return 0;
}
#include <iostream>
using namespace std;

int main(){
        int nums[6] = { 0 };
	int maxOdd = 0, minEven = 100;
	for (int i = 0; i < 6; i++) {
		cin >> nums[i];
		if (nums[i] % 2 == 0 && nums[i] < minEven)
			minEven = nums[i];
		else if (nums[i] % 2 == 1 && nums[i] > maxOdd)
			maxOdd = nums[i];
	}
	cout << (maxOdd > minEven ? (maxOdd - minEven) : (minEven - maxOdd));*/
        return 0;
}
#include <vector>
#include <iostream>

using namespace std;

int main() {
	int x; vector<int> v;
	while (true) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>> ";
		cin >> x;
		
		if (x == 0) break;
		
		v.push_back(x);
		int sum = 0;
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
			sum += v[i];
		}
		cout << endl << "평균 = " << sum / v.size() << endl;

	} 
}
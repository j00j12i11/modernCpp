#include <vector>
#include <iostream>

using namespace std;

int main() {
	int x; vector<int> v;
	while (true) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>> ";
		cin >> x;
		
		if (x == 0) break;
		
		v.push_back(x);
		int sum = 0;
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
			sum += v[i];
		}
		cout << endl << "��� = " << sum / v.size() << endl;

	} 
}
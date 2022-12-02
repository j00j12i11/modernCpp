#include <iostream>

using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size) {
		int* result = new int[size*2];
		for (int i = 0; i < size; i++) {
			result[i] = s1[i];
			result[i + 5] = s2[i];
		}
		return result;
	}

	static int* remove(int s1[], int s2[], int size, int& retSize) {
		int* result;
		retSize = size;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (s1[i] == s2[j]) { s1[i] = NULL; retSize -= 1; break; }
			}
		}
		
		result = new int[retSize];
		for (int i = 0; i < retSize; i++) {
			for (int j = 0; j < size; j++) {
				if (s1[j] != NULL) {
					result[i] = s1[j];
					s1[j] = NULL;
					break;
				}
			}
		}
		
		return result;
	}
};

int main() {
	int x[5];
	int y[5];
	cout << "���� 5 �� �Է��϶�. �迭 x�� �����Ѵ� >> ";
	cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];
	cout << "���� 5 �� �Է��϶�. �迭 y�� �����Ѵ� >> ";
	cin >> y[0] >> y[1] >> y[2] >> y[3] >> y[4];

	int* concat = ArrayUtility2::concat(x, y, 5);
	cout << "��ģ ���� �迭�� ����Ѵ�." << endl;
	for (int i = 0; i < 10; i++) cout << concat[i] << ' ';
	cout << endl;

	int retSize;
	int* remove = ArrayUtility2::remove(x, y, 5, retSize);
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << retSize << endl;
	for (int i = 0; i < retSize; i++) cout << remove[i] << ' ';
	cout << endl;
}
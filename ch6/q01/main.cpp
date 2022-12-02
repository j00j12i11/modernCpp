#include <iostream>

using namespace std;

/* (1) 함수 중복정의 이용 */
//int add(int array1[], int length) {
//	int result = 0;
//	for (int i = 0; i < length; i++) {
//		result += *(array1 + i);
//	}
//	return result;
//}
//int add(int array1[], int length, int array2[]) {
//	int result = 0;
//	for (int i = 0; i < length; i++) {
//		result += *(array1 + i);
//		if (array2 != nullptr)
//			result += *(array2 + i);
//	}
//	return result;
//}

/* (2) 디폴트 매개변수 이용 */
int add(int *array1, int length, int* array2=nullptr) {
	int result = 0;
	for (int i = 0; i < length; i++) {
		result += *(array1 + i);
		if (array2 != nullptr)
			result += *(array2 + i);
	}
	return result;
}


int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}
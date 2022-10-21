#include <iostream>
#include <string>

using namespace std;


int main() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;

	char str[10000];
	cin.getline(str, 10000, ';');
	
	int nums[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int total=0;

	int i = 0;
	while (true)
	{
		if (str[i] < 0) break;
		if (isalpha(str[i])) {
			total += 1;
			char temp = tolower(str[i]);
			nums[temp - 97] += 1;
		}
		i++;
		
	}

	cout << "\n총 알파벳 수 " << total << endl << endl;
	
	for (int i = 0; i < 26; i++) {
		cout << char(i + 97) << " (" << nums[i] << ") -> ";
		for (int j = 0; j < nums[i]; j++) cout << "*";
		cout << endl;
	}
	

	return 0;
}
#include <iostream>
#include <string>

using namespace std;


int main() {
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;

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

	cout << "\n�� ���ĺ� �� " << total << endl << endl;
	
	for (int i = 0; i < 26; i++) {
		cout << char(i + 97) << " (" << nums[i] << ") -> ";
		for (int j = 0; j < nums[i]; j++) cout << "*";
		cout << endl;
	}
	

	return 0;
}
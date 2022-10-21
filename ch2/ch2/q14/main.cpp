#include <iostream>

using namespace std;

int main() {
	int total = 0;
	
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;

	char menu[100]; int num;
	while (total <= 20000) {
		cout << "주문>>";
		cin >> menu >> num;
		
		if (strcmp(menu, "에스프레소") == 0) {
			num *= 2000;
			cout << num << "원입니다. 맛있게 드세요" << endl;
			total += num;
		}
		else if (strcmp(menu, "아메리카노") == 0) {
			num *= 2300;
			cout << num << "원입니다. 맛있게 드세요" << endl;
			total += num;
		}
		else if (strcmp(menu, "카푸치노") == 0) {
			num *= 2500;
			cout << num << "원입니다. 맛있게 드세요" << endl;
			total += num;
		}
		else {
			cout << "다시 입력해주세요." << endl;
		}
	}

	cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일봐요~~~";

	return 0;
}
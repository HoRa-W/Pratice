#include "Support_Main.h"

void Sup_main::MenuBasic() {
	cout << "\nXin ban hay lua chon cac lua chon sau\t\n";
	cout << "1. Mo may tinh\n";
	cout << "2. Tat may tinh\n";
	cout << "3. Bat che do ngu\n";
	cout << "4. Thoat khoi trinh gia lap\n\n";
}

void Sup_main::Run_Code(int& Term) {
	bool Change = true;
	while (Change)
	{
		int n;
		MenuBasic();
		cout << "\nXin hay nhap so de chon: "; cin >> n;
		switch (n)
		{
		case 1:
			RunPC(Term);
			break;
		case 2:
			Turn_off_PC(Term);
			break;
		case 3:
			SleepPC(Term);
			break;
		case 4:
			Change = false;
			break;
		default:
			cout << "Xin moi ban nhap lai\n";
		}
	}
}
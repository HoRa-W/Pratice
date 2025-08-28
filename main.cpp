#include <iostream>
#include "PC.h"
#include "Support_PC.h"
#include "Support_Main.h"
#include "PlayingGame.h"

using namespace std;

int main() {

	const char* CPU = "Intel Core i7-12700K";
	const char* RAM = "Corsair Vengeance 16GB DDR4";
	const char* Mainboard = "ASUS ROG STRIX Z690-E";
	const char* PSU = "Corsair RM750x 750W";

	Sup_main myPC(CPU, RAM, Mainboard, PSU);
	int Term = 0;
	myPC.Run_Code(Term);
	cout << "Hien tai may tinh o che do thu: " << Term << "\n";
	return 0;
}

//Phan code mo may tinh can debug lai logic con mot so loi nhu khi dang mo may ma van chay duoc so 1 thu ta can mo -> tat -> moi moi lai duoc
//Phan tat may can fix lai logic chi cho phep mo lai voi dieu kien term = 1
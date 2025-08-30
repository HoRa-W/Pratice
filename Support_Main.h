#pragma once
#include <iostream>
#include "PC.h"
#include "Support_PC.h"
using std::cout;
using std::cin;

class Sup_main : public Sup {
public:
	Sup_main(const char* a, const char* b, const char* c, const char* d, int e = 0) : Sup(a, b, c, d, e) {}
	void MenuBasic();
	void Run_Code(int&);
};
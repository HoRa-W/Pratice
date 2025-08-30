#pragma once
#include "PC.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
class Sup : public PC {
public:
	Sup(const char* a, const char* b, const char* c, const char* d, int e = 0) : PC(a, b, c, d, e) {}
	void sleep(int);
	virtual void RunPC(int&);
	virtual void Turn_off_PC(int&);
	virtual void SleepPC(int&);
};
#include "PC.h"
#include "Support_PC.h"
#include <iostream>


void PC::setCPU(const char* Tb)
{
    CPU = Tb;
}

void PC::setRAM(const char* Tb)
{
    RAM = Tb;
}

void PC::setMain(const char* Tb)
{
    Mainboard = Tb;
}

void PC::setPSU(const char* Tb)
{
    PSU = Tb;
}

void PC::setPassword(int Pw)
{
    Password = Pw;
}

const char* PC::CallCPU()
{
    return CPU;
}

const char* PC::CallRAM()
{
    return RAM;
}

const char* PC::CallMain()
{
    return Mainboard;
}

const char* PC::CallPSU()
{
    return PSU;
}

int PC::getPass()
{
    return Password;
}

int PC::getTerm()
{
    return PC_Term;
}
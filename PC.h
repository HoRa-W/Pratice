#pragma once
class PC {
private:
	const char* CPU;
	const char* RAM;
	const char* Mainboard;
	const char* PSU;
	int Password;
public:
	int PC_Term;
	PC(
		const char* CPU = "Khong Co",
		const char* RAM = "Khong Co",
		const char* Mainboard = "Khong Co",
		const char* PSU = "Khong Co",
		int PC_Term = 0,
		int Pass = 0
	)
	{
		this->CPU = CPU;
		this->RAM = RAM;
		this->Mainboard = Mainboard;
		this->PSU = PSU;
		this->Password = Pass;
	}
	//Khoi tao cac thanh phan quan trong cua may tinh
	void setCPU(const char* Tb);
	void setRAM(const char* Tb);
	void setMain(const char* Tb);
	void setPSU(const char* Tb);
	void setPassword(int Pw);

	//Goi ten cac may tinh
	const char* CallCPU();
	const char* CallRAM();
	const char* CallMain();
	const char* CallPSU();
	int getPass();
	int getTerm();

	//Cac Function may tinh
	virtual void RunPC(int& Term) = 0;
	virtual void Turn_off_PC(int& Term) = 0;
	virtual void SleepPC(int& Term) = 0;

};
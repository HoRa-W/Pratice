#include "Support_PC.h"
#include "PC.h"
#include <string>
void Sup::sleep(int num)
{
    //Nghi theo thoi gian la giay
    this_thread::sleep_for(chrono::seconds(num));
}

void Sup::RunPC(int& PC_Term)
{
    //Neu may tinh dang o che do hoat dong thi cho nguoi dung thu lai
    if (PC_Term == 1)
    {
        std::cout << "\nMay tinh dang o che do hoat dong\n";
        return;
    }
    //May tinh khoi dong va bat dau chay
    std::cout << "Loading...\n";
    sleep(5);
    std::cout << "Welcome\n";
    PC_Term = 1;
    int Lanthu = 3;

    if (getPass() != 0 && Lanthu >= 0)
    {
        int time = 10;
        bool ok = false;
        while (!ok)
        {
            int input;
            std::cout << "Xin moi nhap password: ";
            std::cin >> input;
            if (input == getPass()) ok = true;
            else {
                Lanthu--;
                std::cout << "Ban da nhap sai roi ban con " << Lanthu << " lan " << "\n";
                if (Lanthu == 0)
                {
                    cout << "\nNhap qua ngu hay thu lai sau " << time << "s\n";
                    sleep(time);
                    Lanthu += 1;
                    time += 10;
                }
            }
        }
    }
    else
    {
        int set_Pass;
        std::cout << "Xin hay dat mat khau: ";
        std::cin >> set_Pass;
        setPassword(set_Pass);
    }

    std::cout << "\n\tWelcome, User\n";
}

void Sup::Turn_off_PC(int& term)
{
    if (term == 1) 
    {
        term = 0;
        cout << "\nTurning OFF...\n";
        sleep(3);
        cout << "See You the Next Time\n";
    }
    else if (term == 0)
    {
        cout << "\nMay tinh hien tai dang tat\n";
        return;
    }
    else if (term == 3)
    {
		cout << "\nMay tinh dang o che do ngu\n";
        return;
    }
}

void Sup::SleepPC(int& term)
{
    if (term == 1 || term == 3)
    {
        term = 3;
        char click = NULL;
        cin >> click;
        if (click != NULL)
        {
            RunPC(term);
            return;
        }
        else
        { 
            cout << "Bam cach de tiep tuc\n";
            SleepPC(term);
        }
    }
    else
    {
        cout << "\nMay tinh hien tai dang tat\n";
        return;
    }

}

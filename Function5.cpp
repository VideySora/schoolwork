#include <iostream>
using namespace std;

void printCan(int can)
{
    string can_s;
    switch (can)
    {
    case 0:
        can_s = "Canh";
        break;
    case 1:
        can_s = "Tan";
        break;
    case 2:
        can_s = "Nham";
        break;
    case 3:
        can_s = "Quy";
        break;
    case 4:
        can_s = "Giap";
        break;
    case 5:
        can_s = "At";
        break;
    case 6:
        can_s = "Binh";
        break;
    case 7:
        can_s = "Dinh";
        break;
    case 8:
        can_s = "Mau";
        break;
    case 9:
        can_s = "Ky";
        break;
    }
    cout << can_s;
}

void printChi(int chi)
{
    // TODO
    string chi_s;
    switch (chi)
    {
    case 0:
        chi_s = "Than";
        break;
    case 1:
        chi_s = "Dau";
        break;
    case 2:
        chi_s = "Tuat";
        break;
    case 3:
        chi_s = "Hoi";
        break;
    case 4:
        chi_s = "Ti";
        break;
    case 5:
        chi_s = "Suu";
        break;
    case 6:
        chi_s = "Dan";
        break;
    case 7:
        chi_s = "Meo";
        break;
    case 8:
        chi_s = "Thin";
        break;
    case 9:
        chi_s = "Ti";
        break;
    case 10:
        chi_s = "Ngo";
        break;
    case 11:
        chi_s = "Mui";
        break;
    }
    cout << chi_s;
}

int calCan(int year)
{
    // TODO
    return year % 10;
}

int calChi(int year)
{
    // TODO
    return year % 12;
}

void calCanChi(int year)
{
    // TODO
    printCan(calCan(year));
    cout << " ";
    printChi(calChi(year));
}

int main()
{
    int year;
    cin >> year;
    calCanChi(year);
    return 0;
}
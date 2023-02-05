// Fonksiyonlar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int Topla(int sayi1, int sayi2)
{
    std::cout << "int";
    return sayi1 + sayi2;
}
using Ftopla = int(*)(int, int);
double Topla(double sayi1, double sayi2)
{
    std::cout << "double";
    return sayi1 + sayi2;
}

void print(std::string text="Test",int a=0,bool as=true)
{
    std::cout << text;
}

int topla(int a,int b)
{
    return a + b;
}

int getir(int(*topla)(int,int))
{
    return topla(5, 6);
}
int getir2(Ftopla topla)
{
    return topla(5, 6);
}


int main()
{
    std::cout << getir(topla);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

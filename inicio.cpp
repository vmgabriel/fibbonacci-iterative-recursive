#include <stdio.h>
#include <iostream>
#include <cstdio>

using namespace std;

float fiborecursivo(float num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return fiborecursivo (num-1)+fiborecursivo (num-2);
}

float fiboiterativo(float num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    float fn_1=1, fn_2=1, fnt;
    for (int i=2; i<=num; i++)
    {
        fnt=fn_1+fn_2;
        fn_2=fn_1;
        fn_1=fnt;
    }
    return fnt;
}

int main ()
{
    float n=0;
    std::cout<<"Fibonacci ----"<<endl;
    std::cout<<"Ingrese numero a evaluar: ";
    std::cin>>n;

    std::cout<<"El valor iterativo es: "<<fiboiterativo (n)<<endl;
    std::cout<<"El valor recursivo es: "<<fiborecursivo (n)<<endl;
    return 0;
}

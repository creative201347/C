#include <stdio.h>
#define AREA(length, breadth) length *breadth
int main()
{
    int l, b;
    printf("Enter the length and breadth of rectangle ");
    scanf("%d%d", &l, &b);
    printf("Area = %d square units", AREA(l, b));
    return 0;
}
/*
All preprocessor commands begins with a # symbol
#include
#define
    defining macro
#undef
    undefines a macro
#ifdef
    Ifdef is used to check whether a macros is defined or not.
    it returns true if a macro is defined
#ifndef
    returns true if a macro is not defined
#if
#else
#elif
*/
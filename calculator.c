#include "calculator.h"

int plus(int number1, int number2)/*function for addition*/
{
  return number1+number2;/*return the value of the addition*/
}

int minus(int number1, int number2)/*function for subtraction*/
{
  return number1-number2;/*return the subtracted value of two number*/
}

int addition(int a,int b)
{
  int (*ptr_a)(int,int) = plus;/*function pointer is pointed to function of addition*/
  return ptr_a(a,b);
}

int subtraction(int a,int b)
{
  int (*ptr_s)(int,int) = minus;/*function pointer is pointed to function of subtraction*/
  return ptr_s(a,b);
}

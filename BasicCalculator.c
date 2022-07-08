#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
  float numOne;
  float numTwo;
  float numThree;
  float ans;
  char operation;

  printf("Enter Calculation:");
  scanf("%f%c%f", &numOne, &operation, &numThree);

  switch(operation)
  {
    case '+': ans = numOne + numTwo;
    case '-': ans = numOne - numTwo;
    case '*': ans = numOne * numTwo;
    case '/': ans = numOne / numTwo;
    case '^': pow(numOne, numTwo);
    case '%': fmod(numOne, numTwo);
    default: goto failure;
  }
  printf("%.2f%c%.2f = %.2f", numOne, operation, numTwo, ans)
  goto exit;

  fail: printf("Invalid");
  exit: return 0;
}

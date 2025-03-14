
// All the user-defined function will be tested here

#include"main.h"

enum ECalculator
{
	Add = 1,
	Sub,
	Mul
};

int main()
{
   int a, b, oper, result;
   enum ECalculator calculator;

   printf("Welcome to AryaBhatt CALC 1.0\n");

   printf("Enter to numbers: ");
   scanf("%d %d", &a, &b);
   printf("Choose operation: \n");
   printf("1. add\n2. sub\n3. mul\n");
   printf("Operator: ");
   scanf("%d", &oper);
   printf("Operation selected by you:%d\n", oper);

   switch(oper)
   {
     case Add:
	 result = add(a, b);
	 printf("Sum = %d\n", result);
 	 break;

      default:
	printf("You have selected worng operation!\nPlease choose from given option\n");
	break;
   }

   return 0; 

}

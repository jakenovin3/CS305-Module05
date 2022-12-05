#include <stdio.h>
//Ethan was here

int add(int x, int y) {
   return x + y;
}

int subtract(int x, int y) {
   return x - y;
}

int multiply(int x, int y) {
   return x * y;
}

int divide(int x, int y) {
   return x / y;
}

int main() {

   int x;
   int y;
   char operation;

   printf("Enter first integer:   ");
   scanf("%d", &x);
   printf("Enter second integer:   ");
   scanf("%d", &y);
   printf("Enter operation:   ");
   scanf(" %c", &operation);
   printf("\n");

   int answer;
   switch(operation) {
      case '+':
         answer = add(x, y);
         break;

      case '-':
         answer = subtract(x, y);
         break;

      case '*':
         answer = multiply(x, y);
         break;

      case '/':
         answer = divide(x, y);
         break;
   }

   printf("Answer: %d %c %d = %d\n", x, operation, y, answer);

   return 0;
}

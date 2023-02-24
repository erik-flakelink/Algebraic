//Main Function
int algebraic() {
  printf("ALGEBRAIC [CRE]\n");
  printf("Created by Erik [EriktheRDev]\n");
  printf("Version 20\n");
  char operation[str_len];
  printf("\n\nPlease Insert an Operation.\n")
  gets(operation);
  //Here lies a huge if..else statement, which runs the below commands.
}
//Sub Functions
int add(int x, int y) { //Addition of two integers
  printf(x + y);
}
int div(int x, int y) { //Division of two integers.
  printf(x / y);
}
int sub(int x, int y) { //Subtraction of two integers.
  printf(x - y);
}
int mtp(int x, int y) { //Multiplication of two or more integers.
  printf(x * y);
}
int exp(int x, int y) { //Exponentation of a base and a power.
  printf(x ** y);
}
int ftd(int x, int y) { //Floor Division of two integers.
  printf(x // y);
}
int sqr(int x) { //Square Root of an integer.
  printf(sqrt(x))
}
int pi(); //Evaluates the pi. Takes in an integer value (int) and returns 3.141592.
int pop(); //Power of Powers: Takes in a Base and two or more powers.

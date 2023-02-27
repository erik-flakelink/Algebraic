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
  printf("\n");
}
int div(int x, int y) { //Division of two integers.
  printf(x / y);
  printf("\n");
}
int sub(int x, int y) { //Subtraction of two integers.
  printf(x - y);
  printf("\n");
}
int mtp(int x, int y) { //Multiplication of two or more integers.
  printf(x * y);
  printf("\n");
}
int exp(int x, int y) { //Exponentation of a base and a power.
  printf(x ** y);
  printf("\n");
}
int ftd(int x, int y) { //Floor Division of two integers.
  printf(x // y);
  printf("\n");
}
int sqr(int x) { //Square Root of an integer.
  printf(sqrt(x))
  printf("\n");
}
int pi(int x) { //Evaluates pi. Takes in an integer value (int) and sets it to 3.141592.
  x = 3.141592
  printf("\n");
}
int pop(base, pw1, pw2) { //Power of Powers: Takes in a Base and two powers.
  printf(base);
  printf(" ** ");
  printf(pw1 * pw2)
  printf("\n");

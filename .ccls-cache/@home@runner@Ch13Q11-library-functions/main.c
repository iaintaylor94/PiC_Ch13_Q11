// System functions

#include <stdio.h>
#include <ctype.h>

int main(void) {

  // isupper()
  printf ("Testing ""isupper()"" function\n");
  printf ("A: %d\n", isupper('A')); // !0 = true
  printf ("a: %d\n", isupper('a')); // 0  = false
  printf ("1: %d\n", isupper('1')); // 0  = false
  printf ("@: %d\n", isupper('@')); // 0  = false
  printf ("\n");

  // isalpha()
  printf ("Testing ""isalpha()"" function\n");
  printf ("A: %d\n", isalpha('A')); // !0 = true
  printf ("a: %d\n", isalpha('a')); // !0 = true
  printf ("1: %d\n", isalpha('1')); // 0  = false
  printf ("@: %d\n", isalpha('@')); // 0  = false
  printf ("\n");

  // isdigit()
  printf ("Testing ""isdigit()"" function\n");
  printf ("A: %d\n", isdigit('A')); // 0  = false
  printf ("a: %d\n", isdigit('a')); // 0  = false
  printf ("1: %d\n", isdigit('1')); // !0 = true
  printf ("@: %d\n", isdigit('@')); // 0  = false
  printf ("\n");
  
  
  return 0;
}
#include <stdio.h>
int main()
{
  int a, b, c;
  a = 0;
  b = 1;
  c = a;
  a = b;
  b = c;
  printf("%d %d\n", a, b);
  return 0;
}
//1 0
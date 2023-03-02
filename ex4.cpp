#include <iostream>
using namespace std;

bool primo(int n ,int nn);

int main(void)
{
  int n = 0;
  
  printf("Informe um numero: ");
  scanf("%d" ,&n);
  if (primo(n ,1))
    printf("%d e primo!" ,n);
  else
    printf("%d nao e primo!" ,n);
  
  return 0;
}

bool primo(int n ,int nn)
{
  static int divs = 0;
  
  if (nn > n)
    return n;
  
  if (n % nn == 0)
    divs++;
  
  primo(n ,nn + 1);
  
  if (divs <= 2)
    return 1;
  return 0;
}

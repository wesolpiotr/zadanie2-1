#include <stdio.h>

static void p21() 
{ 
  int suma = 0; 
  int ocena; 
  double licznikPozytywnych = 0;
  
  for (int i = 0; i < 5; i++)
  { 
    printf("Podaj ocenę: ");
    scanf("%d", &ocena);
    if(ocena >= 3) {
      suma += ocena; 
      licznikPozytywnych++;
    }
  } 
  double srednia = suma / licznikPozytywnych; 
  printf("Średnia z ocen pozytywnych wynosi: %.2f", srednia);
}

int main(void) {
  p21();
  return 0;
}
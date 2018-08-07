#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int i = 4;
  double d = 4.0;
  char s[] = "HackerRank ";

  int secondInt;
  double secondDub;
  char secondStr[105];

  scanf("%d", &newInt);
  scanf("%lf", &newDouble);
  getchar();
  scanf("%[^\n]s", newString);
  
  printf("%d\n", (newInt + i));
  printf("%.1lf\n", (newDouble + d));
  printf("%s%s", s, newString);

  return 0;
} 

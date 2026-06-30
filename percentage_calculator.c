#include <stdio.h>

  int main() {
    int M,P,C;
    int total; 
    float percentage;

    printf("enter M,P,C\n");
    scanf("%d %d %d", &M, &P , &C);

    total= M+P+C;
      percentage = (((M+P+C)/300.0)*100);

       printf("%d %f\n", total, percentage);
       return 0;
  }

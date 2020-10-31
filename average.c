#include <stdio.h>

float average(int length, int array[]);

int main(void){
  const int N = 4;
  int n;  

  printf("Number of score:\t");
  scanf("%d", &n);

  int scores[n];

  for(int i = 0; i < n;i++){
    printf("Scores %i:\t\t\t", i +1);
    scanf("%d", &scores[i]);
  }
  printf("Average:\t\t\t%.1f\n", average(n, scores));
  return 0;
}

float average(int length, int array[]){
  int sum = 0;
  for(int i = 0; i < length; i++){
    sum += array[i];
  }
  return (float) sum / (float) length;
}

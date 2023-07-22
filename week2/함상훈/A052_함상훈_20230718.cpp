#include <stdio.h>
#include <string.h>


int main(void){

  int N;
  int i, j;
  char s[81];

  scanf("%d", &N);
  int score[N];
  int count;

  for(i = 0; i < N; i++){
    count = 0;
    score[i] = 0;
    scanf("%s", s);
    for(j = 0; j < strlen(s); j++){
      if(s[j] == 'O'){
        count++;
        score[i] += count;
      }else{
        count = 0;
      }
    }
  }

  for(i = 0; i < N; i++){
    printf("%d\n", score[i]);
  }


  return 0;
}

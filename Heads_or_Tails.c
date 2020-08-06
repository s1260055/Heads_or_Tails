#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int c1,c2,c3=0;
  int heads,tails=0;
  char name[20];

    printf("Who are you?\n> ");
    scanf("%s",name);
    printf("Hello, %s!\n",name);

  srand(time(NULL));
  c1 = rand() % 2 ;
  c2 = rand() % 2 ;
  c3 = rand() % 2 ;

  printf("Tossing a coin...\n");
  if(c1==0){
  printf("Round 1:Heads\n");
  heads++;
}
  else{
    printf("Round 1:Tails\n");
    tails++;
  }
  if(c2==0){
  printf("Round 1:Heads\n");
  heads++;
}
  else{
    printf("Round 1:Tails\n");
    tails++;
  }
  if(c3==0){
  printf("Round 1:Heads\n");
  heads++;
}
  else{
    printf("Round 1:Tails\n");
    tails++;
  }
   printf("Heads:%d,Tails:%d\n",heads,tails);



  return 0;
}

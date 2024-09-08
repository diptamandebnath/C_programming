#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
  /* 0 as rock;
  1 as paper;
  2 as scissor;
  */
  
  srand(time(0));
  int user,computer;
  computer=rand()%2;
  printf("Enter a number :");
  scanf("%d",&user);
  printf("Computer input %d\n",computer);

  if (user==0 && computer==0){
    printf("Draw");
  }
  else if (user==0 && computer==1){
    printf("Computer won");
  }
  else if (user==0 && computer==2){
    printf("You won");
  }
  else if (user==1 && computer==0){
    printf("You won");
  }
  else if (user==1 && computer==1){
    printf("Draw");
  }
  else if (user==1 && computer==2){
    printf("Computer won");
  }
  else if (user==2 && computer==0){
    printf("Computer won");
  }
  else if (user==2 && computer==1){
    printf("You won");
  }
  else if (user==2 && computer==2){
    printf("Draw");
  }
  else
    printf("Result undefined!!");

  return 0;
  
}

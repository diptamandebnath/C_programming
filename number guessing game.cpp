#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int user,computer;
  int no_of_guess = 0;
  srand(time(0));
  computer=rand()%100+1;
  
  do {
    printf("Enter a Number\n");
    scanf("%d",&user);
    no_of_guess++;
  if (user<computer){
    printf("Guess higher number\n");
  }
  else if(user>computer){
    printf("Guess smaller number\n");
  }
  else {
    printf("You guessed right number and guessed in %d attempt\n",no_of_guess);
  }
    }while(user!=computer);
    
    return 0;
}

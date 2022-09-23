#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int stonepaperscissor(char me, char computer){
    // conditions for draw
    if(computer == me)
    return 0;
    if(me=='s' && computer =='p'){
        return -1;
    }
    else if(me=='p' && computer =='s'){
        return 1;
    }
       if(me=='c' && computer =='p'){
        return 1;
    }
    else if(me=='p' && computer =='c'){
        return -1;
    }
       if(me=='s' && computer =='s'){
        return 1;
    }
    else if(me=='s' && computer =='s'){
        return -1;
    }

 }
int main(){
      char me, computer;
 srand(time(0));
    int number=rand()%10+1;
  if(number<3){
    computer = 's';
  }
  else if(number>3 && number<6){
    computer = 'p';
  }
  else{
    computer = 'c';
  }
  printf("Enter s for stone p for paper and c for scissor\n");
scanf("%c", &me);
int result = stonepaperscissor(me,computer);
if(result==1){
    printf("You Win\n");
}
else if(result==0){
    printf("Draw\n");
}
else{
    printf("You Lose\n");
}
printf("*********\n");
printf("\n\nYou had chosen %c and computer had chosen %c", me, computer);
return 0;

}
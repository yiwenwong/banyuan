#include <stdio.h>
char *ROOT_MENU[]=p{"要进行哪种运算？\n",1.加法\n""2.减法\n","3.乘法\n","4.除法\n","5.退出\n"};
int ROOT_MENU_LEN= sizeof(ROOT_MENU)/ sizeof(char *);
enum FlowStatus {
     ROOT,QUIT,OPT_ONE_INPUT,OPT_TOW_INPUT
};

enum CalculateType{
ADD,SUB,MUL,DIV,NONE
};
void displayRootMenu();
int scanInt();
void calculate(enum CalculateType calType,int calNumOne, int calNumTwo);
enum CalculateType getCalType(int userInput);
int main(){
   int calNumOne=0;
   int calNumTwo=0;
   int userInput=0;
   enum FlowStatus flowStatus=ROOT;
   enum CalculateType calType=NONE;
   while(flowStatus!=QUIT){
      switch (flowStatus){
       case ROOT:
          displayRootMenu();
          userInput=scanInt();
          if (userInput<=0||userInput>ROOT_MENU_LEN){
              print("不存在的选项!\n"）；
          }else if(userInput == ROOT_MENU_LEN-1){
              flowStatus=QUIT;
           }else{
               calType = getCalType(userInput);
               flowStatus=OPT_ONE_INPUT;
           }
           break;
         case OPT_ONE_INPUT：
           print("请输入第一个操作数:");
           calNumOne=scanInt();
           flowStatus=OPT_TWO_INPUT ;
           break;
         case OPT_TWO_INPUT：
           print("请输入第二个操作数:");
           calNumTwo=scanInt();
           calculate(calType,calNumOne,calNumTwo);
           flowStatus=ROOT;
           break;
         case QUIT:
           return 0;
         }
    }
   return 0;
}
int scanInt(){
       int input;
       int rlt=scanf("%d",&input);
       if(rlt!=1){
          printf("输入不合法，请重新输入\n");
          while (getchar()!='\n');
          return scanInt();
}
return input;
}
void displayRootMenu(){
  for (int i=0;i<ROOT_MENU_LEN;i++){
       printf("%s",ROOT_MENU[i];
      }
     printf("请输入");
}
void calculate(enum CalculateType calType,int calNumOne, int calNumTwo){
    switch(calType){
        case ADD;
          printf("%d+%d=%d\n",calNumOne,calNumTwo,calNumOne+calNumTwo);
          break;
        case SUB;
          printf("%d-%d=%d\n",calNumOne,calNumTwo,calNumOne+calNumTwo);
          break;
        case MUL;
          printf("%d*%d=%d\n",calNumOne,calNumTwo,calNumOne+calNumTwo);
          break;
        case DIV;
          printf("%d/%d=%d\n",calNumOne,calNumTwo,calNumOne+calNumTwo);
          break;
        default:
          break;
      }
}
enum CalculateType getCalType(int userInput){
      switch (userInput){
        case 1:
         return ADD; 
       case 2:
         return SUB; 
       case 3:
         return MUL; 
       case 4:
         return DIV; 
       default:
         return NONE;
      }
}

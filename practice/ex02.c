#include <stdio.h>
int main(int argc, char const *rgv[])
{
	int a,b;
	printf("请输入两个整数\n");
	printf("请输入第一个整数\n");
	
	scanf("%d",&a);
	printf("请输入第二个整数\n");
	
	scanf("%d",&b);
	if(a>b){
    puts("第一个数大");
}
    else{
		
	puts("第二个数大");
	
    }
    return 0;

}
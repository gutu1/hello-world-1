#include <stdio.h>
int main(){
	int a,b,t;
	printf("     判断两数是否互质\n   请由大到小依次输入\na=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	while (b!=0){
	    t=b,b=a%b,a=t;
		}
    if (a==1){
	         printf("两数互质");} 
    else {
              printf("两数不互质"); }
       
	
	
 
} 

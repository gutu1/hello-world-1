#include <stdio.h>
int main(){
	int a,b,t;
	printf("     �ж������Ƿ���\n   ���ɴ�С��������\na=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	while (b!=0){
	    t=b,b=a%b,a=t;
		}
    if (a==1){
	         printf("��������");} 
    else {
              printf("����������"); }
       
	
	
 
} 

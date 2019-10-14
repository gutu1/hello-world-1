#include<stdio.h> 
int main(){
	int a,b,i;
	printf ("      求两数最小公倍数\n请从大到小依次输入两数:\na=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	i=1;
	
	while (i%a!=0||	i%b!=0)
	i++;
   
	printf ("两数最小公倍数为：%d",i); 



	     
	    
	     
          
	}
	 


 

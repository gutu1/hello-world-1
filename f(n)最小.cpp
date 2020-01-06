#include<stdio.h>
#include<string.h> 
int f(int n){
	if(n<=0)return 0;
	else if(n==11)return f(n-1)+2;
	else if(n==1||n/10==1||n%10==1||(n/10)%10==1||n/100==1)return f(n-1)+1;
	return f(n-1);
}
main(){
    int n=2, x;
    x=f(999);
    printf("%d", x);
	while(f(n)!=n){
		n++;
	}
	printf("%d",n);
	return 0;
}

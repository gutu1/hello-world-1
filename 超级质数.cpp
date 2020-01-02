#include<stdio.h>
int main(){
	int x, n, i, g=0, k=0, a[9999], j=0;
	for(n=102;n<10000;n++){
	g=0;	
		for(i=2;i<n;i++){
			if(n%i==0){
				g=1;
			}
		}
		if(g==0){
			a[k]=n;
			k++;
		}
}
	int s, b, y, m=0, c[9999], q;
	for(k=0;a[k]<10000&&a[k]>100;k++){
		m=0;
		if(a[k]<1000){	
		    g=a[k]%10;
		    s=(a[k]/10)%10;
		    b=a[k]/100;
		    x=g+s+b;
		    y=g*g+s*s+b*b;
		       for(i=2;i<x;i++){
			       if(x%i==0){
				    m=1;
			   }
		}
			   for(i=2;i<y;i++){
			   	if(y%i==0){
			   		m=1;
				   }
			   }
		if(m==0){
			c[j]=a[k];
			printf("%d ",c[j]);
			j++;
		}
	}
        else{
        	g=a[k]%10;
        	s=(a[k]%100-g)/10;
        	b=(a[k]%1000-s*10-g)/100;
        	q=a[k]/1000;
        	x=g+b+s+q;
        	y=g*g+s*s+b*b+q*q;
        	 for(i=2;i<x;i++){
			       if(x%i==0){
				    m=1;
			   }
		}
			for(i=2;i<y;i++){
			   	if(y%i==0){
			   		m=1;
				   }
			   }
				if(m==0){
				c[j]=a[k];
				printf("%d ",c[j]);
				j++;
			}
		}
}
int sum=0, avg;
for(j=0;c[j]>100&&c[j]<10000;j++){
	sum=sum+c[j];
} 
avg=sum/j;
printf("\n%d",avg);
return 0;
}

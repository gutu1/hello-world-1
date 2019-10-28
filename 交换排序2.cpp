//Ωªªª≈≈–Ú
 #include <stdio.h>
 int main() {
   int x[3] , i = 0, t, k=0 ;
 while(1){
 k=0;
  
     scanf("%d %d %d", &x[0], &x[1], &x[2]);
 	for(;k<3;k++){
	 i=0;
 	for(;i<3;i++){
 		if( x[i] > x[k]) {
   	    t = x[k];
   	    x[k] = x[i];
   	    x[i] = t;
   	}
   }
}
     printf(" %d, %d, %d", x[0], x[1], x[2]);
}
   return 0;
 }

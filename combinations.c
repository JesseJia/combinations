#include <stdio.h>
 
int main(void) {
	// your code goes here
	int a,b,c,n=0;   
	for (a=0;a<=20;a++) {  
		for (b=0;b<=33;b++) {   
			for (c=0;c<=100;c++) {      
				if (5*a+3*b+c==100){ 
					n++;     
				}
			}
		}
	}
	printf(n);
	return 0;
}

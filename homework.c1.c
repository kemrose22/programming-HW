#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int i;
     int array[10];
printf("enter 10 elements: \n");
       for(i=0; i<10; i++){
       scanf("%d\n", &array[i]);
}
    
printf("element in reverse order: \n");
         for(i=9; i>=0; i-- ){
              printf("%d\n", array[i]);
}
	return 0;
}

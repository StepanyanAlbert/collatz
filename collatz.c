#include  <stdio.h>
int count_steps(unsigned int num);
int main(){
		int length=0;
		unsigned int i,max;

		for (i=2;i<1000000;i++){
				if (count_steps(i) > length){
						length=count_steps(i);
						max=i;
				}
		}
		printf("Length %d \n",length);
		printf("Numberis  %d \n",max);
		return 0;
}
int count_steps(unsigned int num){
		int steps=0;
		while(num != 1){
				if(num&1){
						num=num*3+1;
				}else{
						num=num/2;
				}
		steps++;		
		}
		return steps+1;
}




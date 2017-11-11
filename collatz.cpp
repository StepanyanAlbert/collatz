#include <iostream>
using namespace std;
unsigned int count_steps(unsigned int num);
int main (){
		unsigned int max,length;
		for (int i = 2;i < 1000000; i++){
				if(count_steps(i)>length){
						length=count_steps(i);
						max = i;
				}
		}
		std::cout << "Length ==>  "<< length << std::endl<<"Number ==> " << max<<std::endl;
		return 0;
}
unsigned int count_steps(unsigned int num){
		int steps=0;
		while(num!=1){
			if(num&1){
					num=num*3+1;
			}else{
					num=num/2;
			}
			steps++;
		}
		return steps+1;
		
}

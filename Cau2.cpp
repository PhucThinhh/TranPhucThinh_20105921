#include <stdio.h>
#include <math.h>

double worldPopulation(double initialPopulation , double growthRate, int time){
	if(time == 0){
		return initialPopulation ;
	}else{
		return worldPopulation(initialPopulation, growthRate,time - 1)*(1+ growthRate);
	}
}
int main(){
	double initialPopulation = 8.0e9 ;
	double growthRate = 0.025 ;
	int time = 10 ;
	double population2028 = worldPopulation(initialPopulation, growthRate, time);
	printf("Dan so the gioi nam 2028 la %lf ty nguoi", population2028/1e9);
	
}

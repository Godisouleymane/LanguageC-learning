#include<stdio.h>
#include<stdlib.h>

int main(){
	int age = 30;

	if(age > 18 && age < 25) {
		printf("Votre age n'est pas depasse");
	} else if(age > 18 && age > 25){
		printf("Votre age est depasse");
	} else {
		printf("Vous etes mineur");
	}

	return 0;
}

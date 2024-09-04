#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* miTurno(void *v) {
	while (1) {
		sleep(1);
		printf("Es mi turno!\n");
	}
}

void* tuTurno(void *v) {
	while(1) {
		sleep(2);
		printf("Es tu turno!\n");
	}
}


int main () {
	pthread_t thr0;
	pthread_t thr1;

	
	pthread_create(&thr0, NULL, miTurno, NULL);
	pthread_create(&thr1, NULL, tuTurno, NULL);

	while(1){
		sleep(1);
	}
	return 0;
}

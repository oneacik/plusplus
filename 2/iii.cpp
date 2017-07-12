#include<cstdio>
#include<cmath>
int main(){
	printf("liczba pi %f\n", M_PI);
	printf("prawdziwe pi %.60f\n", M_PI);
	printf("naukowo %.2E\n", 1.3*pow(10,8));
	printf("prosta dziesiętna %f\n", 4.67);
	printf("za duża dziesiętna %E\n", 1.3*pow(10,3000));
	printf("za mała dziesiętna %E\n", -1.3*pow(10,3000));
	printf("zła dziesiętna %E\n", 0.0/0.0);
}

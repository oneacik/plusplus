#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

    srand (time(NULL)); // Zainicjowanie seeda
    int random = 0;
    int liczba_krokow = 0;
    
    while(random < 1000) {

        random += rand() % 100 + 1;     // random in the range 1 to 100
        printf("%d\n", random);
        liczba_krokow += 1;
    }

    printf("\nOstateczna liczba krokow: %d\n", liczba_krokow);

    return 0;
}

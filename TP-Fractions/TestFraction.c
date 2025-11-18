#include <stdio.h>
#include "Fraction.h"

int main() {
    printf("===== TP FRACTION =====\n");

    Fraction fraction = Saisie1_Frac();
    printf("fraction : %d/%d \n", fraction.numerateur, fraction.denominateur);
    return 0;
}

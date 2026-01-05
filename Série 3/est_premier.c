#include "est_premier.h"
int premier(int nb){
        if(nb < 2)
        return 0;
        for (int i = 2; i*i < nb; i++)
            {
                if (nb % i == 0)
                {
                    return 0;
                }
                
            }
        return 1;
        }
//
//  main.c
//  Pythagoras Lab
//
//  Created by Bulkin, Lola on 9/10/19.
//  Copyright © 2019 Bulkin, Lola. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include "pythagoras.h"
#include "datatypes.h"
int main(int argc, const char * argv[]) {
    
    int a;
    printf("what lab do u want to run? choose 1 or 2");
    scanf("%i",&a);
    if (a==1){
    pythagoras();
    }
    else if (a==2){
    datas();
    }
    else {
        printf ("not valid response");
    }
    
    return 0;
}




//
//  main.c
//  Pythagoras Lab
//
//  Created by Bulkin, Lola on 9/10/19.
//  Copyright © 2019 Bulkin, Lola. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int pythagoras(void) {
    
    double side1;
    double side2;
    printf("Hello, we will help you do pythagorean theorum!");
    printf("what is side1");
    scanf("%lf",&side1);
    printf("what is side2");
    scanf("%lf",&side2);
    double side3 = sqrt(side1*side1 + side2*side2);
    printf ("the hypotenuse is %lf",side3);
    
    return 0;
}




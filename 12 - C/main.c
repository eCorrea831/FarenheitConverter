//
//  main.c
//  12 - C
//
//  Created by Erica Correa on 2/1/16.
//  Copyright © 2016 Turn to Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float farenheit, celsius;
    float lower = -40;
    float upper = 100;
    float step = 1;
    
    printf("Farenheit | Celsius\n");
    
    farenheit = lower;
    
    while (farenheit <= upper) {
        celsius = (5.0 / 9.0) * (farenheit - 32.0);
        printf("%9.0f | %6.1f\n", farenheit, celsius);
        farenheit = farenheit + step;
    }
    
    return 0;
}

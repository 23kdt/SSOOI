#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int fahr;

    for (fahr = 0; fahr <=300; fahr += 20){
        printf("3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));

    }

    return 0;


}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        printf("%d %d", num1, num2);
    }
    else if (num2 < num1) {
        printf("%d %d", num2, num1);
    }
    else {
            printf("\nSao iguais!");
     }

    getche();
    return 0;
}

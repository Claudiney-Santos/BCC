#include <stdio.h>

#define numeros_perfeitos_qnt 4
int numeros_perfeitos[numeros_perfeitos_qnt] = {6, 28, 496, 8128};

int eh_numero_perfeito(int num) {
    if(num<=10000000) {
        for(int i=0;i<numeros_perfeitos_qnt;i++)
            if(num==numeros_perfeitos[i])
                return 1;
        return 0;
    }
    int soma=1;
    for(int i=2;i*i<=num&&soma<=num;i++)
        if(num%i==0)
            soma += i + ( i*i==num ? 0 : num/i );
    return soma==num;
}

int main() {
    for(int i=1;i<=100000000;i++)
        if(eh_numero_perfeito(i))
            printf("%d e' um numero perfeito!\n", i);
    return 0;
}

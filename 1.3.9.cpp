#include <stdio.h>
int main() {
    char operator1;
    double first, second;
    printf("wybierz operacje arytmetyczna(+, -, *,): ");
    scanf("%c", &operator1);
    printf("podaj dwie liczby: ");
    scanf("%lf %lf", &first, &second);

    switch (operator1) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;

    default:
        printf("B³¹d! poda³eœ niepoprawn¹ operacjê arytmetyczn¹");
    }

    return 0;
}

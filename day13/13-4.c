#include <stdio.h>

typedef struct
{
    double mantissa;
    int exponent;
} sci_not_t;

void parseValidMantissa(sci_not_t *answer) {
    while (answer->mantissa >= 1) {
        answer->mantissa /= 10;
        answer->exponent++;
    }
    while (answer->mantissa < 0.1) {
        answer->mantissa *= 10;
        answer->exponent--;
    }
}

void scan_sci(sci_not_t *number1, sci_not_t *number2) {
    scanf("%lf", &number1->mantissa);  // 0.25000e3 => "%lf" => 250.00000
    scanf("%lf", &number2->mantissa);  // 0.20000e1 => "%lf" =>   2.00000
}

void print_sci(sci_not_t *answer) {
    parseValidMantissa(answer);
    printf("%.5lfe%d\n", answer->mantissa, answer->exponent);
    answer->exponent = 0;
}

sci_not_t *sum(sci_not_t number1, sci_not_t number2, sci_not_t *answer) {
    // scan_sci的%lf會自動將10的次方計算進mantissa 所以可以忽略10的次方
    answer->mantissa = number1.mantissa + number2.mantissa;
    return answer;
}

sci_not_t *difference(sci_not_t number1, sci_not_t number2, sci_not_t *answer) {
    answer->mantissa = number1.mantissa - number2.mantissa;
    return answer;
}

sci_not_t *product(sci_not_t number1, sci_not_t number2, sci_not_t *answer) {
    answer->mantissa = number1.mantissa * number2.mantissa;
    return answer;
}

sci_not_t *quotient(sci_not_t number1, sci_not_t number2, sci_not_t *answer) {
    answer->mantissa = number1.mantissa / number2.mantissa;
    return answer;
}

int main(void) {
    sci_not_t number1 = {0, 0}, number2 = {0, 0}, answer = {0, 0};
    scan_sci(&number1, &number2);
    print_sci(sum(number1, number2, &answer));
    print_sci(difference(number1, number2, &answer));
    print_sci(product(number1, number2, &answer));
    print_sci(quotient(number1, number2, &answer));
    return 0;
}


#include <stdio.h>

/* ---------- Function Prototypes ---------- */

/* Sequential Structure (Lab 1) */
void addTwoNumbers(void);
void areaOfRectangle(void);
void areaOfCircle(void);
void celsiusToFahrenheit(void);
void simpleInterest(void);
void swapTwoNumbers(void);
void averageOfThree(void);
void daysToYMD(void);
void kmToMCm(void);
void totalAvgPercentage(void);

/* Conditional Structure (Lab 2) */
void evenOrOdd(void);
void divisibleBy5And11(void);
void votingEligibility(void);
void passOrFail(void);
void leapYear(void);
void largestOfTwo(void);
void vowelOrConsonant(void);
void profitOrLoss(void);
void positiveNegativeZero(void);
void largestOfThree(void);
void smallestOfThree(void);
void middleOfThree(void);
void electricityBill(void);
void busDestinationPrice(void);

/* Switch Case Programs (Lab 2) */
void calculatorSwitch(void);
void dayOfWeekSwitch(void);
void destinationPriceSwitch(void);
void vowelConsonantSwitch(void);

/* For Loop Structure (Lab 3) */
void first10Natural(void);
void first10Even(void);
void countDown99to50(void);
void squareFirst10(void);
void fibonacciSeries(void);
void multiplicationTable(void);
void factorsOfNumber(void);
void factorialOfNumber(void);
void primeOrComposite(void);

/* Menu helper */
void showMenu(void);

/* ---------- Main ---------- */

int main() {
    int choice;

    do {
        showMenu();
        printf("\nEnter your choice (0 to exit): ");
        if (scanf("%d", &choice) != 1) {
            /* clear bad input so we don't loop forever */
            while (getchar() != '\n');
            choice = -1;
        }
        printf("\n");

        switch (choice) {
            case 1:  addTwoNumbers();          break;
            case 2:  areaOfRectangle();        break;
            case 3:  areaOfCircle();           break;
            case 4:  celsiusToFahrenheit();    break;
            case 5:  simpleInterest();         break;
            case 6:  swapTwoNumbers();         break;
            case 7:  averageOfThree();         break;
            case 8:  daysToYMD();              break;
            case 9:  kmToMCm();                break;
            case 10: totalAvgPercentage();     break;

            case 11: evenOrOdd();              break;
            case 12: divisibleBy5And11();      break;
            case 13: votingEligibility();      break;
            case 14: passOrFail();             break;
            case 15: leapYear();               break;
            case 16: largestOfTwo();           break;
            case 17: vowelOrConsonant();       break;
            case 18: profitOrLoss();           break;
            case 19: positiveNegativeZero();   break;
            case 20: largestOfThree();         break;
            case 21: smallestOfThree();        break;
            case 22: middleOfThree();          break;
            case 23: electricityBill();        break;
            case 24: busDestinationPrice();    break;

            case 25: calculatorSwitch();       break;
            case 26: dayOfWeekSwitch();        break;
            case 27: destinationPriceSwitch(); break;
            case 28: vowelConsonantSwitch();   break;

            case 29: first10Natural();         break;
            case 30: first10Even();            break;
            case 31: countDown99to50();        break;
            case 32: squareFirst10();          break;
            case 33: fibonacciSeries();        break;
            case 34: multiplicationTable();    break;
            case 35: factorsOfNumber();        break;
            case 36: factorialOfNumber();      break;
            case 37: primeOrComposite();       break;

            case 0:  printf("Exiting program. Goodbye!\n"); break;
            default: printf("Invalid choice, try again.\n");
        }
        printf("\n----------------------------------------\n");

    } while (choice != 0);

    return 0;
}

/* ---------- Menu Display ---------- */

void showMenu(void) {
    printf("========== C PROGRAM LAB MENU ==========\n");
    printf("-- Sequential Structure --\n");
    printf(" 1. Add Two Numbers\n");
    printf(" 2. Area of Rectangle\n");
    printf(" 3. Area of Circle\n");
    printf(" 4. Celsius to Fahrenheit\n");
    printf(" 5. Simple Interest\n");
    printf(" 6. Swap Two Numbers\n");
    printf(" 7. Average of Three Numbers\n");
    printf(" 8. Days to Years/Months/Days\n");
    printf(" 9. Kilometers to Meters & Centimeters\n");
    printf("10. Total, Average, Percentage\n");
    printf("-- Conditional Structure --\n");
    printf("11. Even or Odd\n");
    printf("12. Divisible by 5 and 11\n");
    printf("13. Voting Eligibility\n");
    printf("14. Pass or Fail\n");
    printf("15. Leap Year\n");
    printf("16. Largest of Two\n");
    printf("17. Vowel or Consonant (if-else)\n");
    printf("18. Profit or Loss\n");
    printf("19. Positive, Negative, or Zero\n");
    printf("20. Largest of Three\n");
    printf("21. Smallest of Three\n");
    printf("22. Middle Number of Three\n");
    printf("23. Electricity Bill\n");
    printf("24. Bus Destination & Price (if-else)\n");
    printf("-- Switch Case Programs --\n");
    printf("25. Simple Calculator\n");
    printf("26. Day of the Week\n");
    printf("27. Bus Destination & Price (switch)\n");
    printf("28. Vowel or Consonant (switch)\n");
    printf("-- For Loop Structure --\n");
    printf("29. First 10 Natural Numbers\n");
    printf("30. First 10 Even Numbers\n");
    printf("31. Countdown 99 to 50\n");
    printf("32. Square of First 10 Natural Numbers\n");
    printf("33. Fibonacci Series (10 terms)\n");
    printf("34. Multiplication Table\n");
    printf("35. Factors of a Number\n");
    printf("36. Factorial of a Number\n");
    printf("37. Prime or Composite\n");
    printf(" 0. Exit\n");
    printf("==========================================\n");
}

/* ================= Sequential Structure ================= */

void addTwoNumbers(void) {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
}

void areaOfRectangle(void) {
    float l, b, a;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    a = l * b;
    printf("Area = %.2f\n", a);
}

void areaOfCircle(void) {
    float r, a;
    printf("Enter radius: ");
    scanf("%f", &r);
    a = 3.14159f * r * r;
    printf("Area = %.2f\n", a);
}

void celsiusToFahrenheit(void) {
    float c, f;
    printf("Enter Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Fahrenheit = %.2f\n", f);
}

void simpleInterest(void) {
    float p, t, r, si;
    printf("Enter Principal, Time, Rate: ");
    scanf("%f %f %f", &p, &t, &r);
    si = (p * t * r) / 100;
    printf("SI = %.2f\n", si);
}

void swapTwoNumbers(void) {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d\n", a, b);
}

void averageOfThree(void) {
    float a, b, c, avg;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("Average = %.2f\n", avg);
}

void daysToYMD(void) {
    int d, y, m, rd;
    printf("Enter days: ");
    scanf("%d", &d);
    y = d / 365;
    m = (d % 365) / 30;
    rd = (d % 365) % 30;
    printf("Years = %d\nMonths = %d\nDays = %d\n", y, m, rd);
}

void kmToMCm(void) {
    float km;
    printf("Enter km: ");
    scanf("%f", &km);
    printf("Meters = %.2f\nCentimeters = %.2f\n", km * 1000, km * 100000);
}

void totalAvgPercentage(void) {
    float m1, m2, m3, m4, m5, total, avg, per;
    printf("Enter 5 marks: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    avg = total / 5;
    per = avg; /* out of 100 per subject, so avg == percentage here */
    printf("Total = %.2f\nAverage = %.2f\nPercentage = %.2f%%\n", total, avg, per);
}

/* ================= Conditional Structure ================= */

void evenOrOdd(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0) printf("Even\n");
    else printf("Odd\n");
}

void divisibleBy5And11(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 11 == 0) printf("Yes\n");
    else printf("No\n");
}

void votingEligibility(void) {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18) printf("Eligible\n");
    else printf("Not Eligible\n");
}

void passOrFail(void) {
    int m;
    printf("Enter marks: ");
    scanf("%d", &m);
    if (m >= 40) printf("Pass\n");
    else printf("Fail\n");
}

void leapYear(void) {
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) printf("Leap Year\n");
    else printf("Not Leap Year\n");
}

void largestOfTwo(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) printf("%d is greater\n", a);
    else printf("%d is greater\n", b);
}

void vowelOrConsonant(void) {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel\n");
    else
        printf("Consonant\n");
}

void profitOrLoss(void) {
    float cp, sp;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);
    if (sp > cp) printf("Profit = %.2f\n", sp - cp);
    else if (cp > sp) printf("Loss = %.2f\n", cp - sp);
    else printf("No Profit No Loss\n");
}

void positiveNegativeZero(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0) printf("Positive\n");
    else if (n < 0) printf("Negative\n");
    else printf("Zero\n");
}

void largestOfThree(void) {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) printf("%d is greater\n", a);
    else if (b > c) printf("%d is greater\n", b);
    else printf("%d is greater\n", c);
}

void smallestOfThree(void) {
    int a, b, c, min;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    printf("Smallest = %d\n", min);
}

void middleOfThree(void) {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b && a < c) || (a < b && a > c)) printf("Middle number = %d\n", a);
    else if ((b > a && b < c) || (b < a && b > c)) printf("Middle number = %d\n", b);
    else printf("Middle number = %d\n", c);
}

void electricityBill(void) {
    int u;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &u);
    if (u <= 100) bill = u * 5;
    else if (u <= 200) bill = 100 * 5 + (u - 100) * 7;
    else bill = 100 * 5 + 100 * 7 + (u - 200) * 10;
    printf("Bill = Rs. %.2f\n", bill);
}

void busDestinationPrice(void) {
    int choice, tickets;
    int price = 0, total = 0;
    printf("===== Bus Ticket Booking =====\n");
    printf("1. Kathmandu\n2. Pokhara\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    if (choice == 1) {
        printf("\nDestination : Kathmandu\n");
        price = 1200;
        total = price * tickets;
    } else if (choice == 2) {
        printf("\nDestination : Pokhara\n");
        price = 1500;
        total = price * tickets;
    } else {
        printf("Invalid Destination!\n");
        return; /* avoid printing garbage price/total */
    }
    printf("Ticket Price : Rs. %d\n", price);
    printf("No. of Tickets : %d\n", tickets);
    printf("Total Price : Rs. %d\n", total);
}

/* ================= Switch Case Programs ================= */

void calculatorSwitch(void) {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+': printf("Sum = %d\n", a + b); break;
        case '-': printf("Difference = %d\n", a - b); break;
        case '*': printf("Product = %d\n", a * b); break;
        case '/':
            if (b == 0) printf("Error: division by zero\n");
            else printf("Quotient = %.2f\n", (float)a / b);
            break;
        default: printf("Invalid Operator\n");
    }
}

void dayOfWeekSwitch(void) {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid Day\n");
    }
}

void destinationPriceSwitch(void) {
    int choice;
    printf("Choose Destination\n");
    printf("1. Kathmandu\n2. Pokhara\n3. Butwal\n4. Chitwan\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1: printf("Ticket Price = Rs. 1200\n"); break;
        case 2: printf("Ticket Price = Rs. 1500\n"); break;
        case 3: printf("Ticket Price = Rs. 500\n"); break;
        case 4: printf("Ticket Price = Rs. 800\n"); break;
        default: printf("Invalid Destination\n");
    }
}

void vowelConsonantSwitch(void) {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    switch (ch) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }
}

/* ================= For Loop Structure ================= */

void first10Natural(void) {
    int i;
    printf("First 10 Natural Numbers are:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
}

void first10Even(void) {
    int i;
    printf("First 10 Even Numbers are:\n");
    for (i = 2; i <= 20; i = i + 2) {
        printf("%d\n", i);
    }
}

void countDown99to50(void) {
    int i;
    printf("Numbers from 99 to 50 are:\n");
    for (i = 99; i >= 50; i--) {
        printf("%d\n", i);
    }
}

void squareFirst10(void) {
    int i, square;
    printf("Squares of First 10 Natural Numbers are:\n");
    for (i = 1; i <= 10; i++) {
        square = i * i;
        printf("%d\n", square);
    }
}

void fibonacciSeries(void) {
    int a, b, c, i;
    a = 10;
    b = 15;
    printf("Fibonacci-style Series (10 terms, starting 10, 15):\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
}

void multiplicationTable(void) {
    int num, i, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++) {
        result = num * i;
        printf("%d x %d = %d\n", num, i, result);
    }
}

void factorsOfNumber(void) {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors are: ");
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            printf("%d\t", i);
        }
    }
    printf("\n");
}

void factorialOfNumber(void) {
    int n, i;
    long f = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        f *= i;
    }
    printf("Factorial is %ld\n", f);
}

void primeOrComposite(void) {
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is neither prime nor composite\n", n);
    } else {
        int isPrime = 1;
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) printf("%d is prime\n", n);
        else printf("%d is composite\n", n);
    }
}

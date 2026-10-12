
#include <stdio.h>
#include <string.h>

/* ---------- Main ----------
   Every program below is a goto label inside main() (no functions used). */

int main()
{
    /* menu / shared integer variables */
    int choice, sub;
    int a, b, c, n, i;
    int min, temp, sum, result, square;
    int days, yrs, mon, rem;
    int units, tickets, price, total, day, isPrime;
    long fact;

    /* shared float variables */
    float fa, fb, fc, favg, area, rad, cel, fah;
    float pr, tm, rt, si, km;
    float m1, m2, m3, m4, m5, ftotal, per;
    float cp, sp, bill;

    /* shared char variables / strings */
    char ch, op;
    char str1[100], str2[100], rev[100];
    char first[50], last[50], full[110];

menu:
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
    printf("-- String Functions --\n");
    printf("38. Upper and Lower Case (strupr, strlwr)\n");
    printf("39. Reverse and Palindrome Check (strrev, strcmp)\n");
    printf("40. Copy a String (strcpy)\n");
    printf("41. Join First and Last Name (strcat)\n");
    printf(" 0. Exit\n");
    printf("==========================================\n");

    printf("\nEnter your choice (0 to exit): ");
    if (scanf("%d", &choice) != 1)
    {
        /* clear bad input so we don't loop forever */
        while (getchar() != '\n');
        choice = -1;
    }
    printf("\n");

    switch (choice)
    {
        case 1:  goto addTwoNumbers;
        case 2:  goto areaOfRectangle;
        case 3:  goto areaOfCircle;
        case 4:  goto celsiusToFahrenheit;
        case 5:  goto simpleInterest;
        case 6:  goto swapTwoNumbers;
        case 7:  goto averageOfThree;
        case 8:  goto daysToYMD;
        case 9:  goto kmToMCm;
        case 10: goto totalAvgPercentage;

        case 11: goto evenOrOdd;
        case 12: goto divisibleBy5And11;
        case 13: goto votingEligibility;
        case 14: goto passOrFail;
        case 15: goto leapYear;
        case 16: goto largestOfTwo;
        case 17: goto vowelOrConsonant;
        case 18: goto profitOrLoss;
        case 19: goto positiveNegativeZero;
        case 20: goto largestOfThree;
        case 21: goto smallestOfThree;
        case 22: goto middleOfThree;
        case 23: goto electricityBill;
        case 24: goto busDestinationPrice;

        case 25: goto calculatorSwitch;
        case 26: goto dayOfWeekSwitch;
        case 27: goto destinationPriceSwitch;
        case 28: goto vowelConsonantSwitch;

        case 29: goto first10Natural;
        case 30: goto first10Even;
        case 31: goto countDown99to50;
        case 32: goto squareFirst10;
        case 33: goto fibonacciSeries;
        case 34: goto multiplicationTable;
        case 35: goto factorsOfNumber;
        case 36: goto factorialOfNumber;
        case 37: goto primeOrComposite;

        case 38: goto upperLowerCase;
        case 39: goto reversePalindrome;
        case 40: goto copyString;
        case 41: goto joinNames;

        case 0:
            printf("Exiting program. Goodbye!\n");
            goto endChoice;
        default:
            printf("Invalid choice, try again.\n");
            goto endChoice;
    }

/* ================= Sequential Structure ================= */

addTwoNumbers:
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    goto endChoice;

areaOfRectangle:
    printf("Enter length and breadth: ");
    scanf("%f %f", &fa, &fb);
    area = fa * fb;
    printf("Area = %.2f\n", area);
    goto endChoice;

areaOfCircle:
    printf("Enter radius: ");
    scanf("%f", &rad);
    area = 3.14159f * rad * rad;
    printf("Area = %.2f\n", area);
    goto endChoice;

celsiusToFahrenheit:
    printf("Enter Celsius: ");
    scanf("%f", &cel);
    fah = (cel * 9 / 5) + 32;
    printf("Fahrenheit = %.2f\n", fah);
    goto endChoice;

simpleInterest:
    printf("Enter Principal, Time, Rate: ");
    scanf("%f %f %f", &pr, &tm, &rt);
    si = (pr * tm * rt) / 100;
    printf("SI = %.2f\n", si);
    goto endChoice;

swapTwoNumbers:
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d\n", a, b);
    goto endChoice;

averageOfThree:
    printf("Enter three numbers: ");
    scanf("%f %f %f", &fa, &fb, &fc);
    favg = (fa + fb + fc) / 3;
    printf("Average = %.2f\n", favg);
    goto endChoice;

daysToYMD:
    printf("Enter days: ");
    scanf("%d", &days);
    yrs = days / 365;
    mon = (days % 365) / 30;
    rem = (days % 365) % 30;
    printf("Years = %d\nMonths = %d\nDays = %d\n", yrs, mon, rem);
    goto endChoice;

kmToMCm:
    printf("Enter km: ");
    scanf("%f", &km);
    printf("Meters = %.2f\nCentimeters = %.2f\n", km * 1000, km * 100000);
    goto endChoice;

totalAvgPercentage:
    printf("Enter 5 marks: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    ftotal = m1 + m2 + m3 + m4 + m5;
    favg = ftotal / 5;
    per = favg; /* out of 100 per subject, so avg == percentage here */
    printf("Total = %.2f\nAverage = %.2f\nPercentage = %.2f%%\n", ftotal, favg, per);
    goto endChoice;

/* ================= Conditional Structure ================= */

evenOrOdd:
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0) printf("Even\n");
    else printf("Odd\n");
    goto endChoice;

divisibleBy5And11:
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 11 == 0) printf("Yes\n");
    else printf("No\n");
    goto endChoice;

votingEligibility:
    printf("Enter age: ");
    scanf("%d", &n);
    if (n >= 18) printf("Eligible\n");
    else printf("Not Eligible\n");
    goto endChoice;

passOrFail:
    printf("Enter marks: ");
    scanf("%d", &n);
    if (n >= 40) printf("Pass\n");
    else printf("Fail\n");
    goto endChoice;

leapYear:
    printf("Enter year: ");
    scanf("%d", &n);
    if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) printf("Leap Year\n");
    else printf("Not Leap Year\n");
    goto endChoice;

largestOfTwo:
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) printf("%d is greater\n", a);
    else printf("%d is greater\n", b);
    goto endChoice;

vowelOrConsonant:
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel\n");
    else
        printf("Consonant\n");
    goto endChoice;

profitOrLoss:
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);
    if (sp > cp) printf("Profit = %.2f\n", sp - cp);
    else if (cp > sp) printf("Loss = %.2f\n", cp - sp);
    else printf("No Profit No Loss\n");
    goto endChoice;

positiveNegativeZero:
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0) printf("Positive\n");
    else if (n < 0) printf("Negative\n");
    else printf("Zero\n");
    goto endChoice;

largestOfThree:
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) printf("%d is greater\n", a);
    else if (b > c) printf("%d is greater\n", b);
    else printf("%d is greater\n", c);
    goto endChoice;

smallestOfThree:
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    printf("Smallest = %d\n", min);
    goto endChoice;

middleOfThree:
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b && a < c) || (a < b && a > c)) printf("Middle number = %d\n", a);
    else if ((b > a && b < c) || (b < a && b > c)) printf("Middle number = %d\n", b);
    else printf("Middle number = %d\n", c);
    goto endChoice;

electricityBill:
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units <= 100) bill = units * 5;
    else if (units <= 200) bill = 100 * 5 + (units - 100) * 7;
    else bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    printf("Bill = Rs. %.2f\n", bill);
    goto endChoice;

busDestinationPrice:
    price = 0;
    total = 0;
    printf("===== Bus Ticket Booking =====\n");
    printf("1. Kathmandu\n2. Pokhara\n");
    printf("Enter your choice: ");
    scanf("%d", &sub);
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    if (sub == 1)
    {
        printf("\nDestination : Kathmandu\n");
        price = 1200;
        total = price * tickets;
    }
    else if (sub == 2)
    {
        printf("\nDestination : Pokhara\n");
        price = 1500;
        total = price * tickets;
    }
    else
    {
        printf("Invalid Destination!\n");
        goto endChoice; /* avoid printing garbage price/total */
    }
    printf("Ticket Price : Rs. %d\n", price);
    printf("No. of Tickets : %d\n", tickets);
    printf("Total Price : Rs. %d\n", total);
    goto endChoice;

/* ================= Switch Case Programs ================= */

calculatorSwitch:
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+': printf("Sum = %d\n", a + b); break;
        case '-': printf("Difference = %d\n", a - b); break;
        case '*': printf("Product = %d\n", a * b); break;
        case '/':
            if (b == 0) printf("Error: division by zero\n");
            else printf("Quotient = %.2f\n", (float)a / b);
            break;
        default: printf("Invalid Operator\n");
    }
    goto endChoice;

dayOfWeekSwitch:
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch (day)
    {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid Day\n");
    }
    goto endChoice;

destinationPriceSwitch:
    printf("Choose Destination\n");
    printf("1. Kathmandu\n2. Pokhara\n3. Butwal\n4. Chitwan\n");
    printf("Enter your choice: ");
    scanf("%d", &sub);
    switch (sub)
    {
        case 1: printf("Ticket Price = Rs. 1200\n"); break;
        case 2: printf("Ticket Price = Rs. 1500\n"); break;
        case 3: printf("Ticket Price = Rs. 500\n"); break;
        case 4: printf("Ticket Price = Rs. 800\n"); break;
        default: printf("Invalid Destination\n");
    }
    goto endChoice;

vowelConsonantSwitch:
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    switch (ch)
    {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }
    goto endChoice;

/* ================= For Loop Structure ================= */

first10Natural:
    printf("First 10 Natural Numbers are:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    goto endChoice;

first10Even:
    printf("First 10 Even Numbers are:\n");
    for (i = 2; i <= 20; i = i + 2)
    {
        printf("%d\n", i);
    }
    goto endChoice;

countDown99to50:
    printf("Numbers from 99 to 50 are:\n");
    for (i = 99; i >= 50; i--)
    {
        printf("%d\n", i);
    }
    goto endChoice;

squareFirst10:
    printf("Squares of First 10 Natural Numbers are:\n");
    for (i = 1; i <= 10; i++)
    {
        square = i * i;
        printf("%d\n", square);
    }
    goto endChoice;

fibonacciSeries:
    a = 10;
    b = 15;
    printf("Fibonacci-style Series (10 terms, starting 10, 15):\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    goto endChoice;

multiplicationTable:
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }
    goto endChoice;

factorsOfNumber:
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors are: ");
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
    goto endChoice;

factorialOfNumber:
    fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial is %ld\n", fact);
    goto endChoice;

primeOrComposite:
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("%d is neither prime nor composite\n", n);
    }
    else
    {
        isPrime = 1;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) printf("%d is prime\n", n);
        else printf("%d is composite\n", n);
    }
    goto endChoice;

/* ================= String Functions ================= */

upperLowerCase:
    printf("Enter a string: ");
    scanf(" %99[^\n]", str1);
    strcpy(str2, str1);       /* keep a second copy so we can show both cases */
    strupr(str1);
    strlwr(str2);
    printf("Uppercase: %s\n", str1);
    printf("Lowercase: %s\n", str2);
    goto endChoice;

reversePalindrome:
    printf("Enter a string: ");
    scanf(" %99[^\n]", str1);
    strcpy(rev, str1);        /* reverse a copy, keep the original to compare */
    strrev(rev);
    printf("Reverse: %s\n", rev);
    if (strcmp(str1, rev) == 0) printf("%s is a palindrome\n", str1);
    else printf("%s is not a palindrome\n", str1);
    goto endChoice;

copyString:
    printf("Enter a string: ");
    scanf(" %99[^\n]", str1);
    strcpy(str2, str1);
    printf("Original string: %s\n", str1);
    printf("Copied string:   %s\n", str2);
    goto endChoice;

joinNames:
    printf("Enter first name: ");
    scanf("%49s", first);
    printf("Enter last name: ");
    scanf("%49s", last);
    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);
    printf("Full name: %s\n", full);
    goto endChoice;

/* ================= Loop back to menu ================= */

endChoice:
    printf("\n----------------------------------------\n");
    if (choice != 0) goto menu;

    return 0;
}

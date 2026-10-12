
#include <stdio.h>
#include <string.h>

/* ---------- Main ----------
   Every program below is a goto label inside main() (no functions used). */

int main()
{
    /* menu / shared integer variables */
    int choice, sub;
    int a, b, c, n, i, j, t, max;
    int arr[100];
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
    printf("-- Arrays --\n");
    printf("42. Read and Display 10 Numbers\n");
    printf("43. Greatest of 10 Numbers\n");
    printf("44. Sort Array in Ascending Order\n");
    printf("45. Sort Array in Descending Order\n");
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

    if (choice == 1) goto p1;
    if (choice == 2) goto p2;
    if (choice == 3) goto p3;
    if (choice == 4) goto p4;
    if (choice == 5) goto p5;
    if (choice == 6) goto p6;
    if (choice == 7) goto p7;
    if (choice == 8) goto p8;
    if (choice == 9) goto p9;
    if (choice == 10) goto p10;
    if (choice == 11) goto p11;
    if (choice == 12) goto p12;
    if (choice == 13) goto p13;
    if (choice == 14) goto p14;
    if (choice == 15) goto p15;
    if (choice == 16) goto p16;
    if (choice == 17) goto p17;
    if (choice == 18) goto p18;
    if (choice == 19) goto p19;
    if (choice == 20) goto p20;
    if (choice == 21) goto p21;
    if (choice == 22) goto p22;
    if (choice == 23) goto p23;
    if (choice == 24) goto p24;
    if (choice == 25) goto p25;
    if (choice == 26) goto p26;
    if (choice == 27) goto p27;
    if (choice == 28) goto p28;
    if (choice == 29) goto p29;
    if (choice == 30) goto p30;
    if (choice == 31) goto p31;
    if (choice == 32) goto p32;
    if (choice == 33) goto p33;
    if (choice == 34) goto p34;
    if (choice == 35) goto p35;
    if (choice == 36) goto p36;
    if (choice == 37) goto p37;
    if (choice == 38) goto p38;
    if (choice == 39) goto p39;
    if (choice == 40) goto p40;
    if (choice == 41) goto p41;
    if (choice == 42) goto p42;
    if (choice == 43) goto p43;
    if (choice == 44) goto p44;
    if (choice == 45) goto p45;

    if (choice == 0)
    {
        printf("Exiting program. Goodbye!\n");
        goto endChoice;
    }

    printf("Invalid choice, try again.\n");
    goto endChoice;

/* ================= Sequential Structure ================= */

p1: /* Kathmandu
2. Pokhara
3. Butwal
4. Chitwan */
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    goto endChoice;

p2: /* Area of Rectangle */
    printf("Enter length and breadth: ");
    scanf("%f %f", &fa, &fb);
    area = fa * fb;
    printf("Area = %.2f\n", area);
    goto endChoice;

p3: /* Area of Circle */
    printf("Enter radius: ");
    scanf("%f", &rad);
    area = 3.14159f * rad * rad;
    printf("Area = %.2f\n", area);
    goto endChoice;

p4: /* Celsius to Fahrenheit */
    printf("Enter Celsius: ");
    scanf("%f", &cel);
    fah = (cel * 9 / 5) + 32;
    printf("Fahrenheit = %.2f\n", fah);
    goto endChoice;

p5: /* Simple Interest */
    printf("Enter Principal, Time, Rate: ");
    scanf("%f %f %f", &pr, &tm, &rt);
    si = (pr * tm * rt) / 100;
    printf("SI = %.2f\n", si);
    goto endChoice;

p6: /* Swap Two Numbers */
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d\n", a, b);
    goto endChoice;

p7: /* Average of Three Numbers */
    printf("Enter three numbers: ");
    scanf("%f %f %f", &fa, &fb, &fc);
    favg = (fa + fb + fc) / 3;
    printf("Average = %.2f\n", favg);
    goto endChoice;

p8: /* Days to Years/Months/Days */
    printf("Enter days: ");
    scanf("%d", &days);
    yrs = days / 365;
    mon = (days % 365) / 30;
    rem = (days % 365) % 30;
    printf("Years = %d\nMonths = %d\nDays = %d\n", yrs, mon, rem);
    goto endChoice;

p9: /* Kilometers to Meters & Centimeters */
    printf("Enter km: ");
    scanf("%f", &km);
    printf("Meters = %.2f\nCentimeters = %.2f\n", km * 1000, km * 100000);
    goto endChoice;

p10: /* Total, Average, Percentage */
    printf("Enter 5 marks: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    ftotal = m1 + m2 + m3 + m4 + m5;
    favg = ftotal / 5;
    per = favg; /* out of 100 per subject, so avg == percentage here */
    printf("Total = %.2f\nAverage = %.2f\nPercentage = %.2f%%\n", ftotal, favg, per);
    goto endChoice;

/* ================= Conditional Structure ================= */

p11: /* Even or Odd */
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0) printf("Even\n");
    else printf("Odd\n");
    goto endChoice;

p12: /* Divisible by 5 and 11 */
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 11 == 0) printf("Yes\n");
    else printf("No\n");
    goto endChoice;

p13: /* Voting Eligibility */
    printf("Enter age: ");
    scanf("%d", &n);
    if (n >= 18) printf("Eligible\n");
    else printf("Not Eligible\n");
    goto endChoice;

p14: /* Pass or Fail */
    printf("Enter marks: ");
    scanf("%d", &n);
    if (n >= 40) printf("Pass\n");
    else printf("Fail\n");
    goto endChoice;

p15: /* Leap Year */
    printf("Enter year: ");
    scanf("%d", &n);
    if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) printf("Leap Year\n");
    else printf("Not Leap Year\n");
    goto endChoice;

p16: /* Largest of Two */
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) printf("%d is greater\n", a);
    else printf("%d is greater\n", b);
    goto endChoice;

p17: /* Vowel or Consonant (if-else) */
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel\n");
    else
        printf("Consonant\n");
    goto endChoice;

p18: /* Profit or Loss */
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);
    if (sp > cp) printf("Profit = %.2f\n", sp - cp);
    else if (cp > sp) printf("Loss = %.2f\n", cp - sp);
    else printf("No Profit No Loss\n");
    goto endChoice;

p19: /* Positive, Negative, or Zero */
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0) printf("Positive\n");
    else if (n < 0) printf("Negative\n");
    else printf("Zero\n");
    goto endChoice;

p20: /* Largest of Three */
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) printf("%d is greater\n", a);
    else if (b > c) printf("%d is greater\n", b);
    else printf("%d is greater\n", c);
    goto endChoice;

p21: /* Smallest of Three */
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    printf("Smallest = %d\n", min);
    goto endChoice;

p22: /* Middle Number of Three */
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b && a < c) || (a < b && a > c)) printf("Middle number = %d\n", a);
    else if ((b > a && b < c) || (b < a && b > c)) printf("Middle number = %d\n", b);
    else printf("Middle number = %d\n", c);
    goto endChoice;

p23: /* Electricity Bill */
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units <= 100) bill = units * 5;
    else if (units <= 200) bill = 100 * 5 + (units - 100) * 7;
    else bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    printf("Bill = Rs. %.2f\n", bill);
    goto endChoice;

p24: /* Bus Destination & Price (if-else) */
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

p25: /* Simple Calculator */
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

p26: /* Day of the Week */
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

p27: /* Bus Destination & Price (switch) */
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

p28: /* Vowel or Consonant (switch) */
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

p29: /* First 10 Natural Numbers */
    printf("First 10 Natural Numbers are:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    goto endChoice;

p30: /* First 10 Even Numbers */
    printf("First 10 Even Numbers are:\n");
    for (i = 2; i <= 20; i = i + 2)
    {
        printf("%d\n", i);
    }
    goto endChoice;

p31: /* Countdown 99 to 50 */
    printf("Numbers from 99 to 50 are:\n");
    for (i = 99; i >= 50; i--)
    {
        printf("%d\n", i);
    }
    goto endChoice;

p32: /* Square of First 10 Natural Numbers */
    printf("Squares of First 10 Natural Numbers are:\n");
    for (i = 1; i <= 10; i++)
    {
        square = i * i;
        printf("%d\n", square);
    }
    goto endChoice;

p33: /* Fibonacci Series (10 terms) */
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

p34: /* Multiplication Table */
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }
    goto endChoice;

p35: /* Factors of a Number */
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

p36: /* Factorial of a Number */
    fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial is %ld\n", fact);
    goto endChoice;

p37: /* Prime or Composite */
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

p38: /* Upper and Lower Case (strupr, strlwr) */
    printf("Enter a string: ");
    scanf(" %99[^\n]", str1);
    strcpy(str2, str1);       /* keep a second copy so we can show both cases */
    strupr(str1);
    strlwr(str2);
    printf("Uppercase: %s\n", str1);
    printf("Lowercase: %s\n", str2);
    goto endChoice;

p39: /* Reverse and Palindrome Check (strrev, strcmp) */
    printf("Enter a string: ");
    scanf(" %99[^\n]", str1);
    strcpy(rev, str1);        /* reverse a copy, keep the original to compare */
    strrev(rev);
    printf("Reverse: %s\n", rev);
    if (strcmp(str1, rev) == 0) printf("%s is a palindrome\n", str1);
    else printf("%s is not a palindrome\n", str1);
    goto endChoice;

p40: /* Copy a String (strcpy) */
    printf("Enter a string: ");
    scanf(" %99[^\n]", str1);
    strcpy(str2, str1);
    printf("Original string: %s\n", str1);
    printf("Copied string:   %s\n", str2);
    goto endChoice;

p41: /* Join First and Last Name (strcat) */
    printf("Enter first name: ");
    scanf("%49s", first);
    printf("Enter last name: ");
    scanf("%49s", last);
    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);
    printf("Full name: %s\n", full);
    goto endChoice;

/* ================= Arrays ================= */

p42: /* Read and Display 10 Numbers */
    for (i = 0; i < 10; i++)
    {
        printf("Enter element (#%d) \n ---> ", i);
        scanf("%d", &arr[i]);
    }
    printf("The numbers are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d, \t", arr[i]);
    }
    printf("\n");
    goto endChoice;

p43: /* Greatest of 10 Numbers */
    for (i = 0; i < 10; i++)
    {
        printf("Enter element (#%d) \n ---> ", i);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Greatest number = %d\n", max);
    goto endChoice;

p44: /* Sort Array in Ascending Order */
    printf("Enter number of elements (max 100) \n ---> ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
    {
        printf("Invalid number of elements\n");
        goto endChoice;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter element (#%d) \n ---> ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("Ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d, \t", arr[i]);
    }
    printf("\n");
    goto endChoice;

p45: /* Sort Array in Descending Order */
    printf("Enter number of elements (max 100) \n ---> ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
    {
        printf("Invalid number of elements\n");
        goto endChoice;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter element (#%d) \n ---> ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("Descending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d, \t", arr[i]);
    }
    printf("\n");
    goto endChoice;

/* ================= Loop back to menu ================= */

endChoice:
    printf("\n----------------------------------------\n");
    if (choice != 0) goto menu;

    return 0;
}

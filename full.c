#include <stdio.h>
int main(){
    // int, float, char
    int a1 = 7 ; //2 to 4 bytes
        unsigned short integer = 8;//2 bytes
        long integer1 = 8;//4bytes
        short integer2 = 8;//2 bytes

    float b1 =25.63; //4 bytes - 6 decimal precision
        double myfloat1 = 8.32;//15 decimal places precision
        long double myfloat2 = 8.32659623;//19 decimal places precision

    char c1 = 'a'; //1 byte

    printf("The size taken by int is %d\n",sizeof(int));
    printf("The size taken by unsigned int is %d\n",sizeof(unsigned int));
    printf("The size taken by float is %d\n",sizeof(float));
    printf("The size taken by double is %d\n",sizeof(double));
    printf("The size taken by long double is %d\n",sizeof(long double));
    printf("The size taken by long double is %d\n",sizeof(long double));
    printf("The size taken by char is %d\n",sizeof(char));

    printf("\n********Rules for creating variables*********");
    int ahmedName;//This is variable declaration
    ahmedName = 76;//This is variable initialization
    char five = '5';//This is variable declaration and initialization

    const int i = 8;
    // i =10;
    ahmedName= 100;

    printf("\n********Types of operators in C *********\n");

    /*
    Arithmatic operators 
    Relational operators 
    Logical operators 
    Bitwise operators 
    Misc operators
    */
    // Arithmatic operators 
    int a=5, b=4, c=8;
    printf ("The sum of a and b is %d\n",a + b);
    printf ("The difference of a and b is %d\n",a - b);
    printf ("The multiplication result of a and b is %d\n",a * b);
    printf ("The division of a and b is %d\n",a / b);
    printf ("The modulo result of a and b is %d\n",a % b);
    printf ("The increment result of a and b is %d\n",++a);
    printf ("The decrement result of a and b is %d\n",--b);


    return 0;
}
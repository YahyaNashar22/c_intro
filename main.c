#include <stdio.h>
#include <string.h>

int intro();
int shopping_cart();
int random();

int main()
{
   random();

    return 0;
}

int random()
{
    int number = 0;
    int *p = &number;
    
    number = 12;
    printf("%d\n", number);

    *&number = 40;
    printf("%d\n", number);

    printf("%d\n", &number);
    printf("%d\n", *p);
} 

int shopping_cart()
{
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?\n");
    fgets(item, sizeof(item), stdin);

    printf("What is the price for each?\n");
    scanf("%f", &price);

    printf("How many would you like?\n");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("%f", total);

    return 0;
}

int intro()
{
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";
    
    printf("Enter your age:\n");
    scanf("%d", &age);

    printf("Enter your gpa:\n");
    scanf("%f", &gpa);

    printf("Enter your grade:\n");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    printf("Your age is: %d\n", age);
    printf("Your gpa is: %.2f\n", gpa);
    printf("Your grade is: %c\n", grade);
    printf("Your name is: %s\n", name);
 
}
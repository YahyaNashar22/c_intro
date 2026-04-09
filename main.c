#include <stdio.h>
#include <string.h>

int intro();
int shopping_cart();
int random();
void mad_libs_game();
void pointers();

int increment(int *number)
    {
		(*number)++;
	}

int main()
{
    pointers();
    return 0;
}

void pointers() {
	int number = 12;

	increment(&number);
	printf("%d", number);
}

void mad_libs_game()
{
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("\nToday I went to a %s zoo.\n", adjective1);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);
    printf("I was %s!\n", adjective3);
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
    item[strlen(item) - 1] = '\0'; // get rid of the \n in the end of the input stream


    printf("What is the price for each?\n");
    scanf("%f", &price);

    printf("How many would you like?\n");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s\n", quantity, item);
    printf("%c%.2f", currency, total);

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

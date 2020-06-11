#include<stdio.h>
main()
{
	// Ordering without seeing the menu
	int choice = 0;
	printf("Ordering without seeing the menu\n");
	printf("Enter a number from 1 to 5 : ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("Food item : Pasta\n Price : Rs. 179");
		break;
	case 2:
		printf("Food item : Pizza\n Price : Rs. 239");
		break;
	case 3:
		printf("Food item : French Fries\n Price : Rs. 99");
		break;
	case 4:
		printf("Food item : Burger\n Price : Rs. 129");
		break;
	case 5:
		printf("Food item : Sandwich\n Price : Rs. 149");
		break;
	default:
		printf("Your choice is invalid");
	}
}

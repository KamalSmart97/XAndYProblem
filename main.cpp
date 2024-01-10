#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

bool XYItrFunction(int intialValue1, int InitialValue2, int FinalValue1, int FinalValue2)
{
	if ((intialValue1 > FinalValue1) || (InitialValue2 > FinalValue2))
		return false;
	else if ((intialValue1 == FinalValue1) && (InitialValue2 == FinalValue2))
		return true;
	else
		return (XYItrFunction(intialValue1 + InitialValue2, InitialValue2, FinalValue1, FinalValue2) || XYItrFunction(intialValue1, InitialValue2 + intialValue1, FinalValue1, FinalValue2));

}

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	printf("Enter the initial X and Y value");
	scanf("%d %d", &a, &b);
	printf("Enter the final X and Y value");
	scanf("%d %d", &c, &d);

	if (XYItrFunction(a, b, c, d))
		printf("The Value can reach the final Value");
	else
		printf("The Value cannot reach the final Value");

	return 0;
}
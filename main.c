#include <stdio.h>
#include <stdlib.h>
int sum(int arr[]);     // Function Dec.

int main()
{
// Start Variables
int i,j;  //Loop Counters
int numbers[20];
int swap_Var;
int sum_Unique_No = 0;
// End Variables


printf("This Program takes 20 numbers and add only the unique numbers and not Zero\n");
printf("--------------------------------------------------------------------------\n");
printf("Please Enter 20 numbers:\n");


//Start Reading Numbers
for (i=0; i<20; i++){
    printf("Enter the number with order (%d): ", i+1);
    scanf("%d", &numbers[i]);}
printf("\n\n");
//End Reading Numbers


//Start Sorting Array by Bubble Sort
for (i=0; i<20; i++)
    {
        for (j=0; j < (20-i-1); j++)
        {         // From 0 to 18
            if (numbers[j] > numbers[j+1])
            {
                swap_Var = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = swap_Var;
            }
        }
    }
// End Sorting Array by Bubble Sort


// End Printing Array After Sorting
for (i=0; i<20; i++){
    printf("The Number with order (%d) is %d\n", i+1, numbers[i]);}
printf("\n\n");
// End Printing Array After Sorting


// Start Removing Repeated Numbers
for (i=0; i<20; i++)
{
    for (j=0; j<(20-i-1); j++)
        if (numbers[j] == numbers[j+1])
            numbers[j] = 0;
}
// End Removing Repeated Numbers


// End Printing Array After Removing Repeated Numbers
for (i=0; i<20; i++)
       if (numbers[i] != 0)
        printf("The Number with order (%d) is %d\n", i+1, numbers[i]);
printf("\n\n");
// End Printing Array After Removing Repeated Numbers


// Calling Function
sum_Unique_No = sum(numbers);
printf("The Sum of Unique Numbers = %d\n\n\n\n", sum_Unique_No);


return 0;
}



// Start Sum Function
int sum(int arr[])
{
    int counter;
    int sum_arr_no = 0;
    for (counter=0; counter<20; counter++)
        sum_arr_no += arr[counter];
    return sum_arr_no;
}
// Start Sum Function

// Program: Memory Management in C 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // create a pointer array
    int* ages;

   // the supposed length for the array
    int n = 4;

    // the use of malloc to allocate spaces for the array
    ages = (int*)malloc(n * sizeof(int));

// error checking if the array is null, if true free the array
if(ages == NULL)
{
    printf("The memory is not well assigned!");
    free(ages);

    return 0;
}

// assign elements to the array
 for(int i = 0; i < n; i++)
{
        ages[i] = i;
}

// call out the elements from the array
for(int i = 0; i < n; i++)
{
    printf("%d\n",ages[i]);
}

// reassigment of array length
n = 6;


// reallocate the new length to the array
int* newAgeSize = (int*)realloc(ages, n * sizeof(int));

// assign the new malloc to the array
ages = newAgeSize;

// error checking if it is null
if(newAgeSize == NULL)
{
  printf("The new added space failed");
  free(newAgeSize);
} 

// assign the extract element to the expended array
for(int i = 0; i < n; i++)
{

    ages[i] = i;

// change values of the element in the array
   if(ages[i] == 4)
      ages[i] = 32;

  if(ages[i] == 5)
    ages[i] = 59;
}

// call out all elements from the array
for(int i = 0; i < n; i++)
{
    printf("%d\n",ages[i]);
}


ages = NULL;
 newAgeSize = NULL;

free(ages);
free(newAgeSize);
 

return 0;
}

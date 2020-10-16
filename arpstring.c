#include <stdio.h>
#include <string.h>

int average(int[], int);
void copy(int[], int[], int);
int strlen_calc(char[]);

int main()
{
    int i;
    int avg_array[5] = {1, 2, 3, 4, 5};

    // average of integers
    printf("avg_array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", avg_array[i]);
    }
    
    printf("\n    average: %d\n", average(avg_array, 5));

    int array[5] = {1, 1, 1, 1, 1};

    // copy an array over another
    printf("array precopy:  ");
    for(i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    copy(avg_array, array, 5);

    printf("\narray postcopy: ");
     for(i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    // how big is "Howdy?"
    char word[] = "Howdy?";
    printf("\n'%s' is %d characters long\n", word, strlen_calc(word));

    // testing things in string.h
    char test[] = "Howdy_";
    char another[] = "Hoo";
    char hold[10];

    // copy the string in test into hold
    strcpy(hold, test);
    printf("\n'hold' is %s while 'test' is %s\n", hold, test );

    // append the string in another onto hold
    strcat(hold, another);
    printf("hold: %s\n", hold);

    // compare test to another (test is greater than another)
    printf("test versus another: %d\n", strcmp(test, another));

    // where the first occurance of o is in hold
    printf("The first o in 'hold is at %p\n", strchr(hold, 'o')); 

    // where the last occurance of o is in hold
    printf("The last o in 'hold is at %p", strrchr(hold, 'o')); 

    return 0;
}

// calculate average of an array
int average(int arr[], int len) 
{
    int avg = 0;
    int i;

    for(i = 0; i < len; i++) {
        avg += arr[i];
    }

    return avg / len;
}

// copy an array over another
void copy(int from[], int to[], int len)
{
    int i;
    for(i = 0; i < len; i++) {
        to[i] = from[i];
    }
}

// find the length of a string
int strlen_calc(char arr[]) 
{
    int len;
    for(len = 0; arr[len]; len++);
    return len;
}
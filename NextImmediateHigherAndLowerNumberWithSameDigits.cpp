============================================================================================================================
1. Psuedocode for next immediate higher number:
   Example Number: 534976
   1. If all digits are sorted in descending order, the output is "Not Possible", example: 4321
   2. If all digits are sorted in ascending order, then we need to swap the last two digits. Example: 1234
   3. Else, then below are the steps to find the next immediate higher number:
      3.1  Traverse the number from rightmost until you find a digit which smaller than previously traversed digit:
           we stop at '4' in 53'4'976. If we do not find  such digit, then "Nope"
      3.2  Find a digit which is  > '4' and closest to '4', so '6' in this case
      3.3  Swap above found digits. example: 534976 becomes 536974
      3.4  Sort the numbers after found position in ascending order, then that will be the higher number:
           536479 is the answer
=============================================================================================================================
2. Psuedocode code for next immediate smaller number:
   Example: 534976
   1. Traverse from rightmost until you find a digit which greater than previously traversed digit:
      We stop at '7' in 5349'7'6, if do not find a such a digit then "Nope"
   2. Find a digit > 7 and close to '7'from that position.
      '6' is the digit.
   3. Swap above found digits. 
      534976 becomes: 534967
   4. Sort the numbers in descending order after the found position:
      534967 is the answer
 =============================================================================================================================
 
#include <cstdio>
#include <cstring>
#include <algorithm>

void swap(char* a, char* b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void findNextHigher(char number[], int n)
{
    int i,  j;
    
    for( i = n-1; i > 0; i++)
    {
        if (number[i] > number[i-1])
            break;
    }
    
    if (i==0)
    {
        printf("Not possible\n");
        return ;
    }
    
    int x = number[i-1];
    int smallest = i;
    
    for (j = i+1; j < n; j++)
    {
        if (number[j] > x && number[j] < number[smallest])
            smallest = j;
    }
    swap(&number[i-1], &number[smallest]);
    std::sort(number+i, number+n);
    printf("Next higher number: %s\n", number);
    
}

int main()
{
    char number[] =  "1234";//"534976";
    int n = strlen(number);
    findNextHigher(number, n);
    return 0;
}


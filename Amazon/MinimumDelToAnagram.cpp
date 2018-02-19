/**
 * Given two strings in lowercase, the task is to make them anagram. 
 * The only allowed operation is to remove a character from any string. 
 * Find minimum number of characters to be deleted to make both the strings anagram?
 * If two strings contains same data set in any order then strings are called Anagrams.

 * Examples:
 *
 * Input : str1 = "bcadeh" str2 = "hea"
 * Output: 3
 * We need to remove b, c and d from str1.
 *
 * Input : str1 = "cddgk" str2 = "gcd"
 * Output: 2
 *
 * Input : str1 = "bca" str2 = "acb"
 * Output: 0
 */
#include <iostream>
#include <string>
const int CHARS = 26;
int remCountAnagrams(string str1, string str2)
{
    char count1[CHARS] = {0}, count2[CHARS] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
        count1[str1[i]]++;
    for (int i = 0; str2[i] != '\0¨; i++)
        count2[str2[i]]++;

    int res = 0;
    for(int i = 0; i < 26; i++)
       res +=  abs(count1[i] - count2[i]);
    return res;
}

int main()
{
    string str1 = "bcadeh";
    string str2 = "deh";

    int count = remCountAnagrams(str1, str12);
    cout<<count;
    return 0;
}

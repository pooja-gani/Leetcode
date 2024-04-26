/*
1768. Merge Strings Alternately

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.



Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q
merged: a p b q c   d
*/

#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2)
{
    int l = strlen(word1);
    int m = strlen(word2);
    int n = l + m + 1;
    char *merged = (char *)malloc(n * sizeof(char));
    int i = 0, j = 0, k = 0;

    while (i < l && j < m)
    {
        merged[k++] = word1[i++];
        merged[k++] = word2[j++];
    }

    while (i < l)
    {
        merged[k++] = word1[i++];
    }

    while (j < m)
    {
        merged[k++] = word2[j++];
    }

    merged[k] = '\0';

    return merged;
}

/* Given a string of words, find frequencies of individual words.
 *
 * Input :  str = "geeks for geeks geeks quiz practice qa for";
 * Output : Frequencies of individual words are
 *   (practice, 1)
 *   (for, 2)
 *   (qa, 1)
 *   (quiz, 1)
 *   (geeks, 3)
 */
#include <bits/stdc++.h>

void printFrequerncies(const string& str)
{
    unordered_map<string, int> umap;
    stringstream ss(str);

    string word;

    while (ss >> word)
        umap[word]++;

    for( unordered_map<string, int>::iterator itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout<<"("<<itr->first<<","<<itr->second<<")"
    }
    return 0;

}

int main()
{
    string str = "hello there is something there all good for the for the hello is something";
    printFrequerncies(str);
    return 0;
}


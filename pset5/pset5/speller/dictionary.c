// Implements a file's functionality

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
const int N = 26;
int totalWords = 0;

// Hash table
node *table[26];

// Returns true if word is in file, else false
bool check(const char *word)
{
    int hashNumber = hash(word);

    //cursor variable that will be used to look for the word
    node *cursor = table[hashNumber];

    while(cursor != NULL)
    {
        //check if the words are the same
        if(strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
        //move the cursor to the next node if the words arent equal
        cursor = cursor->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    int n = (int)tolower(word[0]) - 97;
    return n;
}

// Loads file into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    //open the dictionary file using fopen
    FILE *dict = fopen(dictionary, "r");

    //check if the return value is NULL
    if(dict == NULL)
    {
        return false;
    }

    //read strings from file
    char word[LENGTH + 1];
    //read strings from the file one at a time until it reaches the end of the file
    while(fscanf(dict, "%s", word) != EOF)
    {
        //using malloc to store the word and the node to the next item
        node *tmp = malloc(sizeof(node));

        //check if the return value its null
        if(tmp == NULL)
        {
            return false;
        }

        //copy word into node, first parameter its were i want to copy (node word) and from were im copying it
        strcpy(tmp->word, word);

        //creating a variable to store the value of the hash function
        int hashNumber = hash(word);

        //Check if the head its pointing to null, otherwise point temp o the first node of the linked list to avoiding lost all the linked list
        if(table[hashNumber] == NULL)
        {
            tmp->next = NULL;
        }
        else
        {
            //pointing tmp to the first node of the linked list
            tmp->next = table[hashNumber];
        }
        //point the header to tmp
        table[hashNumber] = tmp;

        totalWords++;
    }

    //close the file and return true
    fclose(dict);
    return true;
}

// Returns number of words in file if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return totalWords;
}

void freenode(node *n)
{
    if(n->next != NULL)
    {
        freenode(n->next);
    }
    free(n);
}

// Unloads file from memory, returning true if successful, else false
bool unload(void)
{
    //free all the linked list and hash table from our memory
    for(int i = 0; i < N; i++)
    {
        if(table[i] != NULL)
        {
            freenode(table[i]);
        }
    }
    return true;
}

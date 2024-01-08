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
const unsigned int N = 26;

// Hash table
node *table[N];
int totalWords = 0;

// Returns true if word is in file, else false
bool check(const char *word)
{
    node *cursor = table[hash(word)];

    //strcasecmp compara palavras sem distinção de letras maiúsculas
    if(strcasecmp(cursor->word, word) == 0)
    {
        return true;
    }

    //loop enquanto a palavra não chega ao fim
    while(cursor->next != NULL)
    {
        cursor = cursor->next;
        if(strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
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
bool load(const char *file)
{
    FILE *file = fopen(dictionary, "r");  //abre o dicionario e armazena seus dados na var file
    char *fileWord = malloc(LENGTH);
    if( fileWord == NULL) // verifica se há espaço na memória
    {
        return false;
    }


    while(fscanf(file, "%s", fileWord) != EOF) //lê o arquivo até o fim
    {
        node *n = malloc(sizeof(node)); //aloca o pointer p o node
        if(n == NULL)
        {
            return false;
        }

        strcpy(n->word, fileWord); //copia a palavra p nó
        totalWords++;

        n->next = table[hash(fileWord)]; //apontando o next p o próximo node
        table[hash(fileWord)] = n; //colocando o array table com o pointer p n

    }

    fclose(file);
    free(fileWord);
    return true;
}

// Returns number of words in file if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return totalWords;
}

// Unloads file from memory, returning true if successful, else false
bool unload(void)
{
    //criando pointers p trie
    node *tmp;
    node *cursor;

    //loop q vai atravessar a tabela
    for (int i = 0; i < N; i++)
    {
        if(table[i] == NULL)
        {
            continue;
        }

        cursor = table[i];
        tmp = cursor;

        while(cursor->next != NULL)
        {
            cursor = cursor->next;
            free(tmp);
            tmp = cursor;
        }
        free(cursor);
    }
    return true;
}

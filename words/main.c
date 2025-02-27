#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>
#include "word.h"

int main()
{
    List *verb,*noun,*adjective,*adverb;
    char word[20];

    verb = init_list();
    noun = init_list();
    adjective = init_list();
    adverb = init_list();

    strcpy(word,"Air");
    insert_at_head(noun,word);

    strcpy(word,"Arrive");
    insert_at_head(verb,word);

    strcpy(word,"Big");
    insert_at_head(adjective,word);

    strcpy(word,"Brightly");
    insert_at_head(adverb,word);

    strcpy(word,"Book");
    insert_at_head(noun,word);

    strcpy(word,"Build");
    insert_at_head(verb,word);

    strcpy(word,"Cold");
    insert_at_head(adjective,word);

    strcpy(word,"Carefully");
    insert_at_head(adverb,word);

    strcpy(word,"Chair");
    insert_at_head(noun,word);

    assert(noun->count==3);
    assert(verb->count==2);
    strcpy(word,"Big");
    assert(strcmp(adjective->head->word,word)==0);
}
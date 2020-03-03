#include "term.h"
#include <string.h>

term *new(char *org)
{
        term *temp = malloc(sizeof(term));
        int len = strlen(org);
        if (!temp) return NULL;
        temp -> org = malloc(sizeof(char) * (len + 1));
        if (!(temp -> org)) {
                free(temp);
                return NULL;
        }
        strcpy(temp -> org, org);
        temp -> value = 0;
        EMPTY_OP(temp -> op);
        temp -> op_type = NO_OP;
        temp -> parts = NULL;
        return SUCCESS;
}

int split(term *t)
{
        
}

#ifndef TERM_H_INCLUDED
#define TERM_H_INCLUDED

#define SUCCESS 0
#define BINARY 2
#define UNARY 1
#define NO_OP 0
#define OP_LEN 4
#define EMPTY_OP(op) {strcpy(op, "0000")}

typedef int datatype;

typedef struct _term {
        char *org;
        datatype value;
        char *op[OP_LEN];
        int op_type; // Binary or Unary
        struct _term *parts;
} term;

int process_term(char *t, datatype *result);
term *new(char *org);
int read(char *dest);
int test(char *org);
int split(term *t) //split term, create parts, return number of parts, or MEM_ERR
int split_calc_free(term *t); //recursive, creates whole syntax tree and calculates, frees afterwards


#endif

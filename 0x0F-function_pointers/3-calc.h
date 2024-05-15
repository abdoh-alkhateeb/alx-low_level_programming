#ifndef _3_CALC_H_
#define _3_CALC_H_

/**
 * struct op - Struct op.
 *
 * @op: The operator.
 * @f: The function associated.
 */
typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *))(int, int);

#endif /* _3_CALC_H_ */

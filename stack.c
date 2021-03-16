/**********************************************************************
 * Copyright (c) 2021
 *  Sang-Hoon Kim <sanghoonkim@ajou.ac.kr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTIABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 **********************************************************************/

/*====================================================================*/
/*          ****** DO NOT MODIFY ANYTHING FROM THIS LINE ******       */
#include <stdio.h>
#include "types.h"
#include "list_head.h"

/* Declaration for the stack instance defined in pa0.c */
extern struct list_head stack;

/* Entry for the stack */
struct entry {
	struct list_head list;
	char *string;
};
/*          ****** DO NOT MODIFY ANYTHING ABOVE THIS LINE ******      */
/*====================================================================*/

/*====================================================================*
 * The rest of this file is all yours. This implies that you can      *
 * include any header files if you want to ...                        */

#include <stdlib.h>                    /* like this */
#include <string.h>

	
/**
 * push_stack()
 *
 * DESCRIPTION
 *   Push @string into the @stack. The @string should be inserted into the top
 *   of the stack. You may use either the head or tail of the list for the top.
 */
// 

	
void push_stack(char *string)
{
	/* TODO: Implement this function */
	struct entry *new = malloc(sizeof(struct entry));
	new->string=malloc(sizeof(char)*81);  //maxbuffer + 1('\0') 할당 
	strcpy((new->string),string);  //new->sring하면 메모리 할당한거 날라감
	list_add(&(new->list),&stack);
}


/**
 * pop_stack()
 *
 * DESCRIPTION
 *   Pop a value from @stack and return it through @buffer. The value should
 *   come from the top of the stack, and the corresponding entry should be
 *   removed from @stack.
 *
 * RETURN
 *   If the stack is not empty, pop the top of @stack, and return 0
 *   If the stack is empty, return -1
 */
int pop_stack(char *buffer)
{
	/* TODO: Implement this function */
	//list 제일 위에 stack -> next꺼 꺼내고
	if(!list_empty(&stack)){
		strcpy(buffer,list_first_entry(&stack,struct entry,list)->string);
		__list_del(&stack,&(list_first_entry(stack.next,struct entry,list)->list));

		return 0; //free는 어떻게 시키지?
	}
	else
		return -1; /* Must fix to return a proper value when @stack is not empty */
}


/**
 * dump_stack()
 *
 * DESCRIPTION
 *   Dump the contents in @stack. Print out @string of stack entries while
 *   traversing the stack from the bottom to the top. Note that the value
 *   should be printed out to @stderr to get properly graded in pasubmit.
 */
void dump_stack(void)
{
	/* TODO: Implement this function */
	struct list_head *pos;

	list_for_each_prev(pos,&stack){
		fprintf(stderr, "%s\n", list_entry((pos),struct entry,list)->string); 
	}

	//fprintf(stderr, "%s\n", "0xdeadbeef"); /* Example. 
	//										Print out values in this form */
}

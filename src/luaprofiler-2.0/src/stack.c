/*
** LuaProfiler 2.0
** Copyright Kepler Project 2005 (http://www.keplerproject.org/luaprofiler)
** $Id: stack.c,v 1.3 2005/06/13 19:34:58 mascarenhas Exp $
*/

/*****************************************************************************
stack.c:
   Simple stack manipulation
*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void lprofS_push(lprofS_STACK *p, lprofS_STACK_RECORD r) {
	lprofS_STACK q;
        q=(lprofS_STACK)malloc(sizeof(lprofS_STACK_RECORD));
        *q=r;
        q->next=*p;
        *p=q;
}

lprofS_STACK_RECORD lprofS_pop(lprofS_STACK *p) {
	lprofS_STACK_RECORD r;
	lprofS_STACK q;

        r=**p;
        q=*p;
        *p=(*p)->next;
        free(q);
        return r;
}

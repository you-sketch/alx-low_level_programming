#ifndef _LIST_H_
#define _LIST_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t print_list(const list_t *h);

typedef struct list_s
{
   char *str;
   size_t len;
   struct list_s *next;
}
#endif

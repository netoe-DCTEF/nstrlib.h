#ifndef NLIBSTR_H_
#define NLIBSTR_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../include/getline.h"

int nlibstr_countstr(char *str);
void nlibstr_show_str(char *str);
void nlibstr_clear_buffers();
int nlibstr_indexof_str(char *string, char character);
void nlibstr_stringCopy(char *source, char *dest);
int nlibstr_sizeof_str(char *buf);
void nlibstr_toupper_str(char *string);
void nlibstr_tolower_str(char *string);
int nlibstr_cmpsizeof_str(char *buf1, char *buf2);
int nlibstr_cmp_str(char *str1, char *str2);
void nlibstr_dynamic_cpystr(char *str_dinamic, char *content); // Warning! // Non-tested yet...
int nlibstr_index_of(const char find, const char *string);
void nlibstr_parse_non_spaces(char *string, char *string_dinamic); // Non-tested yet...
char *nlibstr_getline();                                           // Warning!, non-tested yet...
                                                                   // strlen() "source" code

#endif /*NLIBSTR_H_*/
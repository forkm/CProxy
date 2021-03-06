#ifndef REQUEST_H
#define REQUEST_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include "http.h"
#include "conf.h"
#include "picohttpparser.h"

void *memmem(const void *haystack, size_t haystacklen, const void *needle, size_t needlelen);
char *replace(char *replace_memory, int *replace_memory_len, const char *src, const int src_len, const char *dest, const int dest_len);
char *request_head(conn *in, conf *configure);


#endif

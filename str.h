#pragma once

typedef struct str {
    char *value;
} str;


void setstr(str *string, char *value);

char *retstr(str *string);

int lenstr(const char *a);

char *addstr(char *a, char *b);

char *substr(char *string, int start, int end);

int cmpstr(char *a, char *b);


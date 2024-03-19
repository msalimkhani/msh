#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <linux/limits.h>
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
typedef enum {false, true} bool;
int readline(char *__buf);
char *strremove(char *str, const char *sub);
int cd(char *__buf);
char* replaceWord(const char* s, const char* oldW, const char* newW);
int clear();
int RunShell();

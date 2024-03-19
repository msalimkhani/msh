#include "../libs/msh.h"

char *strremove(char *str, const char *sub) {
    size_t len = strlen(sub);
    if (len > 0) {
        char *p = str;
        size_t size = 0;
        while ((p = strstr(p, sub)) != NULL) {
            size = (size == 0) ? (p - str) + strlen(p + len) + 1 : size - len;
            memmove(p, p + len, size - (p - str));
        }
    }
    return str;
}

char* replaceWord(const char* s, const char* oldW, const char* newW) 
{ 

    char* result; 

    int i, cnt = 0; 

    int newWlen = strlen(newW); 

    int oldWlen = strlen(oldW); 

    for (i = 0; s[i] != '\0'; i++) { 

        if (strstr(&s[i], oldW) == &s[i]) { 

            cnt++; 

            i += oldWlen - 1; 

        } 

    } 

    result = (char*)malloc(i + cnt * (newWlen - oldWlen) + 1); 
 

    i = 0; 

    while (*s) { 

        if (strstr(s, oldW) == s) { 

            strcpy(&result[i], newW); 

            i += newWlen; 

            s += oldWlen; 

        } 

        else

            result[i++] = *s++; 

    } 
 

    result[i] = '\0'; 

    return result; 
} 
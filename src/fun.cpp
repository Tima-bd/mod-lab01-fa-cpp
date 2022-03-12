// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
     int i = 0;
    int now_word = 0;
    int how_many_words = 0;
    while (str[i] != ' ')
    {
        if (str[i] == ' ')
        {
            now_word = 0;
        }
        else if (str[i] != ' ' && now_word == 0 && isdigit(str[i]))
        {
            now_word = 1;
            how_many_words++;
        }
        i++;
    }
    return how_many_words;
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}

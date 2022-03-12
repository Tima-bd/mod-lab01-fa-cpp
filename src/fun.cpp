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
        else if (now_word == 0 && isdigit(str[i]))
        {
            now_word = 1;
            how_many_words++;
        }
        i++;
    }
    return how_many_words;
}

unsigned int faStr2(const char *str) {
    int i = 0;
    int now_word = 0;
    int how_many_words = 0;
    int good_word = 0;
    while (str[i] != ' ')
    {
        if (str[i] == ' ' && good_word == 1)
        {
            how_many_words++;
            good_word = 0;
            now_word = 0;
        }
        else if (str[i] == ' ')
        {
            now_word = 0;
        }
        else if (now_word == 0 && str[i]>='A' && str[i]<='Z')
        {
            now_word = 1;
            good_word = 1;
        }
        else if (now_word == 1 && ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
        {
            now_word = 1;
        }
        else
        {
            now_word = 1;
            good_word = 0;
        }

        i++;
    }
    return how_many_words;
}

unsigned int faStr3(const char *str) {
    int i = 0;
    int now_word = 0;
    int how_many_words = 0;
    int len = 0;
    while (str[i] != ' ')
    {
        if (str[i] == ' ')
        {
            now_word = 0;
        }
        else if (now_word == 0)
        {
            now_word = 1;
            how_many_words++;
            len++;
        }
        else if (now_word == 1)
        {
            len++;
        }

        i++;
    }
    int aver_word_len = len / how_many_words;
    return aver_word_len;
}

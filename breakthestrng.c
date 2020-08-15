//
//  main.c
//  break_the_string
//
//  Created by sowmya on 15/08/20.
//  Copyright © 2020 sowmya. All rights reserved.
//
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "strtok_needs_to_be_called_several_times_to_split_a_string";
    int init_size = strlen(str);
    char delim[] = "_";

    char *ptr = strtok(str, delim);

    while (ptr != NULL)
    {
        printf(""%s",", ptr);
        ptr = strtok(NULL, delim);
    }

    return 0;
}

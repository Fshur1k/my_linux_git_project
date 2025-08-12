#include <stdio.h>

char *ft_str_capitalize(char *str);

int main(void)
{
    char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
    ft_str_capitalize(str);
    return 0;
}

char *ft_str_capitalize(char *str)
{
    
    //check if line is empty then return 0;
    
    //check if the first char is in array of alphabet
        //if first letter small one then capitalize it
        //then check if next  chars is in list of letter and small them, in case symbols just skip them
        //check chars untill find space char
    //return string
}
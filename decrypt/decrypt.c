#include <stdio.h>
#include <string.h>

int char2int(char input)
{
    if (input >= '0' && input <= '9')
    {
        return input - '0';
    }
    if (input >= 'A' && input <= 'F')
    {
        return input - 'A' + 10;
    }
    if (input >= 'a' && input <= 'f')
    {
        return input - 'a' + 10;
    }
}

int main()
{

    char KEY1[] = "a6c8b6733c9b22de7bc0253266a3867df55acde8635e19c73313";
    char KEY2_KEY3[] = "c1545756687e7573db23aa1c3452a098b71a7fbf0fddddde5fc1";
    char FLAG_KEY1_KEY2_KEY3[] = "04ee9855208a2cd59091d04767ae47963170d1660df7f56f5faf";
    char FLAG_KEY1[] = {0};
    char FLAG[] = {0};
    int lenght = strlen(KEY1);
    
    for (size_t a = 0; a < lenght; a++)
    {
        KEY1[a] = char2int(KEY1[a]);
    }
    for (size_t i = 0; i < lenght; i++)
    {
        KEY2_KEY3[i] = char2int(KEY2_KEY3[i]);
    }
    for (size_t j = 0; j < lenght; j++)
    {
        FLAG_KEY1_KEY2_KEY3[j] = char2int(FLAG_KEY1_KEY2_KEY3[j]);
    }
    for (size_t k = 0; k < lenght; k++)
    {
        FLAG_KEY1[k] = KEY2_KEY3[k] ^ FLAG_KEY1_KEY2_KEY3[k];
        FLAG_KEY1[k] = char2int(FLAG_KEY1[k]);
    }
    for (size_t l = 0; l < lenght; l++)
    {
        FLAG[l] = FLAG_KEY1[l] ^ KEY1[l];
    }

    for (size_t i = 0; i < lenght; i = i+2)
    {
        char total = (FLAG[i]*16) + FLAG[i+1];
        printf("%c",total);
    }
    
    return 0;
}
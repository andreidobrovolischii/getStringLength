#include <stdio.h>

int get_string_length(char *string)
{
    int length = 0;
    while (*string != '\0')
    {
        length++;
        string++;
    }
    
    return length;
}

int main()
{
    int result = 0;
    char arr[20];
    printf("Write some word: ");
    scanf("%s", arr);
    result = get_string_length(arr);
    printf("The length is %d", result);

    return 0;
}
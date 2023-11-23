#include <stdio.h>
#include <stdlib.h>

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
    char* arr;
    printf("Write some word: ");
    arr = (char*)malloc(100 * sizeof(char));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  
    }
    scanf("%s", arr);
    result = get_string_length(arr);
    printf("The length is %d", result);
    free(arr);
    return 0;
}
 #include <stdio.h>
   #include <string.h>

   #define ASCII_SIZE 256

   int main() {
    char str[100];
    int freq[ASCII_SIZE] = {0};
    int max_freq = -1;
    char max_char;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]]++;
    }

    for (int i = 0; i < strlen(str); i++) {
        if (freq[str[i]] > max_freq) {
            max_freq = freq[str[i]];
            max_char = str[i];
        }
    }

    printf("The maximum occurring character in the string is '%c' with frequency %d.", max_char, max_freq);

    return 0;
}

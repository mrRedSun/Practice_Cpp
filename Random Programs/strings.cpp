#include <iostream>
#include <cstring>

bool isPolyndrome(char * string) {
    for(int i = 0; i < strlen(string) / 2; i++) {
        if (string[i] != string[strlen(string) - 1 - i]) {
            return false;
        }
    }

    return true;
}

char * trim (char * string) {

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] != ' ') {
            string += i;
            break;
        }
    }

    for(int i = strlen(string) - 1; i >= 0; i--) {
        if (string[i] != ' ') {
            string[i + 1] = '\0';
            break;
        }
    }

    return string;
}

int * histogram (char * string)  {
    int start = (int) 'a';
    int end = (int) 'z';
    int * histogramAr = new int[27];
    for (int i = 0; i <= 27; i++) { histogramAr[i] = 0;}


    for (int i = 0; i < strlen(string); i++) {
        if ((int) string[i] >= start && (int) string[i] <= end) {
            histogramAr [(int) string[i] - start] += 1;
        }
    }

    return histogramAr;
}


bool isAnagram (char * s1, char * s2) {
    int * h1 = histogram(s1);
    int * h2 = histogram(s2);
    for (int i = 0; i < strlen(s1); i++) {
        if (h1[i] != h2[i]) {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[]) {
    /*char text[80];

    std::cin.getline(text, 80);

    std::cout << strlen(text);

    char s1[20] = "Text";
    char s2[20] = "Problem";
    char s3[20];

    strcpy(s3, s1); std::cout << s3;

    strcat(s1, s2); std::cout << s1;

    char * p = strchr(s1, 'e');

    std::cout << *p;

    p = strstr(s1, "rob");

    std::cout << strcmp("ab", "aa") << '\n';
    return 0;
    */

    char start = 'a';
    char end = 'z';

    char str [] = "nnn";

    int * histog = histogram(str);
    for (int i = 0; i <= end  - start; i++) {

        std::cout << (char) ((int) start + i) <<  " = " << histog[i] <<std::endl;
    }

    char s1[] = "abc";
    char s2[] = "cba";

    std::cout << isAnagram(s1, s2);



}

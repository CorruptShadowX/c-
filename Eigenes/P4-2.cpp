#include <cstdio>

int count_character_in_string(char const string[], char search_character) {
  int count = 0;
  for (int i = 0; string[i] != '\0'; ++i) {
    if (string[i] == search_character) {
      ++count;
    }
  }
  return count;
}

void eval(char const string[], char search_char) {
  printf("There are %i occurrences of character '%c' in \"%s\"\n",
         count_character_in_string(string, search_char), search_char, string);
}

int main() {
  eval("Hello", 'l');
  eval("Hello", 'h');
  eval("Hello", 'H');

  return 0;
}

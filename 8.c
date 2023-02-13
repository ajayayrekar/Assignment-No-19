/*8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 1 )*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100

int min(int a, int b) {
  return a < b ? a : b;
}

int main() {
  char words[MAX_WORDS][20];
  int i, j, num_words, word1_index = -1, word2_index = -1, min_distance = INT_MAX;
  char word1[20], word2[20];

  printf("Enter the number of words in the list: ");
  scanf("%d", &num_words);

  printf("Enter the words: \n");
  for (i = 0; i < num_words; i++) {
    scanf("%s", words[i]);
  }

  printf("Enter the first word: ");
  scanf("%s", word1);

  printf("Enter the second word: ");
  scanf("%s", word2);

  for (i = 0; i < num_words; i++) {
    if (strcmp(words[i], word1) == 0) {
      word1_index = i;
    }
    if (strcmp(words[i], word2) == 0) {
      word2_index = i;
    }
    if (word1_index != -1 && word2_index != -1) {
      min_distance = min(min_distance, abs(word1_index - word2_index) - 1);
    }
  }

  printf("The minimum distance between %s and %s is %d\n", word1, word2, min_distance);

  return 0;
}

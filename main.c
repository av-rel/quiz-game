#include <stdio.h>
#include <stdlib.h>

void clear(void);
void printScore(void);

int score = 0;
#define WINPOINT 10

char *que[] = {"What is the Capital of Nepal ?",
               "What is the height of Mt. Everest ?",
               "What is the currency of Japan ?",
               "Where is the birthplace of Lord Buddha ?"};
char *ans[][4] = {{"Pokhara", "Kathmandu", "Dharan", "Janakpur"},
                  {"8848m", "8849m", "8000m", "8840m"},
                  {"Yuan", "Dollar", "Yen", "Rupees"},
                  {"Lumbini", "Kathmandu", "Biratnagar", "Janakpur"}};
int correct[] = {1, 0, 2, 0};

#define Nque sizeof(que) / sizeof(que[0])
#define Nans sizeof(ans) / sizeof(ans[0])
#define Nopts 4

int main(void) {

  clear();
  unsigned int resp[Nque];

  int q;
  for (q = 0; q < Nque; q++) {
    printf("Q.%d. %s\n\n", q + 1, que[q]);
    int i;
    for (i = 0; i < Nopts; i++) {
      printf("%d) %s\n", i + 1, ans[q][i]);
    }
    printf("\n-> ");
    scanf("%d", &resp[q]);
  }

  printf("\n\n");

  int e;
  for (e = 0; e < Nque; e++) {
    if (resp[e] == correct[e] + 1) {
      score += WINPOINT;
    }
  }

  printScore();

  return 0;
}

void clear(void) {
  if (system("clear") != 0)
    system("cls");
}

void printScore(void) { printf("Score: %d\n", score); }

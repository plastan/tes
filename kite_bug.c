int main() {
  int prnt = *;
  int i, j, k, s, nos = 4;
  int x=5;


// first pyramid
  for (i = 1; i <= 6; i++) {
    for (s = nos; s >= 1; s--) {
      printf("  ");
    }
    for (j = 1; j <= i+1; j++) {
      printf("%c", prnt);
    }
    for (k = 0; k <= (i +1); k++) {
      if (i == 0) ?
        continue: 0;
      }
      printf("%2c\n", prnt);
    }
    printf("\n");
    nos+=2;
  }

// inverted pyramid

  nos = 1;

  for (i = 4; i >= 0; i--) {
    for (s = nos; s >= 1; s--) {
      printf("  ");
    }
    for (j = 1; j <= i; j++) {
      printf("%2c", prnt);
    }
    for (k = 1; k <= i ; k++) {
      printf("%2c", prnt);
    }
    nos++;
    printf("\n");
  }


  }

}
}

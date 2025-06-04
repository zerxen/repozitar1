int main() {
  printf("Hello world");
    int x = 5;
    int y = 7;
    int vysledok = sucet(x, y);
  // Filipova funkcia

int jePrvocislo(int n) {
    int i;

    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    i = 3;
    while (i * i <= n) {
        if (n % i == 0) return 0;
        i = i + 2;
    }

    return 1;
}

int main() {
    // Príklad: otestujeme čísla 1 až 20
    int n = 1;
    while (n <= 20) {
        if (jePrvocislo(n)) {
            // Tu by si normálne použil printf, ale nepoužívame knižnice
            // Napr. v simulátore si môžeš pozrieť návratové hodnoty funkcie
        }
        n = n + 1;
    }

    return 0;
}


    printf("Súčet %d a %d je %d\n", x, y, vysledok);

    return 0;
return 0
  }
  
int sucet(int a, int b) {
    return a + b;
}




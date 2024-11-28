#include <stdio.h>

void TOH(int n, char Beg, char Aux, char End) {
    if (n == 1) {
        printf("\nMove disk 1 from peg %c to peg %c", Beg, End);
        return;
    }
    
    TOH(n - 1, Beg, End, Aux); // Move n-1 disks from Beg to Aux
    printf("\nMove disk %d from peg %c to peg %c", n, Beg, End);
    TOH(n - 1, Aux, Beg, End); // Move n-1 disks from Aux to End
}

int main() {
    int n;
    printf("\nEnter the number of disks: ");
    scanf("%d", &n);
    TOH(n, 'A', 'B', 'C'); // A, B, C are the names of the pegs
    return 0;
}

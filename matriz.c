#include <stdio.h>

#define MAX_LIN 20
#define MAX_COL 20

int main() {
    int NUM_LIN, NUM_COL, i, j;
    int matriz[MAX_LIN][MAX_COL], m_transposta[MAX_COL][MAX_LIN];

    scanf("%d %d", &NUM_LIN, &NUM_COL);

    for (i = 0; i < NUM_LIN; i++) {
        for (j = 0; j < NUM_COL; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < NUM_COL; i++) {
        for (j = 0; j < NUM_LIN; j++) {
            m_transposta[i][j] = matriz[j][i];
        }
    }

    for (i = 0; i < NUM_COL; i++) {
        for (j = 0; j < NUM_LIN; j++) {
            printf("%d ", m_transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}

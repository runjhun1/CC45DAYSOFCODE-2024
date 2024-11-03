#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int cumulative_score1 = 0;
    int cumulative_score2 = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < N; i++) {
        int S, T;
        scanf("%d %d", &S, &T);

        cumulative_score1 += S;
        cumulative_score2 += T;

        int current_lead;
        int current_winner;

        if (cumulative_score1 > cumulative_score2) {
            current_lead = cumulative_score1 - cumulative_score2;
            current_winner = 1;
        } else {
            current_lead = cumulative_score2 - cumulative_score1;
            current_winner = 2;
        }

        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_winner;
        }
    }

    printf("%d %d\n", winner, max_lead);
    return 0;
}


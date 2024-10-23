#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);
        
        // Calculate normal attacks needed
        int attacks_normal = (H + X - 1) / X;
        
        // Calculate attacks needed if special attack is used first
        int remaining_health = H - Y;
        int attacks_after_special = (remaining_health > 0) ? (remaining_health + X - 1) / X : 0;
        
        int attacks_with_special = 1 + attacks_after_special;
        
        // Find the minimum attacks needed
        int min_attacks = (attacks_normal < attacks_with_special) ? attacks_normal : attacks_with_special;
        
        printf("%d\n", min_attacks);
    }
    
    return 0;
}


#include <stdio.h>
#include <string.h>

typedef struct {
    int xx, yy, zz, mm;
    char nickname[10];
} address_t;

void scan_address(address_t allNetwork[], int *length) {
    for (int i = 0; i < 100; i++, (*length)++) {
        scanf("%d.%d.%d.%d %10s", &allNetwork[i].xx, &allNetwork[i].yy, &allNetwork[i].zz, &allNetwork[i].mm, &allNetwork[i].nickname);
        if (allNetwork[i].xx != 0) continue;
        if (allNetwork[i].xx != allNetwork[i].yy) continue;
        if (allNetwork[i].yy != allNetwork[i].zz) continue;
        if (allNetwork[i].zz != allNetwork[i].mm) continue;
        if (strcmp(allNetwork[i].nickname, "none") != 0) continue;
        return;
    }
}

int local_address(address_t *network1, address_t *network2) {
    return (network1->xx == network2->xx) && (network1->yy == network2->yy);
}

int main(void) {
    int length = 0;
    address_t allNetwork[100];
    scan_address(allNetwork, &length);
    for (int i = 0; i < length; i++)
        for (int j = i + 1; j < length; j++)
            if (local_address(&allNetwork[i], &allNetwork[j]))
                printf("Machines %s and %s are on the same local network.\n", allNetwork[i].nickname, allNetwork[j].nickname);
    return 0;
}

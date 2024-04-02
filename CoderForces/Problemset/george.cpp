    #include <stdio.h>
     
    int main() {
        int n,p,q, rooms = 0;
     
        scanf("%d", &n);
     
        for(int i = 0; i < n ; i++) {
            scanf("%d", &p);
            scanf("%d", &q);
            if(p <= q-2) {
                rooms = rooms + 1;
            }
        }
     
        printf("%d", rooms);
     
        return 0;
    }
#include <stdio.h>

int main() {
    char res[20];

    printf("Will you be my valentine?🔥💣🔥🥵🥵🔥💣🔥 ");
    scanf("%s", &res);

    if(res[0] == 'Y' && res[1] == 'e' && res[2] == 's'){
        printf("I knew it i'm so cool\n");
    }
    else if(res[0] == 'N' && res[1] == 'o'){
        printf("Rats💣💣\n");
    }
    else {
        printf("PLEASE SAY YES OR NO! Preferably yes💣💣💣💣\n");}
    return 0;
}

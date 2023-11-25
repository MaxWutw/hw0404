#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "mychess.h"
int main(int argc, char *argv[]){
    int32_t board[10][9] = {{EMPTY, EMPTY, EMPTY, RED_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, BLACK_CHARIOT, EMPTY, BLACK_SOLDIER, EMPTY, EMPTY, BLACK_CHARIOT, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_SOLDIER, EMPTY, BLACK_SOLDIER, RED_HORSE, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_GENERAL, EMPTY, RED_SOLDIER, EMPTY, BLACK_HORSE}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, RED_CHARIOT, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, BLACK_ADVISOR, EMPTY, BLACK_ADVISOR, EMPTY, EMPTY, EMPTY} \
    };
    int32_t board2[10][9] = {{EMPTY, EMPTY, EMPTY, RED_GENERAL, EMPTY, RED_ADVISOR, EMPTY, EMPTY, EMPTY}, \
                            {RED_CHARIOT, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, BLACK_HORSE, EMPTY, EMPTY, EMPTY, EMPTY, RED_CANNON, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLACK_SOLDIER}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLACK_SOLDIER, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLACK_ADVISOR, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_GENERAL, EMPTY, BLACK_ELEPHANT, EMPTY, EMPTY}  \
    };
    int32_t board3[10][9] = {{EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, RED_ADVISOR, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, RED_CANNON, EMPTY, EMPTY, EMPTY, RED_GENERAL, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, BLACK_HORSE, EMPTY, EMPTY, EMPTY, RED_HORSE, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, BLACK_CANNON, EMPTY, EMPTY, BLACK_SOLDIER, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, BLACK_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, RED_CHARIOT}  \
    };
    int32_t board4[10][9] = {{EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, RED_ADVISOR, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, RED_CANNON, EMPTY, EMPTY, EMPTY, RED_GENERAL, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, BLACK_HORSE, EMPTY, EMPTY, EMPTY, RED_HORSE, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_CANNON, EMPTY, BLACK_SOLDIER, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, BLACK_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, RED_CHARIOT}  \
    };
    int32_t board5[10][9] = {{EMPTY, EMPTY, EMPTY, EMPTY, RED_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, RED_ADVISOR, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, RED_CANNON, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, RED_CHARIOT}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {RED_HORSE, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, BLACK_SOLDIER, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, BLACK_CHARIOT, BLACK_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, BLACK_HORSE, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, RED_CANNON, EMPTY, EMPTY}  \
    };
    int32_t board6[10][9] = {{EMPTY, EMPTY, RED_CANNON, EMPTY, EMPTY, RED_ADVISOR, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, RED_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, BLACK_HORSE, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {RED_HORSE, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, RED_SOLDIER, BLACK_ADVISOR, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, BLACK_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, RED_CHARIOT, EMPTY, EMPTY, EMPTY, EMPTY, BLACK_ELEPHANT, EMPTY, EMPTY}  \
    };
    int32_t board7[10][9] = {{EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, RED_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_CHARIOT, RED_CANNON, RED_CANNON, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_ELEPHANT, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}  \
    };
    int32_t board8[10][9] = {{EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, RED_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_CHARIOT, RED_CHARIOT, RED_CANNON, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_GENERAL, BLACK_CANNON, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}  \
    };
    int32_t board9[10][9] = {{EMPTY, EMPTY, EMPTY, EMPTY, RED_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, RED_ADVISOR, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {RED_SOLDIER, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, RED_CANNON, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, RED_CANNON, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_CHARIOT, BLACK_ADVISOR, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_ADVISOR, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY}  \
    };
    int32_t board10[10][9] = {{EMPTY, EMPTY, EMPTY, EMPTY, RED_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {RED_SOLDIER, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, RED_CANNON, BLACK_ELEPHANT, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, RED_CANNON, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_CHARIOT, BLACK_ADVISOR, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_ADVISOR, EMPTY, EMPTY, EMPTY, EMPTY}, \
                            {EMPTY, EMPTY, EMPTY, EMPTY, BLACK_GENERAL, EMPTY, EMPTY, EMPTY, EMPTY}  \
    };
    int32_t ret;
    if(strcmp(argv[1], "1") == 0) ret = checkmate(board);
    else if(strcmp(argv[1], "2") == 0) ret = checkmate(board2);
    else if(strcmp(argv[1], "3") == 0) ret = checkmate(board3);
    else if(strcmp(argv[1], "4") == 0) ret = checkmate(board4);
    else if(strcmp(argv[1], "5") == 0) ret = checkmate(board5);
    else if(strcmp(argv[1], "6") == 0) ret = checkmate(board6);
    else if(strcmp(argv[1], "7") == 0) ret = checkmate(board7);
    else if(strcmp(argv[1], "8") == 0) ret = checkmate(board8);
    else if(strcmp(argv[1], "9") == 0) ret = checkmate(board9);
    else if(strcmp(argv[1], "10") == 0) ret = checkmate(board10);
    printf("\nYour return value is %d \n", ret);
    printf("=====================\n");
    
    return 0;
}

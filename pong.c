// I WANT TO PLAY WITH YOU
//         YOUR FRIEND, AI

#include <stdio.h>

void printDigit(int digit) {
    switch (digit) {
        case (0):
            printf("  #### \n");
            printf(" #    #\n");
            printf(" #    #\n");
            printf(" #    #\n");
            printf(" #    #\n");
            printf(" #    #\n");
            printf("  #### ");
            break;
        case (1):
            printf("     # \n");
            printf("    ## \n");
            printf("   # # \n");
            printf("     # \n");
            printf("     # \n");
            printf("     # \n");
            printf("     # ");
            break;
        case (2):
            printf("  #### \n");
            printf(" #    #\n");
            printf("     # \n");
            printf("    #  \n");
            printf("   #   \n");
            printf("  #    \n");
            printf(" ###### ");
            break;
        case (3):
            printf(" #####  \n");
            printf("      # \n");
            printf("      # \n");
            printf("  ####  \n");
            printf("      # \n");
            printf("      # \n");
            printf(" #####  ");
            break;
        case (4):
            printf(" #    # \n");
            printf(" #    # \n");
            printf(" #    # \n");
            printf(" ###### \n");
            printf("      # \n");
            printf("      # \n");
            printf("      #  ");
            break;
        case (5):
            printf(" ###### \n");
            printf(" #      \n");
            printf(" #      \n");
            printf(" #####  \n");
            printf("      # \n");
            printf("      # \n");
            printf(" #####  ");
            break;
        case (6):
            printf("  ####  \n");
            printf(" #      \n");
            printf(" #      \n");
            printf(" #####  \n");
            printf(" #    # \n");
            printf(" #    # \n");
            printf("  ####   ");
            break;
        case (7):
            printf(" #######\n");
            printf("      # \n");
            printf("     #  \n");
            printf("    #   \n");
            printf("   #    \n");
            printf("  #     \n");
            printf(" #      ");
            break;
        case (8):
            printf("  ####  \n");
            printf(" #    # \n");
            printf(" #    # \n");
            printf("  ####  \n");
            printf(" #    # \n");
            printf(" #    # \n");
            printf("  ####   ");
            break;
        case (9):
            printf(" ###### \n");
            printf(" #    # \n");
            printf(" #    # \n");
            printf(" ###### \n");
            printf("      # \n");
            printf("      # \n");
            printf(" ######  ");
            break;
        case (10):
            printf(" #  ####  \n");
            printf(" # #    # \n");
            printf(" # #    # \n");
            printf(" # #    # \n");
            printf(" # #    # \n");
            printf(" # #    # \n");
            printf(" #  ####   ");
            break;
        case (11):
            printf(" #      #\n");
            printf(" #      # \n");
            printf(" #      # \n");
            printf(" #      # \n");
            printf(" #      # \n");
            printf(" #      # \n");
            printf(" #      #");
            break;
        case (12):
            printf(" #  ####  \n");
            printf(" # #    # \n");
            printf(" #      # \n");
            printf(" #     #  \n");
            printf(" #    #   \n");
            printf(" #   #    \n");
            printf(" #  #####");
            break;
        case (13):
            printf(" #  ####  \n");
            printf(" # #    # \n");
            printf(" #      # \n");
            printf(" #   ###  \n");
            printf(" #      # \n");
            printf(" # #    # \n");
            printf(" #  ####");
            break;
        case (14):
            printf(" #  #   # \n");
            printf(" #  #   # \n");
            printf(" #  #   # \n");
            printf(" #  ##### \n");
            printf(" #      # \n");
            printf(" #      # \n");
            printf(" #      # ");
            break;
        case (15):
            printf(" #  ##### \n");
            printf(" #  #     \n");
            printf(" #  #     \n");
            printf(" #  ##### \n");
            printf(" #      # \n");
            printf(" #      # \n");
            printf(" #  #####  ");
            break;
        case (16):
            printf(" #  ##### \n");
            printf(" #  #     \n");
            printf(" #  #     \n");
            printf(" #  ##### \n");
            printf(" #  #   # \n");
            printf(" #  #   # \n");
            printf(" #  #####  ");
            break;
        case (17):
            printf(" #  ##### \n");
            printf(" #     #  \n");
            printf(" #    #   \n");
            printf(" #    #   \n");
            printf(" #    #   \n");
            printf(" #    #   \n");
            printf(" #    #   ");
            break;
        case (18):
            printf(" #  ##### \n");
            printf(" #  #   # \n");
            printf(" #  #   # \n");
            printf(" #  ##### \n");
            printf(" #  #   # \n");
            printf(" #  #   # \n");
            printf(" #  #####  ");
            break;
        case (19):
            printf(" #  ##### \n");
            printf(" #  #   # \n");
            printf(" #  #   # \n");
            printf(" #  ##### \n");
            printf(" #      # \n");
            printf(" #      # \n");
            printf(" #  #####  ");
            break;
        case (20):
            printf("  ####  ##### \n");
            printf(" #    # #   # \n");
            printf("     #  #   # \n");
            printf("    #   #   # \n");
            printf("   #    #   # \n");
            printf("  #     #   # \n");
            printf(" ###### #####  ");
            break;
        case (21):
            printf("  ####      # \n");
            printf(" #    #    ## \n");
            printf("     #   #  # \n");
            printf("    #       # \n");
            printf("   #        # \n");
            printf("  #         # \n");
            printf(" ######     #  ");

            break;
        default:
            break;
    }
}

void printScore(int score1, int score2) {
    printf("\nPlayer 1:\n");
    printDigit(score1);
    // printDigit(score1);  // Мы должны получить сюда переменную счета игрока 1
    printf("\nPlayer 2:\n");
    printDigit(score2);
    // printDigit(score2);  // Мы должны получить сюда переменную счета игрока 2
}

// int main() {
//     int player1_score = 15;
//     int player2_score = 21;
//     // printScore(player1_score, player2_score);
//
//
//
//     return 0;
// }

void printGameConsole() {
    int coordinateRacketLeft = 13;
    int coordinateRacketRight = 13;
    int regime = 1;
    int player1_score = 0;
    int player2_score = 0;
    int x;
    int y;

    int ball_x, ball_y, ball_vel_x, ball_vel_y;
    ball_x = 10;
    ball_y = 13;
    ball_vel_x = 1;
    ball_vel_y = 1;
    while (player1_score < 21 && player2_score < 21) {
        printf("\033[0d\033[2J");
        // Ball movement logic
        ball_x += ball_vel_x;
        ball_y += ball_vel_y;
        if (ball_y == 2 || ball_y == 24) {
            ball_vel_y = -ball_vel_y;
        } else if (ball_x == 3) {
            if (ball_y == (coordinateRacketLeft + 1) || ball_y == coordinateRacketLeft ||
                ball_y == (coordinateRacketLeft - 1)) {
                ball_vel_x = -ball_vel_x;
            } else {
                player2_score++;
                ball_x = 70;
                ball_y = 13;
            }
        } else if (ball_x == 75) {
            if (ball_y == (coordinateRacketRight + 1) || ball_y == coordinateRacketRight ||
                ball_y == (coordinateRacketRight - 1)) {
                ball_vel_x = -ball_vel_x;
            } else {
                player1_score++;
                ball_x = 70;
                ball_y = 13;
                ball_vel_x = -ball_vel_x;
            }
        }

        for (y = 0; y <= 35; y++) {
            for (x = 0; x <= 80; x++) {
                // rendering platform
                if (y == 0 || y == 25) {
                    printf("-");
                }
                // Ball rendering
                else if (x == ball_x && y == ball_y) {
                    printf("0");
                }

                else if (y > 0 && y <= 25) {
                    // rendering left rackets
                    if (x == 2 && y == coordinateRacketLeft - 1) {
                        printf("#");
                    }

                    else if (x == 2 && y == coordinateRacketLeft) {
                        printf("#");
                    }

                    else if (x == 2 && y == coordinateRacketLeft + 1) {
                        printf("#");
                    }

                    // rendering right rackets
                    else if (x == 78 && y == coordinateRacketRight - 1) {
                        printf("#");
                    }

                    else if (x == 78 && y == coordinateRacketRight) {
                        printf("#");
                    }

                    else if (x == 78 && y == coordinateRacketRight + 1) {
                        printf("#");
                    }

                    else if (x == 0) {
                        printf("|");
                    }

                    else if (x == 40) {
                        printf(":");
                    }

                    else if (x == 80) {
                        printf("|\n");
                    } else {
                        printf(" ");
                    }

                }

                else if (x == 15 && y == 29) {
                    printScore(player1_score, player2_score);
                }
            }
        }

        printf("\n");
        char input = getchar();
        if (input != '\n') {
            while (getchar() != '\n')
                ;
        }
        if (regime == 1) {
            if (input == 'a' && coordinateRacketLeft > 3) {
                coordinateRacketLeft -= 1;
                regime = -1;
            }

            else if (input == 'z' && coordinateRacketLeft < 23) {
                coordinateRacketLeft += 1;
                regime = -1;
            }
        }

        else if (regime == -1) {
            if (input == 'k' && coordinateRacketRight > 1) {
                coordinateRacketRight -= 1;
                regime = 1;
            }

            else if (input == 'm' && coordinateRacketRight < 24) {
                coordinateRacketRight += 1;
                regime = 1;
            }

        }

        else {
            continue;
        }
    }
    player1_score > player2_score ? printf("Player 1 won!") : printf("Player 2 won!");
}

int main(void) { printGameConsole(); }

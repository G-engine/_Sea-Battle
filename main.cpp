#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <set>

void print(char** my_field, char** enemy_field, const int &n, const int &m)
{
    system("cls");
    std::cout << "\n               YOUR SEA                     |                      ENEMY'S SEA       \n";
    std::cout <<   "                                            |                                          ";
    std::cout << "\n     A  B  C  D  E  F  G  H  I  J           |              A  B  C  D  E  F  G  H  I  J";
    for (int i = 1; i < n + 1; ++i)
    {
        std::cout << std::endl << "  " << i - 1 << "  ";
        for (int j = 1; j < m + 1; ++j)
        {
            std::cout << my_field[i][j] << "  ";
            if (j == m)
            {
                std::cout << "         |           " << i - 1 << "  ";
                for (int k = 1; k < m + 1; ++k)
                    std::cout << enemy_field[i][k] << "  ";
            }
        }
    }
}

void place_ships4(std::string &place_x, int &col1, int &line1, int &col2, int &line2, int &col3, int &line3, int &col4, int &line4)
{
    switch (place_x[0])
    {
        case 'A':
            col1 = 0;
            break;
        case 'B':
            col1 = 1;
            break;
        case 'C':
            col1 = 2;
            break;
        case 'D':
            col1 = 3;
            break;
        case 'E':
            col1 = 4;
            break;
        case 'F':
            col1 = 5;
            break;
        case 'G':
            col1 = 6;
            break;
        case 'H':
            col1 = 7;
            break;
        case 'I':
            col1 = 8;
            break;
        case 'J':
            col1 = 9;
            break;
    }
    switch (place_x[1])
    {
        case '0':
            line1 = 0;
            break;
        case '1':
            line1 = 1;
            break;
        case '2':
            line1 = 2;
            break;
        case '3':
            line1 = 3;
            break;
        case '4':
            line1 = 4;
            break;
        case '5':
            line1 = 5;
            break;
        case '6':
            line1 = 6;
            break;
        case '7':
            line1 = 7;
            break;
        case '8':
            line1 = 8;
            break;
        case '9':
            line1 = 9;
            break;
    }
    switch (place_x[2])
    {
        case 'A':
            col2 = 0;
            break;
        case 'B':
            col2 = 1;
            break;
        case 'C':
            col2 = 2;
            break;
        case 'D':
            col2 = 3;
            break;
        case 'E':
            col2 = 4;
            break;
        case 'F':
            col2 = 5;
            break;
        case 'G':
            col2 = 6;
            break;
        case 'H':
            col2 = 7;
            break;
        case 'I':
            col2 = 8;
            break;
        case 'J':
            col2 = 9;
            break;
    }
    switch (place_x[3])
    {
        case '0':
            line2 = 0;
            break;
        case '1':
            line2 = 1;
            break;
        case '2':
            line2 = 2;
            break;
        case '3':
            line2 = 3;
            break;
        case '4':
            line2 = 4;
            break;
        case '5':
            line2 = 5;
            break;
        case '6':
            line2 = 6;
            break;
        case '7':
            line2 = 7;
            break;
        case '8':
            line2 = 8;
            break;
        case '9':
            line2 = 9;
            break;
    }
    switch (place_x[4])
    {
        case 'A':
            col3 = 0;
            break;
        case 'B':
            col3 = 1;
            break;
        case 'C':
            col3 = 2;
            break;
        case 'D':
            col3 = 3;
            break;
        case 'E':
            col3 = 4;
            break;
        case 'F':
            col3 = 5;
            break;
        case 'G':
            col3 = 6;
            break;
        case 'H':
            col3 = 7;
            break;
        case 'I':
            col3 = 8;
            break;
        case 'J':
            col3 = 9;
            break;
    }
    switch (place_x[5])
    {
        case '0':
            line3 = 0;
            break;
        case '1':
            line3 = 1;
            break;
        case '2':
            line3 = 2;
            break;
        case '3':
            line3 = 3;
            break;
        case '4':
            line3 = 4;
            break;
        case '5':
            line3 = 5;
            break;
        case '6':
            line3 = 6;
            break;
        case '7':
            line3 = 7;
            break;
        case '8':
            line3 = 8;
            break;
        case '9':
            line3 = 9;
            break;
    }
    switch (place_x[6])
    {
        case 'A':
            col4 = 0;
            break;
        case 'B':
            col4 = 1;
            break;
        case 'C':
            col4 = 2;
            break;
        case 'D':
            col4 = 3;
            break;
        case 'E':
            col4 = 4;
            break;
        case 'F':
            col4 = 5;
            break;
        case 'G':
            col4 = 6;
            break;
        case 'H':
            col4 = 7;
            break;
        case 'I':
            col4 = 8;
            break;
        case 'J':
            col4 = 9;
            break;
    }
    switch (place_x[7])
    {
        case '0':
            line4 = 0;
            break;
        case '1':
            line4 = 1;
            break;
        case '2':
            line4 = 2;
            break;
        case '3':
            line4 = 3;
            break;
        case '4':
            line4 = 4;
            break;
        case '5':
            line4 = 5;
            break;
        case '6':
            line4 = 6;
            break;
        case '7':
            line4 = 7;
            break;
        case '8':
            line4 = 8;
            break;
        case '9':
            line4 = 9;
            break;
    }
}
void place_ships3(std::string &place_x, int &col1, int &line1, int &col2, int &line2, int &col3, int &line3)
{
    switch (place_x[0])
    {
        case 'A':
            col1 = 0;
            break;
        case 'B':
            col1 = 1;
            break;
        case 'C':
            col1 = 2;
            break;
        case 'D':
            col1 = 3;
            break;
        case 'E':
            col1 = 4;
            break;
        case 'F':
            col1 = 5;
            break;
        case 'G':
            col1 = 6;
            break;
        case 'H':
            col1 = 7;
            break;
        case 'I':
            col1 = 8;
            break;
        case 'J':
            col1 = 9;
            break;
    }
    switch (place_x[1])
    {
        case '0':
            line1 = 0;
            break;
        case '1':
            line1 = 1;
            break;
        case '2':
            line1 = 2;
            break;
        case '3':
            line1 = 3;
            break;
        case '4':
            line1 = 4;
            break;
        case '5':
            line1 = 5;
            break;
        case '6':
            line1 = 6;
            break;
        case '7':
            line1 = 7;
            break;
        case '8':
            line1 = 8;
            break;
        case '9':
            line1 = 9;
            break;
    }
    switch (place_x[2])
    {
        case 'A':
            col2 = 0;
            break;
        case 'B':
            col2 = 1;
            break;
        case 'C':
            col2 = 2;
            break;
        case 'D':
            col2 = 3;
            break;
        case 'E':
            col2 = 4;
            break;
        case 'F':
            col2 = 5;
            break;
        case 'G':
            col2 = 6;
            break;
        case 'H':
            col2 = 7;
            break;
        case 'I':
            col2 = 8;
            break;
        case 'J':
            col2 = 9;
            break;
    }
    switch (place_x[3])
    {
        case '0':
            line2 = 0;
            break;
        case '1':
            line2 = 1;
            break;
        case '2':
            line2 = 2;
            break;
        case '3':
            line2 = 3;
            break;
        case '4':
            line2 = 4;
            break;
        case '5':
            line2 = 5;
            break;
        case '6':
            line2 = 6;
            break;
        case '7':
            line2 = 7;
            break;
        case '8':
            line2 = 8;
            break;
        case '9':
            line2 = 9;
            break;
    }
    switch (place_x[4])
    {
        case 'A':
            col3 = 0;
            break;
        case 'B':
            col3 = 1;
            break;
        case 'C':
            col3 = 2;
            break;
        case 'D':
            col3 = 3;
            break;
        case 'E':
            col3 = 4;
            break;
        case 'F':
            col3 = 5;
            break;
        case 'G':
            col3 = 6;
            break;
        case 'H':
            col3 = 7;
            break;
        case 'I':
            col3 = 8;
            break;
        case 'J':
            col3 = 9;
            break;
    }
    switch (place_x[5])
    {
        case '0':
            line3 = 0;
            break;
        case '1':
            line3 = 1;
            break;
        case '2':
            line3 = 2;
            break;
        case '3':
            line3 = 3;
            break;
        case '4':
            line3 = 4;
            break;
        case '5':
            line3 = 5;
            break;
        case '6':
            line3 = 6;
            break;
        case '7':
            line3 = 7;
            break;
        case '8':
            line3 = 8;
            break;
        case '9':
            line3 = 9;
            break;
    }
}
void place_ships2(std::string &place_x, int &col1, int &line1, int &col2, int &line2)
{
    switch (place_x[0])
    {
        case 'A':
            col1 = 0;
            break;
        case 'B':
            col1 = 1;
            break;
        case 'C':
            col1 = 2;
            break;
        case 'D':
            col1 = 3;
            break;
        case 'E':
            col1 = 4;
            break;
        case 'F':
            col1 = 5;
            break;
        case 'G':
            col1 = 6;
            break;
        case 'H':
            col1 = 7;
            break;
        case 'I':
            col1 = 8;
            break;
        case 'J':
            col1 = 9;
            break;
    }
    switch (place_x[1])
    {
        case '0':
            line1 = 0;
            break;
        case '1':
            line1 = 1;
            break;
        case '2':
            line1 = 2;
            break;
        case '3':
            line1 = 3;
            break;
        case '4':
            line1 = 4;
            break;
        case '5':
            line1 = 5;
            break;
        case '6':
            line1 = 6;
            break;
        case '7':
            line1 = 7;
            break;
        case '8':
            line1 = 8;
            break;
        case '9':
            line1 = 9;
            break;
    }
    switch (place_x[2])
    {
        case 'A':
            col2 = 0;
            break;
        case 'B':
            col2 = 1;
            break;
        case 'C':
            col2 = 2;
            break;
        case 'D':
            col2 = 3;
            break;
        case 'E':
            col2 = 4;
            break;
        case 'F':
            col2 = 5;
            break;
        case 'G':
            col2 = 6;
            break;
        case 'H':
            col2 = 7;
            break;
        case 'I':
            col2 = 8;
            break;
        case 'J':
            col2 = 9;
            break;
    }
    switch (place_x[3])
    {
        case '0':
            line2 = 0;
            break;
        case '1':
            line2 = 1;
            break;
        case '2':
            line2 = 2;
            break;
        case '3':
            line2 = 3;
            break;
        case '4':
            line2 = 4;
            break;
        case '5':
            line2 = 5;
            break;
        case '6':
            line2 = 6;
            break;
        case '7':
            line2 = 7;
            break;
        case '8':
            line2 = 8;
            break;
        case '9':
            line2 = 9;
            break;
    }
}
void place_ships1(std::string &place_x, int &col, int &line)
{
    switch (place_x[0])
        {
            case 'A':
                col = 0;
                break;
            case 'B':
                col = 1;
                break;
            case 'C':
                col = 2;
                break;
            case 'D':
                col = 3;
                break;
            case 'E':
                col = 4;
                break;
            case 'F':
                col = 5;
                break;
            case 'G':
                col = 6;
                break;
            case 'H':
                col = 7;
                break;
            case 'I':
                col = 8;
                break;
            case 'J':
                col = 9;
                break;
        }
    switch (place_x[1])
        {
            case '0':
                line = 0;
                break;
            case '1':
                line = 1;
                break;
            case '2':
                line = 2;
                break;
            case '3':
                line = 3;
                break;
            case '4':
                line = 4;
                break;
            case '5':
                line = 5;
                break;
            case '6':
                line = 6;
                break;
            case '7':
                line = 7;
                break;
            case '8':
                line = 8;
                break;
            case '9':
                line = 9;
                break;
        }
}

void anti_switch(std::string &place_x, int &col, int &line)
{
    switch (col)
    {
        case 0:
            place_x[0] = 'A';
            break;
        case 1:
            place_x[0] = 'B';
            break;
        case 2:
            place_x[0] = 'C';
            break;
        case 3:
            place_x[0] = 'D';
            break;
        case 4:
            place_x[0] = 'E';
            break;
        case 5:
            place_x[0] = 'F';
            break;
        case 6:
            place_x[0] = 'G';
            break;
        case 7:
            place_x[0] = 'H';
            break;
        case 8:
            place_x[0] = 'I';
            break;
        case 9:
            place_x[0] = 'J';
            break;
    }
    switch (line)
    {
        case 0:
            place_x[1] = '0';
            break;
        case 1:
            place_x[1] = '1';
            break;
        case 2:
            place_x[1] = '2';
            break;
        case 3:
            place_x[1] = '3';
            break;
        case 4:
            place_x[1] = '4';
            break;
        case 5:
            place_x[1] = '5';
            break;
        case 6:
            place_x[1] = '6';
            break;
        case 7:
            place_x[1] = '7';
            break;
        case 8:
            place_x[1] = '8';
            break;
        case 9:
            place_x[1] = '9';
            break;
    }
}

void input_quad_ships(char** my_field, char** enemy_field, char** my_field_w, const int &n1, const int &m1)
{
    std::string place;
    int Col1 = 0, Line1 = 0, Col2 = 0, Line2 = 0, Col3 = 0, Line3 = 0, Col4 = 0, Line4 = 0;

    std::cout << "\n\n  Enter letters and numbers in increasing order (for example C8D8E8F8) to place a QUAD ship: ";
    std::cin >> place;

    while (!((place[0] >= 'A') && (place[0] <= 'J') && (place[1] >= '0') && (place[1] <= '9') &&
          (place[2] >= 'A') && (place[2] <= 'J') && (place[3] >= '0') && (place[3] <= '9') &&
          (place[4] >= 'A') && (place[4] <= 'J') && (place[5] >= '0') && (place[5] <= '9') &&
          (place[6] >= 'A') && (place[6] <= 'J') && (place[7] >= '0') && (place[7] <= '9') && (place[8] == '\0')))
    {
        std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
        std::cin >> place;
    }

    place_ships4(place, Col1, Line1, Col2, Line2, Col3, Line3, Col4, Line4);

    while (!(((Col1 == Col2) && (Col1 == Col3) && (Col1 == Col4) && (Line1 == Line2 - 1) && (Line2 == Line3 - 1) && (Line3 == Line4 - 1)) ||
            ((Line1 == Line2) && (Line1 == Line3) && (Line1 == Line4) && (Col1 == Col2 - 1) && (Col2 == Col3 - 1) && (Col3 == Col4 - 1))))
    {
        std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
        std::cin >> place;
        while (!((place[0] >= 'A') && (place[0] <= 'J') && (place[1] >= '0') && (place[1] <= '9') &&
                 (place[2] >= 'A') && (place[2] <= 'J') && (place[3] >= '0') && (place[3] <= '9') &&
                 (place[4] >= 'A') && (place[4] <= 'J') && (place[5] >= '0') && (place[5] <= '9') &&
                 (place[6] >= 'A') && (place[6] <= 'J') && (place[7] >= '0') && (place[7] <= '9') && (place[8] == '\0')))
        {
            std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
            std::cin >> place;
        }
        place_ships4(place, Col1, Line1, Col2, Line2, Col3, Line3, Col4, Line4);
    }


    my_field[Line1 + 1][Col1 + 1] = '#';
    my_field[Line2 + 1][Col2 + 1] = '#';
    my_field[Line3 + 1][Col3 + 1] = '#';
    my_field[Line4 + 1][Col4 + 1] = '#';
    my_field_w[Line1 + 1][Col1 + 1] = '4';
    my_field_w[Line2 + 1][Col2 + 1] = '4';
    my_field_w[Line3 + 1][Col3 + 1] = '4';
    my_field_w[Line4 + 1][Col4 + 1] = '4';

    print(my_field, enemy_field, n1, m1);
}
void input_triple_ships(char** my_field, char** enemy_field, char** my_field_w, const int &n1, const int &m1)
{
    std::string place;
    int Col1 = 0, Line1 = 0, Col2 = 0, Line2 = 0, Col3 = 0, Line3 = 0;

    for(int i = 0; i < 2; ++i)
    {
        std::cout << "\n\n  Enter letters and numbers in increasing order (for example F3F4F5) to place a TRIPLE ship: ";
        std::cin >> place;

        while (!((place[0] >= 'A') && (place[0] <= 'J') && (place[1] >= '0') && (place[1] <= '9') &&
                 (place[2] >= 'A') && (place[2] <= 'J') && (place[3] >= '0') && (place[3] <= '9') &&
                 (place[4] >= 'A') && (place[4] <= 'J') && (place[5] >= '0') && (place[5] <= '9') && (place[6] == '\0')))
        {
            std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
            std::cin >> place;
        }

        place_ships3(place, Col1, Line1, Col2, Line2, Col3, Line3);

        while (!(((Col1 == Col2) && (Col1 == Col3) && (Line1 == Line2 - 1) && (Line2 == Line3 - 1)) ||
                 ((Line1 == Line2) && (Line1 == Line3) && (Col1 == Col2 - 1) && (Col2 == Col3 - 1))))
        {
            std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
            std::cin >> place;
            while (!((place[0] >= 'A') && (place[0] <= 'J') && (place[1] >= '0') && (place[1] <= '9') &&
                     (place[2] >= 'A') && (place[2] <= 'J') && (place[3] >= '0') && (place[3] <= '9') &&
                     (place[4] >= 'A') && (place[4] <= 'J') && (place[5] >= '0') && (place[5] <= '9') &&
                     (place[6] >= 'A') && (place[6] <= 'J') && (place[7] >= '0') && (place[7] <= '9') && (place[8] == '\0')))
            {
                std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
                std::cin >> place;
            }
            place_ships3(place, Col1, Line1, Col2, Line2, Col3, Line3);
        }

        while ((my_field_w[Line1][Col1] == '4') || (my_field_w[Line1][Col1 + 1] == '4') || (my_field_w[Line1][Col1 + 2] == '4')
              || (my_field_w[Line1 + 1][Col1] == '4') || (my_field_w[Line1 + 1][Col1 + 1] == '4') || (my_field_w[Line1 + 1][Col1 + 2] == '4')
              || (my_field_w[Line1 + 2][Col1] == '4') || (my_field_w[Line1 + 2][Col1 + 1] == '4') || (my_field_w[Line1 + 2][Col1 + 2] == '4')
              || (my_field_w[Line3][Col3] == '4') || (my_field_w[Line3][Col3 + 1] == '4') || (my_field_w[Line3][Col3 + 2] == '4')
              || (my_field_w[Line3 + 1][Col3] == '4') || (my_field_w[Line3 + 1][Col3 + 1] == '4') || (my_field_w[Line3 + 1][Col3 + 2] == '4')
              || (my_field_w[Line3 + 2][Col3] == '4') || (my_field_w[Line3 + 2][Col3 + 1] == '4') || (my_field_w[Line3 + 2][Col3 + 2] == '4')
              || (my_field_w[Line1][Col1] == '3') || (my_field_w[Line1][Col1 + 1] == '3') || (my_field_w[Line1][Col1 + 2] == '3')
              || (my_field_w[Line1 + 1][Col1] == '3') || (my_field_w[Line1 + 1][Col1 + 1] == '3') || (my_field_w[Line1 + 1][Col1 + 2] == '3')
              || (my_field_w[Line1 + 2][Col1] == '3') || (my_field_w[Line1 + 2][Col1 + 1] == '3') || (my_field_w[Line1 + 2][Col1 + 2] == '3')
              || (my_field_w[Line3][Col3] == '3') || (my_field_w[Line3][Col3 + 1] == '3') || (my_field_w[Line3][Col3 + 2] == '3')
              || (my_field_w[Line3 + 1][Col3] == '3') || (my_field_w[Line3 + 1][Col3 + 1] == '3') || (my_field_w[Line3 + 1][Col3 + 2] == '3')
              || (my_field_w[Line3 + 2][Col3] == '3') || (my_field_w[Line3 + 2][Col3 + 1] == '3') || (my_field_w[Line3 + 2][Col3 + 2] == '3'))
        {
            std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
            std::cin >> place;
            while (!(((Col1 == Col2) && (Col1 == Col3) && (Line1 == Line2 - 1) && (Line2 == Line3 - 1)) ||
                     ((Line1 == Line2) && (Line1 == Line3) && (Col1 == Col2 - 1) && (Col2 == Col3 - 1))))
            {
                std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
                std::cin >> place;
                while (!((place[0] >= 'A') && (place[0] <= 'J') && (place[1] >= '0') && (place[1] <= '9') &&
                         (place[2] >= 'A') && (place[2] <= 'J') && (place[3] >= '0') && (place[3] <= '9') &&
                         (place[4] >= 'A') && (place[4] <= 'J') && (place[5] >= '0') && (place[5] <= '9') &&
                         (place[6] >= 'A') && (place[6] <= 'J') && (place[7] >= '0') && (place[7] <= '9') && (place[8] == '\0')))
                {
                    std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
                    std::cin >> place;
                }
                place_ships3(place, Col1, Line1, Col2, Line2, Col3, Line3);
            }
            place_ships3(place, Col1, Line1, Col2, Line2, Col3, Line3);
        }

        my_field[Line1 + 1][Col1 + 1] = '#';
        my_field[Line2 + 1][Col2 + 1] = '#';
        my_field[Line3 + 1][Col3 + 1] = '#';
        my_field_w[Line1 + 1][Col1 + 1] = '3';
        my_field_w[Line2 + 1][Col2 + 1] = '3';
        my_field_w[Line3 + 1][Col3 + 1] = '3';

        print(my_field, enemy_field, n1, m1);
    }
}
void input_double_ships(char** my_field, char** enemy_field, char** my_field_w, const int &n1, const int &m1)
{
    std::string place;
    int Col1 = 0, Line1 = 0, Col2 = 0, Line2 = 0;

    for(int i = 0; i < 3; ++i)
    {
        std::cout << "\n\n  Enter letters and numbers in increasing order (for example B2B3) to place a DOUBLE ship: ";
        std::cin >> place;

        while (!((place[0] >= 'A') && (place[0] <= 'J') && (place[1] >= '0') && (place[1] <= '9') &&
              (place[2] >= 'A') && (place[2] <= 'J') && (place[3] >= '0') && (place[3] <= '9') && (place[4] == '\0')))
        {
            std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
            std::cin >> place;
        }

        place_ships2(place, Col1, Line1, Col2, Line2);

        while (!(((Col1 == Col2) && (Line1 == Line2 - 1)) || ((Line1 == Line2) && (Col1 == Col2 - 1))))
        {
            std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
            std::cin >> place;
            while (!((place[0] >= 'A') && (place[0] <= 'J') && (place[1] >= '0') && (place[1] <= '9') &&
                     (place[2] >= 'A') && (place[2] <= 'J') && (place[3] >= '0') && (place[3] <= '9') && (place[4] == '\0')))
            {
                std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
                std::cin >> place;
            }
            place_ships2(place, Col1, Line1, Col2, Line2);
        }

        while ((my_field_w[Line1][Col1] == '4') || (my_field_w[Line1][Col1 + 1] == '4') || (my_field_w[Line1][Col1 + 2] == '4')
              || (my_field_w[Line1 + 1][Col1] == '4') || (my_field_w[Line1 + 1][Col1 + 1] == '4') || (my_field_w[Line1 + 1][Col1 + 2] == '4')
              || (my_field_w[Line1 + 2][Col1] == '4') || (my_field_w[Line1 + 2][Col1 + 1] == '4') || (my_field_w[Line1 + 2][Col1 + 2] == '4')
              || (my_field_w[Line2][Col2] == '4') || (my_field_w[Line2][Col2 + 1] == '4') || (my_field_w[Line2][Col2 + 2] == '4')
              || (my_field_w[Line2 + 1][Col2] == '4') || (my_field_w[Line2 + 1][Col2 + 1] == '4') || (my_field_w[Line2 + 1][Col2 + 2] == '4')
              || (my_field_w[Line2 + 2][Col2] == '4') || (my_field_w[Line2 + 2][Col2 + 1] == '4') || (my_field_w[Line2 + 2][Col2 + 2] == '4')
              || (my_field_w[Line1][Col1] == '3') || (my_field_w[Line1][Col1 + 1] == '3') || (my_field_w[Line1][Col1 + 2] == '3')
              || (my_field_w[Line1 + 1][Col1] == '3') || (my_field_w[Line1 + 1][Col1 + 1] == '3') || (my_field_w[Line1 + 1][Col1 + 2] == '3')
              || (my_field_w[Line1 + 2][Col1] == '3') || (my_field_w[Line1 + 2][Col1 + 1] == '3') || (my_field_w[Line1 + 2][Col1 + 2] == '3')
              || (my_field_w[Line2][Col2] == '3') || (my_field_w[Line2][Col2 + 1] == '3') || (my_field_w[Line2][Col2 + 2] == '3')
              || (my_field_w[Line2 + 1][Col2] == '3') || (my_field_w[Line2 + 1][Col2 + 1] == '3') || (my_field_w[Line2 + 1][Col2 + 2] == '3')
              || (my_field_w[Line2 + 2][Col2] == '3') || (my_field_w[Line2 + 2][Col2 + 1] == '3') || (my_field_w[Line2 + 2][Col2 + 2] == '3')
              || (my_field_w[Line1][Col1] == '2') || (my_field_w[Line1][Col1 + 1] == '2') || (my_field_w[Line1][Col1 + 2] == '2')
              || (my_field_w[Line1 + 1][Col1] == '2') || (my_field_w[Line1 + 1][Col1 + 1] == '2') || (my_field_w[Line1 + 1][Col1 + 2] == '2')
              || (my_field_w[Line1 + 2][Col1] == '2') || (my_field_w[Line1 + 2][Col1 + 1] == '2') || (my_field_w[Line1 + 2][Col1 + 2] == '2')
              || (my_field_w[Line2][Col2] == '2') || (my_field_w[Line2][Col2 + 1] == '2') || (my_field_w[Line2][Col2 + 2] == '2')
              || (my_field_w[Line2 + 1][Col2] == '2') || (my_field_w[Line2 + 1][Col2 + 1] == '2') || (my_field_w[Line2 + 1][Col2 + 2] == '2')
              || (my_field_w[Line2 + 2][Col2] == '2') || (my_field_w[Line2 + 2][Col2 + 1] == '2') || (my_field_w[Line2 + 2][Col2 + 2] == '2'))
        {
            std::cout << "\n  These cells are held, please try again: ";
            std::cin >> place;
            while (!(((Col1 == Col2) && (Line1 == Line2 - 1)) || ((Line1 == Line2) && (Col1 == Col2 - 1))))
            {
                std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
                std::cin >> place;
                while (!((place[0] >= 'A') && (place[0] <= 'J') && (place[1] >= '0') && (place[1] <= '9') &&
                         (place[2] >= 'A') && (place[2] <= 'J') && (place[3] >= '0') && (place[3] <= '9') && (place[4] == '\0')))
                {
                    std::cout << "\n  Numbers of the cells were entered incorrectly, please try again: ";
                    std::cin >> place;
                }
                place_ships2(place, Col1, Line1, Col2, Line2);
            }
            place_ships2(place, Col1, Line1, Col2, Line2);
        }

        my_field[Line1 + 1][Col1 + 1] = '#';
        my_field[Line2 + 1][Col2 + 1] = '#';
        my_field_w[Line1 + 1][Col1 + 1] = '2';
        my_field_w[Line2 + 1][Col2 + 1] = '2';

        print(my_field, enemy_field, n1, m1);
    }
}
void input_single_ships(char** my_field, char** enemy_field, char** my_field_w, const int &n1, const int &m1)
{
    std::string place;
    int Col = 0, Line = 0;

    for(int i = 0; i < 4; ++i)
    {
        std::cout << "\n\n  Enter a letter and a number (for example D3) to place a SINGLE ship: ";
        std::cin >> place;

        while (!((place[0] >= 'A') && (place[0] <= 'J') && (place[1] >= '0') && (place[1] <= '9') && (place[2] == '\0')))
        {
            std::cout << "\n  The number of the cell was entered incorrectly, please try again: ";
            std::cin >> place;
        }

        place_ships1(place, Col, Line);

        while((my_field_w[Line][Col] == '4') || (my_field_w[Line][Col + 1] == '4') || (my_field_w[Line][Col + 2] == '4')
             || (my_field_w[Line + 1][Col] == '4') || (my_field_w[Line + 1][Col + 1] == '4') || (my_field_w[Line + 1][Col + 2] == '4')
             || (my_field_w[Line + 2][Col] == '4') || (my_field_w[Line + 2][Col + 1] == '4') || (my_field_w[Line + 2][Col + 2] == '4')
             || (my_field_w[Line][Col] == '3') || (my_field_w[Line][Col + 1] == '3') || (my_field_w[Line][Col + 2] == '3')
             || (my_field_w[Line + 1][Col] == '3') || (my_field_w[Line + 1][Col + 1] == '3') || (my_field_w[Line + 1][Col + 2] == '3')
             || (my_field_w[Line + 2][Col] == '3') || (my_field_w[Line + 2][Col + 1] == '3') || (my_field_w[Line + 2][Col + 2] == '3')
             || (my_field_w[Line][Col] == '2') || (my_field_w[Line][Col + 1] == '2') || (my_field_w[Line][Col + 2] == '2')
             || (my_field_w[Line + 1][Col] == '2') || (my_field_w[Line + 1][Col + 1] == '2') || (my_field_w[Line + 1][Col + 2] == '2')
             || (my_field_w[Line + 2][Col] == '2') || (my_field_w[Line + 2][Col + 1] == '2') || (my_field_w[Line + 2][Col + 2] == '2')
             || (my_field_w[Line][Col] == '1') || (my_field_w[Line][Col + 1] == '1') || (my_field_w[Line][Col + 2] == '1')
             || (my_field_w[Line + 1][Col] == '1') || (my_field_w[Line + 1][Col + 1] == '1') || (my_field_w[Line + 1][Col + 2] == '1')
             || (my_field_w[Line + 2][Col] == '1') || (my_field_w[Line + 2][Col + 1] == '1') || (my_field_w[Line + 2][Col + 2] == '1'))
        {
            std::cout << "\n  This cell is held, please try again: ";
            std::cin >> place;
            while (!((place[0] >= 'A') && (place[0] <= 'J') && (place[1] >= '0') && (place[1] <= '9') && (place[2] == '\0')))
            {
                std::cout << "\n  The number of the cell was entered incorrectly, please try again: ";
                std::cin >> place;
            }
            place_ships1(place, Col, Line);
        }

        my_field[Line + 1][Col + 1] = '#';
        my_field_w[Line + 1][Col + 1] = '1';

        print(my_field, enemy_field, n1, m1);
    }
}

void rand_quad_ships(char** enemy_field, char** enemy_field_w, const int &n1, const int &m1, std::string &mode)
{

    int Col1 = 0, Line1 = 0, Col2 = 0, Line2 = 0, Col3 = 0, Line3 = 0, Col4 = 0, Line4 = 0;
    std::string place = "        ";
    srand ( time(NULL) );
    for(int i = 0; i < 7; i += 2)
        place[i] = static_cast<char>(65 + rand() % 10);
    for(int i = 1; i < 8; i += 2)
        place[i] = static_cast<char>(48 + rand() % 10);

    place_ships4(place, Col1, Line1, Col2, Line2, Col3, Line3, Col4, Line4);

    while (!(((Col1 == Col2) && (Col1 == Col3) && (Col1 == Col4) && (Line1 == Line2 - 1) && (Line2 == Line3 - 1) && (Line3 == Line4 - 1)) ||
             ((Line1 == Line2) && (Line1 == Line3) && (Line1 == Line4) && (Col1 == Col2 - 1) && (Col2 == Col3 - 1) && (Col3 == Col4 - 1))))
    {
        for(int i = 0; i < 7; i += 2)
            place[i] = static_cast<char>(65 + rand() % 10);
        for(int i = 1; i < 8; i += 2)
            place[i] = static_cast<char>(48 + rand() % 10);

        place_ships4(place, Col1, Line1, Col2, Line2, Col3, Line3, Col4, Line4);
    }

    if (mode == "START_D")
    {
        enemy_field[Line1 + 1][Col1 + 1] = '#';
        enemy_field[Line2 + 1][Col2 + 1] = '#';
        enemy_field[Line3 + 1][Col3 + 1] = '#';
        enemy_field[Line4 + 1][Col4 + 1] = '#';
    }
    enemy_field_w[Line1 + 1][Col1 + 1] = '4';
    enemy_field_w[Line2 + 1][Col2 + 1] = '4';
    enemy_field_w[Line3 + 1][Col3 + 1] = '4';
    enemy_field_w[Line4 + 1][Col4 + 1] = '4';
}
void rand_triple_ships(char** enemy_field, char** enemy_field_w, const int &n1, const int &m1, std::string &mode)
{
    int Col1 = 0, Line1 = 0, Col2 = 0, Line2 = 0, Col3 = 0, Line3 = 0;
    std::string place = "      ";
    srand ( time(NULL) );

    for(int k = 0; k < 2; ++k)
    {
        for(int i = 0; i < 5; i += 2)
            place[i] = static_cast<char>(65 + rand() % 10);
        for(int i = 1; i < 6; i += 2)
            place[i] = static_cast<char>(48 + rand() % 10);

        place_ships3(place, Col1, Line1, Col2, Line2, Col3, Line3);

        while (!(((Col1 == Col2) && (Col1 == Col3) && (Line1 == Line2 - 1) && (Line2 == Line3 - 1)) ||
                 ((Line1 == Line2) && (Line1 == Line3) && (Col1 == Col2 - 1) && (Col2 == Col3 - 1))))
        {
            for(int i = 0; i < 5; i += 2)
                place[i] = static_cast<char>(65 + rand() % 10);
            for(int i = 1; i < 6; i += 2)
                place[i] = static_cast<char>(48 + rand() % 10);
            place_ships3(place, Col1, Line1, Col2, Line2, Col3, Line3);
        }

        while ((enemy_field_w[Line1][Col1] == '4') || (enemy_field_w[Line1][Col1 + 1] == '4') || (enemy_field_w[Line1][Col1 + 2] == '4')
               || (enemy_field_w[Line1 + 1][Col1] == '4') || (enemy_field_w[Line1 + 1][Col1 + 1] == '4') || (enemy_field_w[Line1 + 1][Col1 + 2] == '4')
               || (enemy_field_w[Line1 + 2][Col1] == '4') || (enemy_field_w[Line1 + 2][Col1 + 1] == '4') || (enemy_field_w[Line1 + 2][Col1 + 2] == '4')
               || (enemy_field_w[Line3][Col3] == '4') || (enemy_field_w[Line3][Col3 + 1] == '4') || (enemy_field_w[Line3][Col3 + 2] == '4')
               || (enemy_field_w[Line3 + 1][Col3] == '4') || (enemy_field_w[Line3 + 1][Col3 + 1] == '4') || (enemy_field_w[Line3 + 1][Col3 + 2] == '4')
               || (enemy_field_w[Line3 + 2][Col3] == '4') || (enemy_field_w[Line3 + 2][Col3 + 1] == '4') || (enemy_field_w[Line3 + 2][Col3 + 2] == '4')
               || (enemy_field_w[Line1][Col1] == '3') || (enemy_field_w[Line1][Col1 + 1] == '3') || (enemy_field_w[Line1][Col1 + 2] == '3')
               || (enemy_field_w[Line1 + 1][Col1] == '3') || (enemy_field_w[Line1 + 1][Col1 + 1] == '3') || (enemy_field_w[Line1 + 1][Col1 + 2] == '3')
               || (enemy_field_w[Line1 + 2][Col1] == '3') || (enemy_field_w[Line1 + 2][Col1 + 1] == '3') || (enemy_field_w[Line1 + 2][Col1 + 2] == '3')
               || (enemy_field_w[Line3][Col3] == '3') || (enemy_field_w[Line3][Col3 + 1] == '3') || (enemy_field_w[Line3][Col3 + 2] == '3')
               || (enemy_field_w[Line3 + 1][Col3] == '3') || (enemy_field_w[Line3 + 1][Col3 + 1] == '3') || (enemy_field_w[Line3 + 1][Col3 + 2] == '3')
               || (enemy_field_w[Line3 + 2][Col3] == '3') || (enemy_field_w[Line3 + 2][Col3 + 1] == '3') || (enemy_field_w[Line3 + 2][Col3 + 2] == '3')
               || ((Line1 - 1 > 0) && (enemy_field_w[Line1 - 1][Col1 + 1] == '3')) || ((Line1 + 3 < 11) && (enemy_field_w[Line1 + 3][Col1 + 1] == '3'))
               || ((Col1 - 1 > 0) && (enemy_field_w[Line1 + 1][Col1 - 1] == '3')) || ((Col1 + 3 < 11) && (enemy_field_w[Line1 + 1][Col1 + 3] == '3'))
               || ((Line2 - 1 > 0) && (enemy_field_w[Line2 - 1][Col2 + 1] == '3')) || ((Line2 + 3 < 11) && (enemy_field_w[Line2 + 3][Col2 + 1] == '3'))
               || ((Col2 - 1 > 0) && (enemy_field_w[Line2 + 1][Col2 - 1] == '3')) || ((Col2 + 3 < 11) && (enemy_field_w[Line2 + 1][Col2 + 3] == '3'))
               || ((Line3 - 1 > 0) && (enemy_field_w[Line3 - 1][Col3 + 1] == '3')) || ((Line3 + 3 < 11) && (enemy_field_w[Line3 + 3][Col3 + 1] == '3'))
               || ((Col3 - 1 > 0) && (enemy_field_w[Line3 + 1][Col3 - 1] == '3')) || ((Col3 + 3 < 11) && (enemy_field_w[Line3 + 1][Col3 + 3] == '3')))
        {
            for(int i = 0; i < 5; i += 2)
                place[i] = static_cast<char>(65 + rand() % 10);
            for(int i = 1; i < 6; i += 2)
                place[i] = static_cast<char>(48 + rand() % 10);

            place_ships3(place, Col1, Line1, Col2, Line2, Col3, Line3);

            while (!(((Col1 == Col2) && (Col1 == Col3) && (Line1 == Line2 - 1) && (Line2 == Line3 - 1)) ||
                     ((Line1 == Line2) && (Line1 == Line3) && (Col1 == Col2 - 1) && (Col2 == Col3 - 1))))
            {
                for(int i = 0; i < 5; i += 2)
                    place[i] = static_cast<char>(65 + rand() % 10);
                for(int i = 1; i < 6; i += 2)
                    place[i] = static_cast<char>(48 + rand() % 10);

                place_ships3(place, Col1, Line1, Col2, Line2, Col3, Line3);
            }
        }
        if (mode == "START_D")
        {
            enemy_field[Line1 + 1][Col1 + 1] = '#';
            enemy_field[Line2 + 1][Col2 + 1] = '#';
            enemy_field[Line3 + 1][Col3 + 1] = '#';
        }
        enemy_field_w[Line1 + 1][Col1 + 1] = '3';
        enemy_field_w[Line2 + 1][Col2 + 1] = '3';
        enemy_field_w[Line3 + 1][Col3 + 1] = '3';
    }
}
void rand_double_ships(char** enemy_field, char** enemy_field_w, const int &n1, const int &m1, std::string &mode)
{
    int Col1 = 0, Line1 = 0, Col2 = 0, Line2 = 0;
    std::string place = "    ";
    srand ( time(NULL) );

    for(int k = 0; k < 3; ++k)
    {
        for(int i = 0; i < 3; i += 2)
            place[i] = static_cast<char>(65 + rand() % 10);
        for(int i = 1; i < 4; i += 2)
            place[i] = static_cast<char>(48 + rand() % 10);

        place_ships2(place, Col1, Line1, Col2, Line2);

        while (!(((Col1 == Col2) && (Line1 == Line2 - 1)) || ((Line1 == Line2) && (Col1 == Col2 - 1))))
        {
            for(int i = 0; i < 3; i += 2)
                place[i] = static_cast<char>(65 + rand() % 10);
            for(int i = 1; i < 4; i += 2)
                place[i] = static_cast<char>(48 + rand() % 10);
            place_ships2(place, Col1, Line1, Col2, Line2);
        }

        while ((enemy_field_w[Line1][Col1] == '4') || (enemy_field_w[Line1][Col1 + 1] == '4') || (enemy_field_w[Line1][Col1 + 2] == '4')
               || (enemy_field_w[Line1 + 1][Col1] == '4') || (enemy_field_w[Line1 + 1][Col1 + 1] == '4') || (enemy_field_w[Line1 + 1][Col1 + 2] == '4')
               || (enemy_field_w[Line1 + 2][Col1] == '4') || (enemy_field_w[Line1 + 2][Col1 + 1] == '4') || (enemy_field_w[Line1 + 2][Col1 + 2] == '4')
               || (enemy_field_w[Line2][Col2] == '4') || (enemy_field_w[Line2][Col2 + 1] == '4') || (enemy_field_w[Line2][Col2 + 2] == '4')
               || (enemy_field_w[Line2 + 1][Col2] == '4') || (enemy_field_w[Line2 + 1][Col2 + 1] == '4') || (enemy_field_w[Line2 + 1][Col2 + 2] == '4')
               || (enemy_field_w[Line2 + 2][Col2] == '4') || (enemy_field_w[Line2 + 2][Col2 + 1] == '4') || (enemy_field_w[Line2 + 2][Col2 + 2] == '4')
               || (enemy_field_w[Line1][Col1] == '3') || (enemy_field_w[Line1][Col1 + 1] == '3') || (enemy_field_w[Line1][Col1 + 2] == '3')
               || (enemy_field_w[Line1 + 1][Col1] == '3') || (enemy_field_w[Line1 + 1][Col1 + 1] == '3') || (enemy_field_w[Line1 + 1][Col1 + 2] == '3')
               || (enemy_field_w[Line1 + 2][Col1] == '3') || (enemy_field_w[Line1 + 2][Col1 + 1] == '3') || (enemy_field_w[Line1 + 2][Col1 + 2] == '3')
               || (enemy_field_w[Line2][Col2] == '3') || (enemy_field_w[Line2][Col2 + 1] == '3') || (enemy_field_w[Line2][Col2 + 2] == '3')
               || (enemy_field_w[Line2 + 1][Col2] == '3') || (enemy_field_w[Line2 + 1][Col2 + 1] == '3') || (enemy_field_w[Line2 + 1][Col2 + 2] == '3')
               || (enemy_field_w[Line2 + 2][Col2] == '3') || (enemy_field_w[Line2 + 2][Col2 + 1] == '3') || (enemy_field_w[Line2 + 2][Col2 + 2] == '3')
               || (enemy_field_w[Line1][Col1] == '2') || (enemy_field_w[Line1][Col1 + 1] == '2') || (enemy_field_w[Line1][Col1 + 2] == '2')
               || (enemy_field_w[Line1 + 1][Col1] == '2') || (enemy_field_w[Line1 + 1][Col1 + 1] == '2') || (enemy_field_w[Line1 + 1][Col1 + 2] == '2')
               || (enemy_field_w[Line1 + 2][Col1] == '2') || (enemy_field_w[Line1 + 2][Col1 + 1] == '2') || (enemy_field_w[Line1 + 2][Col1 + 2] == '2')
               || (enemy_field_w[Line2][Col2] == '2') || (enemy_field_w[Line2][Col2 + 1] == '2') || (enemy_field_w[Line2][Col2 + 2] == '2')
               || (enemy_field_w[Line2 + 1][Col2] == '2') || (enemy_field_w[Line2 + 1][Col2 + 1] == '2') || (enemy_field_w[Line2 + 1][Col2 + 2] == '2')
               || (enemy_field_w[Line2 + 2][Col2] == '2') || (enemy_field_w[Line2 + 2][Col2 + 1] == '2') || (enemy_field_w[Line2 + 2][Col2 + 2] == '2'))
        {
            for(int i = 0; i < 3; i += 2)
                place[i] = static_cast<char>(65 + rand() % 10);
            for(int i = 1; i < 4; i += 2)
                place[i] = static_cast<char>(48 + rand() % 10);

            place_ships2(place, Col1, Line1, Col2, Line2);

            while (!(((Col1 == Col2) && (Line1 == Line2 - 1)) || ((Line1 == Line2) && (Col1 == Col2 - 1))))
            {
                for(int i = 0; i < 3; i += 2)
                    place[i] = static_cast<char>(65 + rand() % 10);
                for(int i = 1; i < 4; i += 2)
                    place[i] = static_cast<char>(48 + rand() % 10);

                place_ships2(place, Col1, Line1, Col2, Line2);
            }
        }
        if (mode == "START_D")
        {
            enemy_field[Line1 + 1][Col1 + 1] = '#';
            enemy_field[Line2 + 1][Col2 + 1] = '#';
        }
        enemy_field_w[Line1 + 1][Col1 + 1] = '2';
        enemy_field_w[Line2 + 1][Col2 + 1] = '2';
    }
}
void rand_single_ships(char** my_field, char** enemy_field, char** enemy_field_w, const int &n1, const int &m1, std::string &mode)
{
    int Col1 = 0, Line1 = 0;
    std::string place = "  ";
    srand ( time(NULL) );

    for(int k = 0; k < 4; ++k)
    {
        place[0] = static_cast<char>(65 + rand() % 10);
        place[1] = static_cast<char>(48 + rand() % 10);

        place_ships1(place, Col1, Line1);

        while ((enemy_field_w[Line1][Col1] == '4') || (enemy_field_w[Line1][Col1 + 1] == '4') || (enemy_field_w[Line1][Col1 + 2] == '4')
               || (enemy_field_w[Line1 + 1][Col1] == '4') || (enemy_field_w[Line1 + 1][Col1 + 1] == '4') || (enemy_field_w[Line1 + 1][Col1 + 2] == '4')
               || (enemy_field_w[Line1 + 2][Col1] == '4') || (enemy_field_w[Line1 + 2][Col1 + 1] == '4') || (enemy_field_w[Line1 + 2][Col1 + 2] == '4')
               || (enemy_field_w[Line1][Col1] == '3') || (enemy_field_w[Line1][Col1 + 1] == '3') || (enemy_field_w[Line1][Col1 + 2] == '3')
               || (enemy_field_w[Line1 + 1][Col1] == '3') || (enemy_field_w[Line1 + 1][Col1 + 1] == '3') || (enemy_field_w[Line1 + 1][Col1 + 2] == '3')
               || (enemy_field_w[Line1 + 2][Col1] == '3') || (enemy_field_w[Line1 + 2][Col1 + 1] == '3') || (enemy_field_w[Line1 + 2][Col1 + 2] == '3')
               || (enemy_field_w[Line1][Col1] == '2') || (enemy_field_w[Line1][Col1 + 1] == '2') || (enemy_field_w[Line1][Col1 + 2] == '2')
               || (enemy_field_w[Line1 + 1][Col1] == '2') || (enemy_field_w[Line1 + 1][Col1 + 1] == '2') || (enemy_field_w[Line1 + 1][Col1 + 2] == '2')
               || (enemy_field_w[Line1 + 2][Col1] == '2') || (enemy_field_w[Line1 + 2][Col1 + 1] == '2') || (enemy_field_w[Line1 + 2][Col1 + 2] == '2')
               || (enemy_field_w[Line1][Col1] == '1') || (enemy_field_w[Line1][Col1 + 1] == '1') || (enemy_field_w[Line1][Col1 + 2] == '1')
               || (enemy_field_w[Line1 + 1][Col1] == '1') || (enemy_field_w[Line1 + 1][Col1 + 1] == '1') || (enemy_field_w[Line1 + 1][Col1 + 2] == '1')
               || (enemy_field_w[Line1 + 2][Col1] == '1') || (enemy_field_w[Line1 + 2][Col1 + 1] == '1') || (enemy_field_w[Line1 + 2][Col1 + 2] == '1'))
        {
            place[0] = static_cast<char>(65 + rand() % 10);
            place[1] = static_cast<char>(48 + rand() % 10);

            place_ships1(place, Col1, Line1);
        }
        if (mode == "START_D")
            enemy_field[Line1 + 1][Col1 + 1] = '#';
        enemy_field_w[Line1 + 1][Col1 + 1] = '1';
    }
    print(my_field, enemy_field, n1, m1);
}

void motion(char** my_field, char** enemy_field, char** my_field_w, char** enemy_field_w, const int &n1, const int &m1, unsigned short int &att, std::string &diff)
{
    int count = 0,
        Col = 0,
        Line = 0,
        Col1 = 0,
        Line1 = 0,
        Col2 = 0,
        Line2 = 0,
        Col3 = 0,
        Line3 = 0,
        min = 0,
        max = 0;
    unsigned short int part = 1;
    bool hit = false;
    std::string aim;

    while(count >= 0)
    {
        shift:
        if (count % 2 == 0)
        {
            int schet = 0;

            for (int i = 0; i < n1 + 2; ++i)
                for (int j = 0; j < m1 + 2; ++j)
                    if (enemy_field[i][j] == 'x')
                        ++schet;
            if (schet == 20)
            {
                std::cout << "\n\n  You have won!!! :)\n\n\n";
                system("pause");
                exit(0);
            }

            std::cout << "\n\n  Your motion: ";
            std::cin >> aim;
            while (!((aim[0] >= 'A') && (aim[0] <= 'J') && (aim[1] >= '0') && (aim[1] <= '9') && (aim[2] == '\0')))
            {
                std::cout << "\n  Your motion: ";
                std::cin >> aim;
            }
            place_ships1(aim, Col, Line);

            while ((enemy_field_w[Line + 1][Col + 1] == '1') || (enemy_field_w[Line + 1][Col + 1] == '2')
                  || (enemy_field_w[Line + 1][Col + 1] == '3') || (enemy_field_w[Line + 1][Col + 1] == '4'))
            {
                if (enemy_field_w[Line + 1][Col + 1] == '1')
                {
                    enemy_field[Line + 1][Col + 1] = 'x';
                    enemy_field_w[Line + 1][Col + 1] = 'x';

                    for (int i = Line; i <= Line + 2;)
                    {
                        for (int j = Col; j <= Col + 2; ++j)
                        {
                            if (enemy_field[i][j] != 'x')
                            {
                                enemy_field[i][j] = '.';
                                enemy_field_w[i][j] = '.';
                            }
                        }
                        ++i;
                    }
                    print(my_field, enemy_field, n1, m1);
                    std::cout << "\n\n  Killed!";

                    schet = 0;
                    for (int i = 0; i < n1 + 2; ++i)
                        for (int j = 0; j < m1 + 2; ++j)
                            if (enemy_field[i][j] == 'x')
                                ++schet;
                    if (schet == 20)
                    {
                        std::cout << "\n\n  You have won!!! :)\n\n\n";
                        system("pause");
                        exit(0);
                    }
                    std::cout << "\n  Your motion: ";
                    std::cin >> aim;

                    while (!((aim[0] >= 'A') && (aim[0] <= 'J') && (aim[1] >= '0') && (aim[1] <= '9') && (aim[2] == '\0')))
                    {
                        std::cout << "\n  Your motion: ";
                        std::cin >> aim;
                        place_ships1(aim, Col, Line);
                    }
                    place_ships1(aim, Col, Line);
                }
                if (enemy_field_w[Line + 1][Col + 1] == '2')
                {
                    if ((enemy_field_w[Line][Col] == '2') || (enemy_field_w[Line][Col + 1] == '2') || (enemy_field_w[Line][Col + 2] == '2')
                        || (enemy_field_w[Line + 1][Col] == '2') || (enemy_field_w[Line + 1][Col + 2] == '2')
                        || (enemy_field_w[Line + 2][Col] == '2') || (enemy_field_w[Line + 2][Col + 1] == '2') || (enemy_field_w[Line + 2][Col + 2] == '2'))
                    {
                        enemy_field[Line + 1][Col + 1] = 'x';
                        enemy_field_w[Line + 1][Col + 1] = 'x';
                        print(my_field, enemy_field, n1, m1);
                        std::cout << "\n\n  Hit!";
                    }
                    else
                    {
                        for (int i = Line; i <= Line + 2;)
                        {
                            for (int j = Col; j <= Col + 2; ++j)
                            {
                                if (enemy_field[i][j] != 'x')
                                {
                                    enemy_field[i][j] = '.';
                                    enemy_field_w[i][j] = '.';
                                }
                                else
                                {
                                    for (int ii = i - 1; ii <= i + 1;)
                                    {
                                        for (int jj = j - 1; jj <= j + 1; ++jj)
                                        {
                                            enemy_field[ii][jj] = '.';
                                            enemy_field_w[ii][jj] = '.';
                                        }
                                        ++ii;
                                    }
                                    enemy_field[i][j] = 'x';
                                    enemy_field_w[i][j] = 'x';
                                }
                            }
                            ++i;
                        }

                        enemy_field[Line + 1][Col + 1] = 'x';
                        enemy_field_w[Line + 1][Col + 1] = 'x';

                        print(my_field, enemy_field, n1, m1);
                        std::cout << "\n\n  Killed!";
                    }
                    schet = 0;
                    for (int i = 0; i < n1 + 2; ++i)
                        for (int j = 0; j < m1 + 2; ++j)
                            if (enemy_field[i][j] == 'x')
                                ++schet;
                    if (schet == 20)
                    {
                        std::cout << "\n\n  You have won!!! :)\n\n\n";
                        system("pause");
                        exit(0);
                    }
                    std::cout << "\n  Your motion: ";
                    std::cin >> aim;

                    while (!((aim[0] >= 'A') && (aim[0] <= 'J') && (aim[1] >= '0') && (aim[1] <= '9') && (aim[2] == '\0')))
                    {
                        std::cout << "\n  Your motion: ";
                        std::cin >> aim;
                        place_ships1(aim, Col, Line);
                    }
                    place_ships1(aim, Col, Line);
                }

                if (enemy_field_w[Line + 1][Col + 1] == '3')
                {
                    if ((enemy_field_w[Line][Col] == '3') || (enemy_field_w[Line][Col + 1] == '3') || (enemy_field_w[Line][Col + 2] == '3')
                        || (enemy_field_w[Line + 1][Col] == '3') || (enemy_field_w[Line + 1][Col + 2] == '3')
                        || (enemy_field_w[Line + 2][Col] == '3') || (enemy_field_w[Line + 2][Col + 1] == '3') || (enemy_field_w[Line + 2][Col + 2] == '3')
                        || ((Line - 1 > 0) && (enemy_field_w[Line - 1][Col + 1] == '3')) || ((Line + 3 < 11) && (enemy_field_w[Line + 3][Col + 1] == '3'))
                        || ((Col - 1 > 0) && (enemy_field_w[Line + 1][Col - 1] == '3')) || ((Col + 3 < 11) && (enemy_field_w[Line + 1][Col + 3] == '3')))
                    {
                        enemy_field[Line + 1][Col + 1] = 'x';
                        enemy_field_w[Line + 1][Col + 1] = 'x';
                        print(my_field, enemy_field, n1, m1);
                        std::cout << "\n\n  Hit!";
                    }
                    else
                    {
                        for (int i = Line; i <= Line + 2;)
                        {
                            for (int j = Col; j <= Col + 2; ++j)
                            {
                                if (enemy_field[i][j] != 'x')
                                {
                                    enemy_field[i][j] = '.';
                                    enemy_field_w[i][j] = '.';
                                }
                                else
                                {
                                    for (int ii = i - 1; ii <= i + 1;)
                                    {
                                        for (int jj = j - 1; jj <= j + 1; ++jj)
                                        {
                                            if (enemy_field[ii][jj] != 'x')
                                            {
                                                enemy_field[ii][jj] = '.';
                                                enemy_field_w[ii][jj] = '.';
                                            }
                                            else
                                            {
                                                for (int iii = ii - 1; iii <= ii + 1;)
                                                {
                                                    for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                    {
                                                        if (enemy_field[iii][jjj] != 'x')
                                                        {
                                                            enemy_field[iii][jjj] = '.';
                                                            enemy_field_w[iii][jjj] = '.';
                                                        }
                                                        else
                                                        {
                                                            enemy_field[iii][jjj] = 'x';
                                                            enemy_field_w[iii][jjj] = 'x';
                                                        }
                                                    }
                                                    ++iii;
                                                }
                                                enemy_field[ii][jj] = 'x';
                                                enemy_field_w[ii][jj] = 'x';
                                            }
                                        }
                                        ++ii;
                                    }
                                    enemy_field[i][j] = 'x';
                                    enemy_field_w[i][j] = 'x';
                                }
                            }
                            ++i;
                        }
                        enemy_field[Line + 1][Col + 1] = 'x';
                        enemy_field_w[Line + 1][Col + 1] = 'x';

                        print(my_field, enemy_field, n1, m1);
                        std::cout << "\n\n  Killed!";
                    }
                    schet = 0;
                    for (int i = 0; i < n1 + 2; ++i)
                        for (int j = 0; j < m1 + 2; ++j)
                            if (enemy_field[i][j] == 'x')
                                ++schet;
                    if (schet == 20)
                    {
                        std::cout << "\n\n  You have won!!! :)\n\n\n";
                        system("pause");
                        exit(0);
                    }
                    std::cout << "\n  Your motion: ";
                    std::cin >> aim;

                    while (!((aim[0] >= 'A') && (aim[0] <= 'J') && (aim[1] >= '0') && (aim[1] <= '9') && (aim[2] == '\0')))
                    {
                        std::cout << "\n  Your motion: ";
                        std::cin >> aim;
                        place_ships1(aim, Col, Line);
                    }
                    place_ships1(aim, Col, Line);
                }

                if (enemy_field_w[Line + 1][Col + 1] == '4')
                {
                    if ((enemy_field_w[Line][Col] == '4') || (enemy_field_w[Line][Col + 1] == '4') || (enemy_field_w[Line][Col + 2] == '4')
                        || (enemy_field_w[Line + 1][Col] == '4') || (enemy_field_w[Line + 1][Col + 2] == '4')
                        || (enemy_field_w[Line + 2][Col] == '4') || (enemy_field_w[Line + 2][Col + 1] == '4') || (enemy_field_w[Line + 2][Col + 2] == '4')
                        || ((Line - 1 > 0) && (enemy_field_w[Line - 1][Col + 1] == '4')) || ((Line - 2 > 0) && (enemy_field_w[Line - 2][Col + 1] == '4'))
                        || ((Line - 3 > 0) && (enemy_field_w[Line - 3][Col + 1] == '4')) || ((Line + 3 < 11 ) && (enemy_field_w[Line + 3][Col + 1] == '4'))
                        || ((Line + 4 < 11 ) && (enemy_field_w[Line + 4][Col + 1] == '4')) || ((Col - 2 > 0) && (enemy_field_w[Line + 1][Col - 2] == '4'))
                        || ((Col - 1 > 0) && (enemy_field_w[Line + 1][Col - 1] == '4')) || ((Col + 4 < 11) && (enemy_field_w[Line + 1][Col + 4] == '4'))
                        || ((Col + 3 < 11) && (enemy_field_w[Line + 1][Col + 3] == '4')))
                    {
                        enemy_field[Line + 1][Col + 1] = 'x';
                        enemy_field_w[Line + 1][Col + 1] = 'x';
                        print(my_field, enemy_field, n1, m1);
                        std::cout << "\n\n  Hit!";
                    }
                    else
                    {
                        for (int i = Line; i <= Line + 2;)
                        {
                            for (int j = Col; j <= Col + 2; ++j)
                            {
                                if (enemy_field[i][j] != 'x')
                                {
                                    enemy_field[i][j] = '.';
                                    enemy_field_w[i][j] = '.';
                                }
                                else
                                {
                                    for (int ii = i - 1; ii <= i + 1;)
                                    {
                                        for (int jj = j - 1; jj <= j + 1; ++jj)
                                        {
                                            if (enemy_field[ii][jj] != 'x')
                                            {
                                                enemy_field[ii][jj] = '.';
                                                enemy_field_w[ii][jj] = '.';
                                            }
                                            else
                                            {
                                                for (int iii = ii - 1; iii <= ii + 1;)
                                                {
                                                    for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                    {
                                                        if (enemy_field[iii][jjj] != 'x')
                                                        {
                                                            enemy_field[iii][jjj] = '.';
                                                            enemy_field_w[iii][jjj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iiii = iii - 1; iiii <= iii + 1;)
                                                            {
                                                                for (int jjjj = jjj - 1; jjjj <= jjj + 1; ++jjjj)
                                                                {
                                                                    if (enemy_field[iiii][jjjj] != 'x')
                                                                    {
                                                                        enemy_field[iiii][jjjj] = '.';
                                                                        enemy_field_w[iiii][jjjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        enemy_field[iiii][jjjj] = 'x';
                                                                        enemy_field_w[iiii][jjjj] = 'x';
                                                                    }
                                                                }
                                                                ++iiii;
                                                            }
                                                            enemy_field[iii][jjj] = 'x';
                                                            enemy_field_w[iii][jjj] = 'x';
                                                        }
                                                    }
                                                    ++iii;
                                                }
                                                enemy_field[ii][jj] = 'x';
                                                enemy_field_w[ii][jj] = 'x';
                                            }
                                        }
                                        ++ii;
                                    }
                                    enemy_field[i][j] = 'x';
                                    enemy_field_w[i][j] = 'x';
                                }
                            }
                            ++i;
                        }
                        enemy_field[Line + 1][Col + 1] = 'x';
                        enemy_field_w[Line + 1][Col + 1] = 'x';

                        print(my_field, enemy_field, n1, m1);
                        std::cout << "\n\n  Killed!";
                    }
                    schet = 0;
                    for (int i = 0; i < n1 + 2; ++i)
                        for (int j = 0; j < m1 + 2; ++j)
                            if (enemy_field[i][j] == 'x')
                                ++schet;
                    if (schet == 20)
                    {
                        std::cout << "\n\n  You have won!!! :)\n\n\n";
                        system("pause");
                        exit(0);
                    }
                    std::cout << "\n  Your motion: ";
                    std::cin >> aim;

                    while (!((aim[0] >= 'A') && (aim[0] <= 'J') && (aim[1] >= '0') && (aim[1] <= '9') && (aim[2] == '\0')))
                    {
                        std::cout << "\n  Your motion: ";
                        std::cin >> aim;
                        place_ships1(aim, Col, Line);
                    }
                    place_ships1(aim, Col, Line);
                }
            }
            if ((enemy_field_w[Line + 1][Col + 1] == ' ') || (enemy_field_w[Line + 1][Col + 1] == '.'))
            {
                enemy_field[Line + 1][Col + 1] = '.';
                enemy_field_w[Line + 1][Col + 1] = '.';

                print(my_field, enemy_field, n1, m1);
                std::cout << "\n\n  Miss!";
            }
            if (enemy_field_w[Line + 1][Col + 1] == 'x')
            {
                std::cout << "\n\n  Miss!";
            }

            schet = 0;
            for (int i = 0; i < n1 + 2; ++i)
                for (int j = 0; j < m1 + 2; ++j)
                    if (enemy_field[i][j] == 'x')
                        ++schet;
            if (schet == 20)
            {
                std::cout << "\n\n  You have won!!! :)\n\n\n";
                system("pause");
                exit(0);
            }

            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
    ++count;
        if (count % 2 == 1)
        {
            iftrue:
            if (hit == true)
            {
                if ((Col1 == 0) && (Line1 == 0))
                {
                    Col1 = Col;
                    Line1 = Line;
                }
                if (my_field_w[Line1 + 1][Col1 + 1] == '2')
                {
                    if ((my_field[Line1 + 1][Col1] == ' ') || (my_field[Line1 + 1][Col1] == '#'))
                    {
                        if (my_field_w[Line1 + 1][Col1] == '2')
                        {
                            for (int i = Line1; i <= Line1 + 2;)
                            {
                                for (int j = Col1 - 1; j <= Col1 + 1; ++j)
                                {
                                    if (my_field[i][j] != 'x')
                                    {
                                        my_field[i][j] = '.';
                                        my_field_w[i][j] = '.';
                                    }
                                    else
                                    {
                                        for (int ii = i - 1; ii <= i + 1;)
                                        {
                                            for (int jj = j - 1; jj <= j + 1; ++jj)
                                            {
                                                my_field[ii][jj] = '.';
                                                my_field_w[ii][jj] = '.';
                                            }
                                            ++ii;
                                        }
                                        my_field[i][j] = 'x';
                                    }
                                }
                                ++i;
                            }

                            my_field[Line1 + 1][Col1] = 'x';
                            --Col1;
                            anti_switch(aim, Col1, Line1);
                            print(my_field, enemy_field, n1, m1);
                            std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                            std::this_thread::sleep_for(std::chrono::seconds(4));
                            hit = false;
                            goto iftrue;
                        }
                        else
                        {
                            my_field[Line1 + 1][Col1] = '.';
                            my_field_w[Line1 + 1][Col1] = '.';
                            print(my_field, enemy_field, n1, m1);
                            --Col1;
                            anti_switch(aim, Col1, Line1);
                            ++Col1;
                            std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                            ++count;
                            goto shift;
                        }
                    }
                    if ((my_field[Line1 + 1][Col1 + 2] == ' ') || (my_field[Line1 + 1][Col1 + 2] == '#'))
                    {
                        if (my_field_w[Line1 + 1][Col1 + 2] == '2')
                        {
                            for (int i = Line1; i <= Line1 + 2;)
                            {
                                for (int j = Col1 + 1; j <= Col1 + 3; ++j)
                                {
                                    if (my_field[i][j] != 'x')
                                    {
                                        my_field[i][j] = '.';
                                        my_field_w[i][j] = '.';
                                    }
                                    else
                                    {
                                        for (int ii = i - 1; ii <= i + 1;)
                                        {
                                            for (int jj = j - 1; jj <= j + 1; ++jj)
                                            {
                                                my_field[ii][jj] = '.';
                                                my_field_w[ii][jj] = '.';
                                            }
                                            ++ii;
                                        }
                                        my_field[i][j] = 'x';
                                    }
                                }
                                ++i;
                            }

                            my_field[Line1 + 1][Col1 + 2] = 'x';

                            print(my_field, enemy_field, n1, m1);
                            ++Col1;
                            anti_switch(aim, Col1, Line1);
                            std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                            std::this_thread::sleep_for(std::chrono::seconds(4));
                            hit = false;
                            goto iftrue;
                        }
                        else
                        {
                            my_field[Line1 + 1][Col1 + 2] = '.';
                            my_field_w[Line1 + 1][Col1 + 2] = '.';
                            print(my_field, enemy_field, n1, m1);
                            ++Col1;
                            anti_switch(aim, Col1, Line1);
                            --Col1;
                            std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                            ++count;
                            goto shift;
                        }
                    }
                    if ((my_field[Line1][Col1 + 1] == ' ') || (my_field[Line1][Col1 + 1] == '#'))
                    {
                        if (my_field_w[Line1][Col1 + 1] == '2')
                        {
                            for (int i = Line1 - 1; i <= Line1 + 1;)
                            {
                                for (int j = Col1; j <= Col1 + 2; ++j)
                                {
                                    if (my_field[i][j] != 'x')
                                    {
                                        my_field[i][j] = '.';
                                        my_field_w[i][j] = '.';
                                    }
                                    else
                                    {
                                        for (int ii = i - 1; ii <= i + 1;)
                                        {
                                            for (int jj = j - 1; jj <= j + 1; ++jj)
                                            {
                                                my_field[ii][jj] = '.';
                                                my_field_w[ii][jj] = '.';
                                            }
                                            ++ii;
                                        }
                                        my_field[i][j] = 'x';
                                    }
                                }
                                ++i;
                            }

                            my_field[Line1][Col1 + 1] = 'x';
                            print(my_field, enemy_field, n1, m1);
                            --Line1;
                            anti_switch(aim, Col1, Line1);
                            std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                            std::this_thread::sleep_for(std::chrono::seconds(4));
                            hit = false;
                            goto iftrue;
                        }
                        else
                        {
                            my_field[Line1][Col1 + 1] = '.';
                            my_field_w[Line1][Col1 + 1] = '.';
                            print(my_field, enemy_field, n1, m1);
                            --Line1;
                            anti_switch(aim, Col1, Line1);
                            ++Line1;
                            std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                            ++count;
                            goto shift;
                        }
                    }
                    if ((my_field[Line1 + 2][Col1 + 1] == ' ') || (my_field[Line1 + 2][Col1 + 1] == '#'))
                    {
                        if (my_field_w[Line1 + 2][Col1 + 1] == '2')
                        {
                            for (int i = Line1 + 1; i <= Line1 + 3;)
                            {
                                for (int j = Col1; j <= Col1 + 2; ++j)
                                {
                                    if (my_field[i][j] != 'x')
                                    {
                                        my_field[i][j] = '.';
                                        my_field_w[i][j] = '.';
                                    }
                                    else
                                    {
                                        for (int ii = i - 1; ii <= i + 1;)
                                        {
                                            for (int jj = j - 1; jj <= j + 1; ++jj)
                                            {
                                                my_field[ii][jj] = '.';
                                                my_field_w[ii][jj] = '.';
                                            }
                                            ++ii;
                                        }
                                        my_field[i][j] = 'x';
                                    }
                                }
                                ++i;
                            }

                            my_field[Line1 + 2][Col1 + 1] = 'x';

                            print(my_field, enemy_field, n1, m1);
                            ++Line1;
                            anti_switch(aim, Col1, Line1);
                            std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                            std::this_thread::sleep_for(std::chrono::seconds(4));
                            hit = false;
                            goto iftrue;
                        }
                        else
                        {
                            my_field[Line1 + 2][Col1 + 1] = '.';
                            my_field_w[Line1 + 2][Col1 + 1] = '.';
                            print(my_field, enemy_field, n1, m1);
                            ++Line1;
                            anti_switch(aim, Col1, Line1);
                            --Line1;
                            std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                            ++count;
                            goto shift;
                        }
                    }
                }

                if (my_field_w[Line1 + 1][Col1 + 1] == '3')
                {
                    if (part == 1)
                    {
                        if ((my_field[Line1 + 1][Col1] == ' ') || (my_field[Line1 + 1][Col1] == '#'))
                        {
                            if (my_field_w[Line1 + 1][Col1] == '3')
                            {
                                part = 2;
                                Line2 = Line1;
                                Col2 = Col1 - 1;
                                my_field[Line1 + 1][Col1] = 'x';
                                print(my_field, enemy_field, n1, m1);
                                --Col1;
                                anti_switch(aim, Col1, Line1);
                                ++Col1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                std::this_thread::sleep_for(std::chrono::seconds(3));
                            }
                            else
                            {
                                my_field[Line1 + 1][Col1] = '.';
                                my_field_w[Line1 + 1][Col1] = '.';
                                print(my_field, enemy_field, n1, m1);
                                --Col1;
                                anti_switch(aim, Col1, Line1);
                                ++Col1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                ++count;
                                goto shift;
                            }
                        }
                        if (((my_field[Line1 + 1][Col1 + 2] == ' ') || (my_field[Line1 + 1][Col1 + 2] == '#')) && (part == 1))
                        {
                            if (my_field_w[Line1 + 1][Col1 + 2] == '3')
                            {
                                part = 2;
                                Line2 = Line1;
                                Col2 = Col1 + 1;
                                my_field[Line1 + 1][Col1 + 2] = 'x';
                                print(my_field, enemy_field, n1, m1);
                                ++Col1;
                                anti_switch(aim, Col1, Line1);
                                --Col1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                std::this_thread::sleep_for(std::chrono::seconds(4));
                            }
                            else
                            {
                                my_field[Line1 + 1][Col1 + 2] = '.';
                                my_field_w[Line1 + 1][Col1 + 2] = '.';
                                print(my_field, enemy_field, n1, m1);
                                ++Col1;
                                anti_switch(aim, Col1, Line1);
                                --Col1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                ++count;
                                goto shift;
                            }
                        }
                        if (((my_field[Line1][Col1 + 1] == ' ') || (my_field[Line1][Col1 + 1] == '#')) && (part == 1))
                        {
                            if (my_field_w[Line1][Col1 + 1] == '3')
                            {
                                part = 2;
                                Line2 = Line1 - 1;
                                Col2 = Col1;
                                my_field[Line1][Col1 + 1] = 'x';
                                print(my_field, enemy_field, n1, m1);
                                --Line1;
                                anti_switch(aim, Col1, Line1);
                                ++Line1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                std::this_thread::sleep_for(std::chrono::seconds(4));
                            }
                            else
                            {
                                my_field[Line1][Col1 + 1] = '.';
                                my_field_w[Line1][Col1 + 1] = '.';
                                print(my_field, enemy_field, n1, m1);
                                --Line1;
                                anti_switch(aim, Col1, Line1);
                                ++Line1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                ++count;
                                goto shift;
                            }
                        }
                        if (((my_field[Line1 + 2][Col1 + 1] == ' ') || (my_field[Line1 + 2][Col1 + 1] == '#')) && (part == 1))
                        {
                            if (my_field_w[Line1 + 2][Col1 + 1] == '3')
                            {
                                part = 2;
                                Line2 = Line1 + 1;
                                Col2 = Col1;
                                my_field[Line1 + 2][Col1 + 1] = 'x';
                                print(my_field, enemy_field, n1, m1);
                                ++Line1;
                                anti_switch(aim, Col1, Line1);
                                --Line1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                std::this_thread::sleep_for(std::chrono::seconds(4));
                            }
                            else
                            {
                                my_field[Line1 + 2][Col1 + 1] = '.';
                                my_field_w[Line1 + 2][Col1 + 1] = '.';
                                print(my_field, enemy_field, n1, m1);
                                ++Line1;
                                anti_switch(aim, Col1, Line1);
                                --Line1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                ++count;
                                goto shift;
                            }
                        }
                    }
                    if (part == 2)
                    {
                        if ((Line1 == Line2) && (Col1 > Col2))
                        {
                            if ((my_field[Line1 + 1][Col1 + 2] == ' ') || (my_field[Line1 + 1][Col1 + 2] == '#'))
                            {
                                if (my_field_w[Line1 + 1][Col1 + 2] == '3')
                                {
                                    for (int i = Line1; i <= Line1 + 2;)
                                    {
                                        for (int j = Col1 + 1; j <= Col1 + 3; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        my_field[iii][jjj] = 'x';
                                                                        my_field_w[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }
                                    my_field[Line1 + 1][Col1 + 2] = 'x';

                                    print(my_field, enemy_field, n1, m1);
                                    ++Col1;
                                    anti_switch(aim, Col1, Line1);
                                    --Col1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[Line1 + 1][Col1 + 2] = '.';
                                    my_field_w[Line1 + 1][Col1 + 2] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Col1;
                                    anti_switch(aim, Col1, Line1);
                                    --Col1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                            if ((my_field[Line1 + 1][Col2] == ' ') || (my_field[Line1 + 1][Col2] == '#'))
                            {
                                if (my_field_w[Line1 + 1][Col2] == '3')
                                {
                                    for (int i = Line1; i <= Line1 + 2;)
                                    {
                                        for (int j = Col2 - 1; j <= Col2 + 1; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        my_field[iii][jjj] = 'x';
                                                                        my_field_w[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }
                                    my_field[Line1 + 1][Col2] = 'x';

                                    print(my_field, enemy_field, n1, m1);
                                    --Col2;
                                    anti_switch(aim, Col2, Line1);
                                    ++Col2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[Line1 + 1][Col2] = '.';
                                    my_field_w[Line1 + 1][Col2] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    --Col2;
                                    anti_switch(aim, Col2, Line1);
                                    ++Col2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }

                            }
                        }
                        if ((Line1 == Line2) && (Col1 < Col2))
                        {
                            if ((my_field[Line1 + 1][Col2 + 2] == ' ') || (my_field[Line1 + 1][Col2 + 2] == '#'))
                            {
                                if (my_field_w[Line1 + 1][Col2 + 2] == '3')
                                {
                                    for (int i = Line1; i <= Line1 + 2;)
                                    {
                                        for (int j = Col2 + 1; j <= Col2 + 3; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        my_field[iii][jjj] = 'x';
                                                                        my_field_w[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }
                                    my_field[Line1 + 1][Col2 + 2] = 'x';

                                    print(my_field, enemy_field, n1, m1);
                                    ++Col2;
                                    anti_switch(aim, Col2, Line1);
                                    --Col2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[Line1 + 1][Col2 + 2] = '.';
                                    my_field_w[Line1 + 1][Col2 + 2] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Col2;
                                    anti_switch(aim, Col2, Line1);
                                    --Col2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                            if ((my_field[Line1 + 1][Col1] == ' ') || (my_field[Line1 + 1][Col1] == '#'))
                            {
                                if (my_field_w[Line1 + 1][Col1] == '3')
                                {
                                    for (int i = Line1; i <= Line1 + 2;)
                                    {
                                        for (int j = Col1 - 1; j <= Col1 + 1; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        my_field[iii][jjj] = 'x';
                                                                        my_field_w[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }
                                    my_field[Line + 1][Col1] = 'x';

                                    print(my_field, enemy_field, n1, m1);
                                    --Col1;
                                    anti_switch(aim, Col1, Line1);
                                    ++Col1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[Line1 + 1][Col1] = '.';
                                    my_field_w[Line1 + 1][Col1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    --Col1;
                                    anti_switch(aim, Col1, Line1);
                                    ++Col1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                        }
                        if ((Col1 == Col2) && (Line1 < Line2))
                        {
                            if ((my_field[Line1][Col1 + 1] == ' ') || (my_field[Line1][Col1 + 1] == '#'))
                            {
                                if (my_field_w[Line1][Col1 + 1] == '3')
                                {
                                    for (int i = Line1 - 1; i <= Line1 + 1;)
                                    {
                                        for (int j = Col1; j <= Col1 + 2; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        my_field[iii][jjj] = 'x';
                                                                        my_field_w[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }
                                    my_field[Line1][Col1 + 1] = 'x';

                                    print(my_field, enemy_field, n1, m1);
                                    --Line1;
                                    anti_switch(aim, Col1, Line1);
                                    ++Line1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[Line1][Col1 + 1] = '.';
                                    my_field_w[Line1][Col1 + 1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    --Line1;
                                    anti_switch(aim, Col1, Line1);
                                    ++Line1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                            if ((my_field[Line2 + 2][Col1 + 1] == ' ') || (my_field[Line2 + 2][Col1 + 1] == '#'))
                            {
                                if (my_field_w[Line2 + 2][Col1 + 1] == '3')
                                {
                                    for (int i = Line2 + 1; i <= Line2 + 3;)
                                    {
                                        for (int j = Col1; j <= Col1 + 2; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        my_field[iii][jjj] = 'x';
                                                                        my_field_w[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }
                                    my_field[Line2 + 2][Col1 + 1] = 'x';

                                    print(my_field, enemy_field, n1, m1);
                                    ++Line2;
                                    anti_switch(aim, Col1, Line2);
                                    --Line2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[Line2 + 2][Col1 + 1] = '.';
                                    my_field_w[Line2 + 2][Col1 + 1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Line2;
                                    anti_switch(aim, Col1, Line2);
                                    --Line2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                        }
                        if ((Col1 == Col2) && (Line1 > Line2))
                        {
                            if ((my_field[Line2][Col1 + 1] == ' ') || (my_field[Line2][Col1 + 1] == '#'))
                            {
                                if (my_field_w[Line2][Col1 + 1] == '3')
                                {
                                    for (int i = Line2 - 1; i <= Line2 + 1;)
                                    {
                                        for (int j = Col1; j <= Col1 + 2; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        my_field[iii][jjj] = 'x';
                                                                        my_field_w[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }
                                    my_field[Line2][Col1 + 1] = 'x';

                                    print(my_field, enemy_field, n1, m1);
                                    --Line2;
                                    anti_switch(aim, Col1, Line2);
                                    ++Line2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[Line2][Col1 + 1] = '.';
                                    my_field_w[Line2][Col1 + 1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    --Line2;
                                    anti_switch(aim, Col1, Line2);
                                    ++Line2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                            if ((my_field[Line1 + 2][Col1 + 1] == ' ') || (my_field[Line1 + 2][Col1 + 1] == '#'))
                            {
                                if (my_field_w[Line1 + 2][Col1 + 1] == '3')
                                {
                                    for (int i = Line1 + 1; i <= Line1 + 3;)
                                    {
                                        for (int j = Col1; j <= Col1 + 2; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        my_field[iii][jjj] = 'x';
                                                                        my_field_w[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }
                                    my_field[Line1 + 2][Col1 + 1] = 'x';

                                    print(my_field, enemy_field, n1, m1);
                                    ++Line1;
                                    anti_switch(aim, Col1, Line1);
                                    --Line1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[Line1 + 2][Col1 + 1] = '.';
                                    my_field_w[Line1 + 2][Col1 + 1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Line1;
                                    anti_switch(aim, Col1, Line1);
                                    --Line1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                        }
                    }
                }

                if (my_field_w[Line1 + 1][Col1 + 1] == '4')
                {
                    if (part == 1)
                    {
                        if (((my_field[Line1 + 1][Col1] == ' ') || (my_field[Line1 + 1][Col1] == '#')) && (part == 1))
                        {
                            if (my_field_w[Line1 + 1][Col1] == '4')
                            {
                                part = 2;
                                Line2 = Line1;
                                Col2 = Col1 - 1;
                                my_field[Line1 + 1][Col1] = 'x';
                                print(my_field, enemy_field, n1, m1);
                                --Col1;
                                anti_switch(aim, Col1, Line1);
                                ++Col1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                std::this_thread::sleep_for(std::chrono::seconds(3));
                            }
                            else
                            {
                                my_field[Line1 + 1][Col1] = '.';
                                my_field_w[Line1 + 1][Col1] = '.';
                                print(my_field, enemy_field, n1, m1);
                                --Col1;
                                anti_switch(aim, Col1, Line1);
                                ++Col1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                ++count;
                                goto shift;
                            }
                        }
                        if (((my_field[Line1 + 1][Col1 + 2] == ' ') || (my_field[Line1 + 1][Col1 + 2] == '#')) && (part == 1))
                        {
                            if (my_field_w[Line1 + 1][Col1 + 2] == '4')
                            {
                                part = 2;
                                Line2 = Line1;
                                Col2 = Col1 + 1;
                                my_field[Line1 + 1][Col1 + 2] = 'x';
                                print(my_field, enemy_field, n1, m1);
                                ++Col1;
                                anti_switch(aim, Col1, Line1);
                                --Col1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                std::this_thread::sleep_for(std::chrono::seconds(4));
                            }
                            else
                            {
                                my_field[Line1 + 1][Col1 + 2] = '.';
                                my_field_w[Line1 + 1][Col1 + 2] = '.';
                                print(my_field, enemy_field, n1, m1);
                                ++Col1;
                                anti_switch(aim, Col1, Line1);
                                --Col1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                ++count;
                                goto shift;
                            }
                        }
                        if (((my_field[Line1][Col1 + 1] == ' ') || (my_field[Line1][Col1 + 1] == '#')) && (part == 1))
                        {
                            if (my_field_w[Line1][Col1 + 1] == '4')
                            {
                                part = 2;
                                Line2 = Line1 - 1;
                                Col2 = Col1;
                                my_field[Line1][Col1 + 1] = 'x';
                                print(my_field, enemy_field, n1, m1);
                                --Line1;
                                anti_switch(aim, Col1, Line1);
                                ++Line1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                std::this_thread::sleep_for(std::chrono::seconds(4));
                            }
                            else
                            {
                                my_field[Line1][Col1 + 1] = '.';
                                my_field_w[Line1][Col1 + 1] = '.';
                                print(my_field, enemy_field, n1, m1);
                                --Line1;
                                anti_switch(aim, Col1, Line1);
                                ++Line1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                ++count;
                                goto shift;
                            }
                        }
                        if (((my_field[Line1 + 2][Col1 + 1] == ' ') || (my_field[Line1 + 2][Col1 + 1] == '#')) && (part == 1))
                        {
                            if (my_field_w[Line1 + 2][Col1 + 1] == '4')
                            {
                                part = 2;
                                Line2 = Line1 + 1;
                                Col2 = Col1;
                                my_field[Line1 + 2][Col1 + 1] = 'x';
                                print(my_field, enemy_field, n1, m1);
                                ++Line1;
                                anti_switch(aim, Col1, Line1);
                                --Line1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                std::this_thread::sleep_for(std::chrono::seconds(4));
                            }
                            else
                            {
                                my_field[Line1 + 2][Col1 + 1] = '.';
                                my_field_w[Line1 + 2][Col1 + 1] = '.';
                                print(my_field, enemy_field, n1, m1);
                                ++Line1;
                                anti_switch(aim, Col1, Line1);
                                --Line1;
                                std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                ++count;
                                goto shift;
                            }
                        }
                    }
                    if (part == 2)
                    {
                        if ((Line1 == Line2) && (Col1 > Col2))
                        {
                            if (((my_field[Line1 + 1][Col1 + 2] == ' ') || (my_field[Line1 + 1][Col1 + 2] == '#')) && (part == 2))
                            {
                                if (my_field_w[Line1 + 1][Col1 + 2] == '4')
                                {
                                    part = 3;
                                    Line3 = Line1;
                                    Col3 = Col1 + 1;
                                    my_field[Line1 + 1][Col1 + 2] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Col1;
                                    anti_switch(aim, Col1, Line1);
                                    --Col1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                }
                                else
                                {
                                    my_field[Line1 + 1][Col1 + 2] = '.';
                                    my_field_w[Line1 + 1][Col1 + 2] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Col1;
                                    anti_switch(aim, Col1, Line1);
                                    --Col1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                            if (((my_field[Line1 + 1][Col2] == ' ') || (my_field[Line1 + 1][Col2] == '#')) && (part == 2))
                            {
                                if (my_field_w[Line1 + 1][Col2] == '4')
                                {
                                    part = 3;
                                    Line3 = Line1;
                                    Col3 = Col2 - 1;
                                    my_field[Line1 + 1][Col2] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    --Col2;
                                    anti_switch(aim, Col2, Line1);
                                    ++Col2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                }
                                else
                                {
                                    my_field[Line1 + 1][Col2] = '.';
                                    my_field_w[Line1 + 1][Col2] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    --Col2;
                                    anti_switch(aim, Col2, Line1);
                                    ++Col2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }

                            }
                        }
                        if ((Line1 == Line2) && (Col1 < Col2))
                        {
                            if (((my_field[Line1 + 1][Col2 + 2] == ' ') || (my_field[Line1 + 1][Col2 + 2] == '#')) && (part == 2))
                            {
                                if (my_field_w[Line1 + 1][Col2 + 2] == '4')
                                {
                                    part = 3;
                                    Line3 = Line1;
                                    Col3 = Col2 + 1;
                                    my_field[Line1 + 1][Col2 + 2] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Col2;
                                    anti_switch(aim, Col2, Line1);
                                    --Col2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                }
                                else
                                {
                                    my_field[Line1 + 1][Col2 + 2] = '.';
                                    my_field_w[Line1 + 1][Col2 + 2] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Col2;
                                    anti_switch(aim, Col2, Line1);
                                    --Col2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                            if (((my_field[Line1 + 1][Col1] == ' ') || (my_field[Line1 + 1][Col1] == '#')) && (part == 2))
                            {
                                if (my_field_w[Line1 + 1][Col1] == '4')
                                {
                                    part = 3;
                                    Line3 = Line1;
                                    Col3 = Col1 - 1;
                                    my_field[Line + 1][Col1] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    --Col1;
                                    anti_switch(aim, Col1, Line1);
                                    ++Col1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                }
                                else
                                {
                                    my_field[Line1 + 1][Col1] = '.';
                                    my_field_w[Line1 + 1][Col1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    --Col1;
                                    anti_switch(aim, Col1, Line1);
                                    ++Col1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                        }
                        if ((Col1 == Col2) && (Line1 < Line2))
                        {
                            if (((my_field[Line1][Col1 + 1] == ' ') || (my_field[Line1][Col1 + 1] == '#')) && (part == 2))
                            {
                                if (my_field_w[Line1][Col1 + 1] == '4')
                                {
                                    part = 3;
                                    Line3 = Line1 - 1;
                                    Col3 = Col1;
                                    my_field[Line1][Col1 + 1] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    --Line1;
                                    anti_switch(aim, Col1, Line1);
                                    ++Line1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                }
                                else
                                {
                                    my_field[Line1][Col1 + 1] = '.';
                                    my_field_w[Line1][Col1 + 1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    --Line1;
                                    anti_switch(aim, Col1, Line1);
                                    ++Line1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                            if (((my_field[Line2 + 2][Col1 + 1] == ' ') || (my_field[Line2 + 2][Col1 + 1] == '#')) && (part == 2))
                            {
                                if (my_field_w[Line2 + 2][Col1 + 1] == '4')
                                {
                                    part = 3;
                                    Line3 = Line2 + 1;
                                    Col3 = Col1;
                                    my_field[Line2 + 2][Col1 + 1] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Line2;
                                    anti_switch(aim, Col1, Line2);
                                    --Line2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                }
                                else
                                {
                                    my_field[Line2 + 2][Col1 + 1] = '.';
                                    my_field_w[Line2 + 2][Col1 + 1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Line2;
                                    anti_switch(aim, Col1, Line2);
                                    --Line2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                        }
                        if ((Col1 == Col2) && (Line1 > Line2))
                        {
                            if (((my_field[Line2][Col1 + 1] == ' ') || (my_field[Line2][Col1 + 1] == '#')) && (part == 2))
                            {
                                if (my_field_w[Line2][Col1 + 1] == '4')
                                {
                                    part = 3;
                                    Line3 = Line2 - 1;
                                    Col3 = Col1;
                                    my_field[Line2][Col1 + 1] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    --Line2;
                                    anti_switch(aim, Col1, Line2);
                                    ++Line2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                }
                                else
                                {
                                    my_field[Line2][Col1 + 1] = '.';
                                    my_field_w[Line2][Col1 + 1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    --Line2;
                                    anti_switch(aim, Col1, Line2);
                                    ++Line2;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                            if (((my_field[Line1 + 2][Col1 + 1] == ' ') || (my_field[Line1 + 2][Col1 + 1] == '#')) && (part == 2))
                            {
                                if (my_field_w[Line1 + 2][Col1 + 1] == '4')
                                {
                                    part = 3;
                                    Line3 = Line1 + 1;
                                    Col3 = Col1;
                                    my_field[Line1 + 2][Col1 + 1] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Line1;
                                    anti_switch(aim, Col1, Line1);
                                    --Line1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                }
                                else
                                {
                                    my_field[Line1 + 2][Col1 + 1] = '.';
                                    my_field_w[Line1 + 2][Col1 + 1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    ++Line1;
                                    anti_switch(aim, Col1, Line1);
                                    --Line1;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                        }
                    }

                    if (part == 3)
                    {
                        if (Line1 == Line2)
                        {
                            std::set<int> set = {Col1, Col2, Col3};
                            min = *set.begin();
                            max = *set.rbegin();

                            if (((my_field[Line1 + 1][max + 2] == ' ') || (my_field[Line1 + 1][max + 2] == '#')) && (part == 3))
                            {
                                if (my_field_w[Line1 + 1][max + 2] == '4')
                                {
                                    for (int i = Line1; i <= Line1 + 2;)
                                    {
                                        for (int j = max + 1; j <= max + 3; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        for (int iiii = iii - 1; iiii <= iii + 1;)
                                                                        {
                                                                            for (int jjjj = jjj - 1; jjjj <= jjj + 1; ++jjjj)
                                                                            {
                                                                                if (my_field[iiii][jjjj] != 'x')
                                                                                {
                                                                                    my_field[iiii][jjjj] = '.';
                                                                                    my_field_w[iiii][jjjj] = '.';
                                                                                }
                                                                                else
                                                                                {
                                                                                    my_field[iiii][jjjj] = 'x';
                                                                                    my_field_w[iiii][jjjj] = 'x';
                                                                                }
                                                                            }
                                                                            ++iiii;
                                                                        }
                                                                        my_field[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }

                                    my_field[Line1 + 1][max + 2] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    ++max;
                                    anti_switch(aim, max, Line1);
                                    --max;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[Line1 + 1][max + 2] = '.';
                                    my_field_w[Line1 + 1][max + 2] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    ++max;
                                    anti_switch(aim, max, Line1);
                                    --max;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                            if (((my_field[Line1 + 1][min] == ' ') || (my_field[Line1 + 1][min] == '#')) && (part == 3))
                            {
                                if (my_field_w[Line1 + 1][min] == '4')
                                {
                                    for (int i = Line1; i <= Line1 + 2;)
                                    {
                                        for (int j = min - 1; j <= min + 1; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        for (int iiii = iii - 1; iiii <= iii + 1;)
                                                                        {
                                                                            for (int jjjj = jjj - 1; jjjj <= jjj + 1; ++jjjj)
                                                                            {
                                                                                if (my_field[iiii][jjjj] != 'x')
                                                                                {
                                                                                    my_field[iiii][jjjj] = '.';
                                                                                    my_field_w[iiii][jjjj] = '.';
                                                                                }
                                                                                else
                                                                                {
                                                                                    my_field[iiii][jjjj] = 'x';
                                                                                    my_field_w[iiii][jjjj] = 'x';
                                                                                }
                                                                            }
                                                                            ++iiii;
                                                                        }
                                                                        my_field[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }

                                    my_field[Line1 + 1][min] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    --min;
                                    anti_switch(aim, min, Line1);
                                    ++min;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[Line1 + 1][min] = '.';
                                    my_field_w[Line1 + 1][min] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    --min;
                                    anti_switch(aim, min, Line1);
                                    ++min;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }

                            }
                        }

                        if (Col1 == Col2)
                        {
                            std::set<int> set = {Line1, Line2, Line3};
                            min = *set.begin();
                            max = *set.rbegin();

                            if (((my_field[min][Col1 + 1] == ' ') || (my_field[min][Col1 + 1] == '#')) && (part == 3))
                            {
                                if (my_field_w[min][Col1 + 1] == '4')
                                {
                                    for (int i = min - 1; i <= min + 1;)
                                    {
                                        for (int j = Col1 ; j <= Col1 + 2; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        for (int iiii = iii - 1; iiii <= iii + 1;)
                                                                        {
                                                                            for (int jjjj = jjj - 1; jjjj <= jjj + 1; ++jjjj)
                                                                            {
                                                                                if (my_field[iiii][jjjj] != 'x')
                                                                                {
                                                                                    my_field[iiii][jjjj] = '.';
                                                                                    my_field_w[iiii][jjjj] = '.';
                                                                                }
                                                                                else
                                                                                {
                                                                                    my_field[iiii][jjjj] = 'x';
                                                                                    my_field_w[iiii][jjjj] = 'x';
                                                                                }
                                                                            }
                                                                            ++iiii;
                                                                        }
                                                                        my_field[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }

                                    my_field[min][Col1 + 1] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    --min;
                                    anti_switch(aim, Col1, min);
                                    ++min;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[min][Col1 + 1] = '.';
                                    my_field_w[min][Col1 + 1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    --min;
                                    anti_switch(aim, Col1, min);
                                    ++min;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                            if (((my_field[max + 2][Col1 + 1] == ' ') || (my_field[max + 2][Col1 + 1] == '#')) && (part == 3))
                            {
                                if (my_field_w[max + 2][Col1 + 1] == '4')
                                {
                                    for (int i = max + 1; i <= max + 3;)
                                    {
                                        for (int j = Col1 ; j <= Col1 + 2; ++j)
                                        {
                                            if (my_field[i][j] != 'x')
                                            {
                                                my_field[i][j] = '.';
                                                my_field_w[i][j] = '.';
                                            }
                                            else
                                            {
                                                for (int ii = i - 1; ii <= i + 1;)
                                                {
                                                    for (int jj = j - 1; jj <= j + 1; ++jj)
                                                    {
                                                        if (my_field[ii][jj] != 'x')
                                                        {
                                                            my_field[ii][jj] = '.';
                                                            my_field_w[ii][jj] = '.';
                                                        }
                                                        else
                                                        {
                                                            for (int iii = ii - 1; iii <= ii + 1;)
                                                            {
                                                                for (int jjj = jj - 1; jjj <= jj + 1; ++jjj)
                                                                {
                                                                    if (my_field[iii][jjj] != 'x')
                                                                    {
                                                                        my_field[iii][jjj] = '.';
                                                                        my_field_w[iii][jjj] = '.';
                                                                    }
                                                                    else
                                                                    {
                                                                        for (int iiii = iii - 1; iiii <= iii + 1;)
                                                                        {
                                                                            for (int jjjj = jjj - 1; jjjj <= jjj + 1; ++jjjj)
                                                                            {
                                                                                if (my_field[iiii][jjjj] != 'x')
                                                                                {
                                                                                    my_field[iiii][jjjj] = '.';
                                                                                    my_field_w[iiii][jjjj] = '.';
                                                                                }
                                                                                else
                                                                                {
                                                                                    my_field[iiii][jjjj] = 'x';
                                                                                    my_field_w[iiii][jjjj] = 'x';
                                                                                }
                                                                            }
                                                                            ++iiii;
                                                                        }
                                                                        my_field[iii][jjj] = 'x';
                                                                    }
                                                                }
                                                                ++iii;
                                                            }
                                                            my_field[ii][jj] = 'x';
                                                        }
                                                    }
                                                    ++ii;
                                                }
                                                my_field[i][j] = 'x';
                                            }
                                        }
                                        ++i;
                                    }

                                    my_field[max + 2][Col1 + 1] = 'x';
                                    print(my_field, enemy_field, n1, m1);
                                    ++max;
                                    anti_switch(aim, Col1, max);
                                    --max;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                                    std::this_thread::sleep_for(std::chrono::seconds(4));
                                    hit = false;
                                    goto iftrue;
                                }
                                else
                                {
                                    my_field[max + 2][Col1 + 1] = '.';
                                    my_field_w[max + 2][Col1 + 1] = '.';
                                    print(my_field, enemy_field, n1, m1);
                                    ++max;
                                    anti_switch(aim, Col1, max);
                                    --max;
                                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                                    ++count;
                                    goto shift;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                int schet = 0;
                for (int i = 0; i < n1 + 2; ++i)
                    for (int j = 0; j < m1 + 2; ++j)
                        if (my_field[i][j] == '#')
                            ++schet;
                if (schet == 0)
                {
                    std::cout << "\n\n  You have lost :(\n\n\n";
                    system("pause");
                    exit(0);
                }

                Col1 = 0;
                Line1 = 0;
                Col2 = 0;
                Line2 = 0;
                Col3 = 0;
                Line3 = 0;
                part = 1;

                srand ( time(NULL) );

                aim[0] = static_cast<char>(65 + rand() % 10);
                aim[1] = static_cast<char>(48 + rand() % 10);
                place_ships1(aim, Col, Line);

                if (diff == "HARDCORE")
                {
                    if (att == 3)
                    {
                        while (my_field[Line + 1][Col + 1] != '#')
                        {
                            aim[0] = static_cast<char>(65 + rand() % 10);
                            aim[1] = static_cast<char>(48 + rand() % 10);
                            place_ships1(aim, Col, Line);
                        }
                        att = 0;
                    }
                }

                while ((my_field[Line + 1][Col + 1] == 'x') || (my_field_w[Line + 1][Col + 1] == '.'))
                {
                    aim[0] = static_cast<char>(65 + rand() % 10);
                    aim[1] = static_cast<char>(48 + rand() % 10);
                    place_ships1(aim, Col, Line);
                }

                while ((my_field_w[Line + 1][Col + 1] == '1') || (my_field_w[Line + 1][Col + 1] == '2')
                       || (my_field_w[Line + 1][Col + 1] == '3') || (my_field_w[Line + 1][Col + 1] == '4'))
                {
                    if (my_field_w[Line + 1][Col + 1] == '1')
                    {
                        my_field[Line + 1][Col + 1] = 'x';

                        for (int i = Line; i <= Line + 2;)
                        {
                            for (int j = Col; j <= Col + 2; ++j)
                            {
                                if (my_field[i][j] != 'x')
                                {
                                    my_field[i][j] = '.';
                                    my_field_w[i][j] = '.';
                                }
                            }
                            ++i;
                        }
                        print(my_field, enemy_field, n1, m1);
                        std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Killed!";
                        att = 0;

                        std::this_thread::sleep_for(std::chrono::seconds(4));

                        schet = 0;
                        for (int i = 0; i < n1 + 2; ++i)
                            for (int j = 0; j < m1 + 2; ++j)
                                if (my_field[i][j] == '#')
                                    ++schet;
                        if (schet == 0)
                        {
                            std::cout << "\n\n  You have lost :(\n\n\n";
                            system("pause");
                            exit(0);
                        }

                        aim[0] = static_cast<char>(65 + rand() % 10);
                        aim[1] = static_cast<char>(48 + rand() % 10);
                        place_ships1(aim, Col, Line);
                    }

                    if ((my_field_w[Line + 1][Col + 1] == '2') || (my_field_w[Line + 1][Col + 1] == '3') || (my_field_w[Line + 1][Col + 1] == '4'))
                    {
                        hit = true;
                        my_field[Line + 1][Col + 1] = 'x';
                        print(my_field, enemy_field, n1, m1);
                        std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Hit!";
                        att = 0;
                        std::this_thread::sleep_for(std::chrono::seconds(4));
                        goto iftrue;
                    }

                    while ((my_field[Line + 1][Col + 1] == 'x') || (my_field_w[Line + 1][Col + 1] == '.'))
                    {
                        aim[0] = static_cast<char>(65 + rand() % 10);
                        aim[1] = static_cast<char>(48 + rand() % 10);
                        place_ships1(aim, Col, Line);
                    }
                }

                if (my_field_w[Line + 1][Col + 1] == ' ')
                {
                    my_field[Line + 1][Col + 1] = '.';
                    my_field_w[Line + 1][Col + 1] = '.';

                    print(my_field, enemy_field, n1, m1);
                    std::cout << "\n\n  Motion by AI: " << aim[0] << aim[1] << "\n  Miss!";
                    ++att;
                }

                schet = 0;
                for (int i = 0; i < n1 + 2; ++i)
                    for (int j = 0; j < m1 + 2; ++j)
                        if (my_field[i][j] == '#')
                            ++schet;
                if (schet == 0)
                {
                    std::cout << "\n\n  You have lost :(\n\n\n";
                    system("pause");
                    exit(0);

                }
            }
        }
    ++count;
    }
}


int main()
{
    const int N = 10, M = 10;
    unsigned short int attempt = 0;

    char **my_field = new char *[N];
    for (int i = 0; i < M + 2; ++i)
        my_field[i] = new char[M];

    char **enemy_field = new char *[N];
    for (int i = 0; i < M + 2; ++i)
        enemy_field[i] = new char[M];

    char **my_field_w = new char *[N + 2];
    for (int i = 0; i < M + 2; ++i)
        my_field_w[i] = new char[M + 2];

    char **enemy_field_w = new char *[N + 2];
    for (int i = 0; i < M + 2; ++i)
        enemy_field_w[i] = new char[M + 2];

    for (int i = 0; i < N + 2; ++i)
        for (int j = 0; j < M + 2; ++j)
        {
            my_field[i][j] = ' ';
            enemy_field[i][j] = ' ';
        }

    for (int i = 0; i < N + 2; ++i)
        for (int j = 0; j < M + 2; ++j)
        {
            my_field_w[i][j] = ' ';
            enemy_field_w[i][j] = ' ';
        }

    for (int i = 0; i < N + 2; ++i)
    {
        my_field[i][0] = '.';
        my_field[i][11] = '.';
    }
    for (int j = 0; j < M + 2; ++j)
    {
        my_field[0][j] = '.';
        my_field[11][j] = '.';
    }

    std::cout << "\n  Hello, it's the game called 'Sea Battle'\n  Use CAPS LOCK to play\n\n";

    std::string MODE;
    std::cout << "  Enter START to begin or HELP to receive more information\n";
    std::cin >> MODE;

    while (!((MODE == "START") || (MODE == "START_D") || (MODE == "HELP")))
    {
        std::cout << "\n  Enter START to begin or HELP to receive more information\n";
        std::cin >> MODE;
    }

    if (MODE == "HELP")
    {
        system("cls");
        std::cout << "\n\n  You will play against artificial intelligence (AI), which has two levels of difficulty,\n"
                     "  you have to place your ships on the field and shoot at enemy ships.\n"
                     "  Opponents move in the order of the queue. When hit, the player shoots again.\n"
                     "  You have to put your ships in accordance with the rules: vertically or horizontally so that the\n"
                     "  ships do not come into contact with each other (there should be at least one cell between them).\n"
                     "  However, the computer will not allow you to put them otherwise.\n\n"
                     "  There are 4 types of ships in total:\n  1 quad ship\n  2 triple ships\n  3 double ships\n  4 single ships\n\n"
                     "  Designations:\n"
                     "  # - ship (part of the ship)\n"
                     "  x - a damaged (killed) ship (part of the ship)\n"
                     "  . - miss\n\n"
                     "  If you find bugs, please let me know.\n"
                     "  Made by @ivan.reliable\n\n"
                     "  Good luck!\n\n"
                     "  -----------------------------------------------------------------------------------------------\n\n\n";

        std::cout << "  Enter START to begin\n";
        std::cin >> MODE;

        while (!((MODE == "START") || (MODE == "START_D")))
        {
            std::cout << "\n  Enter START to begin\n";
            std::cin >> MODE;
        }
    }

    std::string DIFF;
    if ((MODE == "START") || (MODE == "START_D"))
    {
        std::cout << "\n  Enter the difficulty of the game: NORMAL or HARDCORE\n";
        std::cin >> DIFF;
        while (!((DIFF == "NORMAL") || (DIFF == "HARDCORE")))
        {
            std::cout << "\n  Enter the difficulty of the game: NORMAL or HARDCORE\n";
            std::cin >> DIFF;
        }
    }

    {
        rand_quad_ships(enemy_field, enemy_field_w, N, M, MODE);
        rand_triple_ships(enemy_field, enemy_field_w, N, M, MODE);
        rand_double_ships(enemy_field, enemy_field_w, N, M, MODE);
        rand_single_ships(my_field, enemy_field, enemy_field_w, N, M, MODE);
    }

    {
        input_quad_ships(my_field, enemy_field, my_field_w, N, M);
        input_triple_ships(my_field, enemy_field, my_field_w, N, M);
        input_double_ships(my_field, enemy_field, my_field_w, N, M);
        input_single_ships(my_field, enemy_field, my_field_w, N, M);
    }

    motion(my_field, enemy_field, my_field_w, enemy_field_w, N, M, attempt, DIFF);

    return 0;
}



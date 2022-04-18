#include <iostream>
#include <cstring>
#include <fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    char grid[20][20];
    int row_number, colomn_number, temporary, temporary2, length;
    bool loop_out = true, end_of_file = false, size_check = true;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++)
            grid[i][j] = '*';
    char words[20];

    fstream file;
    file.open("input.txt", ios::in);
    if (file.is_open())
    {
        srand(time(NULL));
        while (!file.eof())
        {
            file >> words;
            length = strlen(words);
            // loop to choose the orientation
            while (1)
            {
                int rand_choice = rand() % 8;
                if (rand_choice == 0)
                {
                    while (1)
                    {
                        loop_out = true;
                        row_number = rand() % 20;
                        colomn_number = rand() % 20;
                        temporary = colomn_number;
                        if (colomn_number + length > 19)
                        {
                            loop_out = false;
                            break;
                        }
                        for (int i = 0; i < length; i++)
                        {
                            if (grid[row_number][temporary++] != '*')
                            {
                                loop_out = false;
                                break;
                            }
                        }
                        if (!loop_out)
                            break;
                        for (int j = 0; j < length; j++)
                        {
                            grid[row_number][colomn_number++] = words[j];
                        }
                        break;
                    }
                    if (!loop_out)
                        continue;
                    break;
                }
                else if (rand_choice == 1)
                {
                    while (1)
                    {
                        loop_out = true;
                        row_number = rand() % 20;
                        colomn_number = rand() % 20;
                        temporary = colomn_number;
                        if (colomn_number - length < 0)
                        {
                            loop_out = false;
                            break;
                        }
                        for (int i = 0; i < length; i++)
                        {
                            if (grid[row_number][temporary--] != '*')
                            {
                                loop_out = false;
                                break;
                            }
                        }
                        if (!loop_out)
                            break;
                        for (int j = 0; j < length; j++)
                        {
                            grid[row_number][colomn_number--] = words[j];
                        }
                        break;
                    }
                    if (!loop_out)
                        continue;
                    break;
                }
                else if (rand_choice == 2)
                {
                    while (1)
                    {
                        loop_out = true;
                        row_number = rand() % 20;
                        colomn_number = rand() % 20;
                        temporary = row_number;
                        if (row_number + length > 19)
                        {
                            loop_out = false;
                            break;
                        }

                        for (int i = 0; i < length; i++)
                        {
                            if (grid[temporary++][colomn_number] != '*')
                            {
                                loop_out = false;
                                break;
                            }
                        }
                        if (!loop_out)
                            break;
                        for (int j = 0; j < length; j++)
                        {
                            grid[row_number++][colomn_number] = words[j];
                        }
                        break;
                    }
                    if (!loop_out)
                        continue;
                    break;
                }
                else if (rand_choice == 3)
                {
                    while (1)
                    {
                        loop_out = true;
                        row_number = rand() % 20;
                        colomn_number = rand() % 20;
                        temporary = row_number;
                        if (row_number - length < 0)
                        {
                            loop_out = false;
                            break;
                        }

                        for (int i = 0; i < length; i++)
                        {
                            if (grid[temporary--][colomn_number] != '*')
                            {
                                loop_out = false;
                                break;
                            }
                        }
                        if (!loop_out)
                            break;
                        for (int j = 0; j < length; j++)
                        {
                            grid[row_number--][colomn_number] = words[j];
                        }
                        break;
                    }
                    if (!loop_out)
                        continue;
                    break;
                }
                else if (rand_choice == 4)
                {
                    while (1)
                    {
                        loop_out = true;
                        row_number = rand() % 20;
                        colomn_number = rand() % 20;
                        temporary = row_number;
                        temporary2 = colomn_number;
                        if (row_number + length > 19 || colomn_number + length > 19)
                        {
                            loop_out = false;
                            break;
                        }

                        for (int i = 0; i < length; i++)
                        {
                            if (grid[temporary++][temporary2++] != '*')
                            {
                                loop_out = false;
                                break;
                            }
                        }
                        if (!loop_out)
                            break;
                        for (int j = 0; j < length; j++)
                        {
                            grid[row_number++][colomn_number++] = words[j];
                        }
                        break;
                    }
                    if (!loop_out)
                        continue;
                    break;
                }
                else if (rand_choice == 5)
                {
                    while (1)
                    {
                        loop_out = true;
                        row_number = rand() % 20;
                        colomn_number = rand() % 20;
                        temporary = row_number;
                        temporary2 = colomn_number;
                        if (row_number - length < 0 || colomn_number - length < 0)
                        {
                            loop_out = false;
                            break;
                        }

                        for (int i = 0; i < length; i++)
                        {
                            if (grid[temporary--][temporary2--] != '*')
                            {
                                loop_out = false;
                                break;
                            }
                        }
                        if (!loop_out)
                            break;
                        for (int j = 0; j < length; j++)
                        {
                            grid[row_number--][colomn_number--] = words[j];
                        }
                        break;
                    }
                    if (!loop_out)
                        continue;
                    break;
                }
                else if (rand_choice == 6)
                {
                    while (1)
                    {
                        loop_out = true;
                        row_number = rand() % 20;
                        colomn_number = rand() % 20;
                        temporary = row_number;
                        temporary2 = colomn_number;
                        if (row_number + length > 19 || colomn_number - length < 0)
                        {
                            loop_out = false;
                            break;
                        }

                        for (int i = 0; i < length; i++)
                        {
                            if (grid[temporary++][temporary2--] != '*')
                            {
                                loop_out = false;
                                break;
                            }
                        }
                        if (!loop_out)
                            break;
                        for (int j = 0; j < length; j++)
                        {
                            grid[row_number++][colomn_number--] = words[j];
                        }
                        break;
                    }
                    if (!loop_out)
                        continue;
                    break;
                }
                else if (rand_choice == 7)
                {
                    while (1)
                    {
                        loop_out = true;
                        row_number = rand() % 20;
                        colomn_number = rand() % 20;
                        temporary = row_number;
                        temporary2 = colomn_number;
                        if (row_number - length < 0 || colomn_number + length > 19)
                        {
                            loop_out = false;
                            break;
                        }

                        for (int i = 0; i < length; i++)
                        {
                            if (grid[temporary--][temporary2++] != '*')
                            {
                                loop_out = false;
                                break;
                            }
                        }
                        if (!loop_out)
                            break;
                        for (int j = 0; j < length; j++)
                        {
                            grid[row_number--][colomn_number++] = words[j];
                        }
                        break;
                    }
                    if (!loop_out)
                        continue;
                    break;
                }
            }
        }
    }
    else
    {
        cout << "file is not open" << endl;
        exit(1);
    }
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (grid[i][j] == '*')
            {
                char random_alphabet = (rand() % 26) + 65;
                grid[i][j] = random_alphabet;
            }
        }
    }
    fstream output;
    output.open("puzzle.txt", ios::out);
    if (output.is_open())
    {
        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                output << grid[i][j];
            }
            output << endl;
        }
        cout << "puzzle created and saved\n";
    }
    else
    {
        cout << "Unable to open output file\n";
        exit(1);
    }
    system("pause");
    return 0;
}
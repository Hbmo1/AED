#include <stdio.h>

void bubble_sort(int *data, int first, int one_after_last)
{ // sort data[first],...,data[one_after_last-1] in increasing order
    int i, i_low, i_high, i_last;
    i_low = first;
    i_high = one_after_last - 1;
    while (i_low < i_high)
    {
        for (i = i_last = i_low; i < i_high; i++)
            if (data[i] > data[i + 1])
            {
                int tmp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = tmp;
                i_last = i;
            }
        i_high = i_last;
    }
}

void shaker_sort(int *data, int first, int one_after_last)
{
    int i, i_low, i_high, i_last;
    i_low = first;
    i_high = one_after_last - 1;
    while (i_low < i_high)
    {
        // up pass
        for (i = i_last = i_low; i < i_high; i++)
            if (data[i] > data[i + 1])
            {
                int tmp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = tmp;
                i_last = i;
            }
        i_high = i_last;
        // down pass
        for (i = i_last = i_high; i > i_low; i--)
            if (data[i] < data[i - 1])
            {
                int tmp = data[i];
                data[i] = data[i - 1];
                data[i - 1] = tmp;
                i_last = i;
            }
        i_low = i_last;
    }
}

void insertion_sort(int *data, int first, int one_after_last)
{
    int i, j;
    for (i = first + 1; i < one_after_last; i++)
    {
        int tmp = data[i];
        for (j = i; j > first && tmp < data[j - 1]; j--)
            data[j] = data[j - 1];
        data[j] = tmp;
    }
}

void shell_sort(int *data, int first, int one_after_last)
{
    int i, j, h;
    for (h = 1; h < (one_after_last - first) / 3; h = 3 * h + 1)
        ; // when h is choosen in this way the number of passes is O(log n)
    while (h >= 1)
    { // for each stride h, use insertion sort
        for (i = first + h; i < one_after_last; i++)
        {
            int tmp = data[i];
            for (j = i; j - h >= first && tmp < data[j - h]; j -= h)
                data[j] = data[j - h];
            data[j] = tmp;
        }
        h /= 3;
    }
}
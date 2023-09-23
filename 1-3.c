#include <math.h>
#include <stdio.h>
#include <stdlib.h>


struct passenger {
    int start;
    int end;
    int addition;
};


int main()
{
    int total_person = 10;
    struct passenger arr[10];
    int start_pos;
    scanf_s("elevator %d", &start_pos);
    int start, end, time;
    int arr_num = 0;
    int cache = 0;
    printf("%d\n", start_pos);

    for (int i = 0; i < total_person; ++i) {
        arr[i].start = 0;
        arr[i].end = 0;
        arr[i].addition = 1;
    }

    while (scanf_s("%d %d", &start, &end) == 1) {
        arr[arr_num].start = start;
        arr[arr_num].end = end;
        arr[arr_num].addition = 0;
        ++arr_num;
    }
    for (int j = start_pos; j > 0; j--) {
        if (cache < 4) {
            for (int i = 0; i < total_person; i++)
            {
                if (arr[i].start == j && arr[i].addition == 0) {
                    printf("%d ", j);
                    arr[i].addition = 1;
                    cache++;
                }
                if (arr[i].end == j && arr[i].addition == 1) {
                    printf("%d", j);
                    arr[i].addition = 2;
                    cache--;
                }
                    
            }
        }
        if (cache >= 4) {
            continue;
        }
    }
    for (int k = 0; k < 10; k++)
    {
        if (cache < 4) {
            for (int i = 0; i < total_person; ++i)
            {
                if (arr[i].start == k && arr[i].addition == 0) {
                    printf("%d ", k);
                    arr[i].addition = 1;
                    cache++;
                }
                if (arr[i].end == k && arr[i].addition == 1) {
                    printf("%d", k);
                    arr[i].addition = 2;
                    cache--;
                }

            }
        }
        if (cache >= 4) {
            continue;
        }
    }
    for (int p = 10; p > 0; p--) {
        if (cache < 4) {
            for (int i = 0; i < total_person; ++i)
            {
                if (arr[i].start == p && arr[i].addition == 0) {
                    printf("%d ", p);
                    arr[i].addition = 1;
                    cache++;
                }
                if (arr[i].end == p && arr[i].addition == 1) {
                    printf("%d", p);
                    arr[i].addition = 2;
                    cache--;
                }

            }
        }
        if (cache >= 4) {
            continue;
        }
    }
       



    
    return 0;
}
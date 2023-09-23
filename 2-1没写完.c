#include <math.h>
#include <stdio.h>
#include <stdlib.h>


#define MAX_TIME 1000

struct elevator {
    int start;
    int end;
    int time;
};

int sort_fun(const void* a, const void* b)
{
    return ((struct elevator*)a)->time - ((struct elevator*)b)->time; // 按照时间进行排序
}

int main()
{
    int total_person = 10;
    struct elevator arr[10];
    int start_pos;
    scanf_s("elevator %d", &start_pos);
    int start, end, time;
    int arr_num = 0;

    for (int i = 0; i < total_person; ++i) {
        arr[i].start = 0;
        arr[i].end = 0;
        arr[i].time = MAX_TIME;
    }

    while (scanf_s("%d %d %d", &start, &end, &time) == 1) {
        arr[arr_num].start = start;
        arr[arr_num].end = end;
        arr[arr_num].time = time;
        ++arr_num;
    }

    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), sort_fun);
    for (int i = 0; i < arr_num; ++i) {
        struct elevator next_pos = arr[i];
        struct elevator arr_cache[100];
        int cache_num = 0;
        printf("%d ", start_pos);
        if (next_pos.start <= start_pos) { 
            for (int j = i + 1; j < arr_num; ++j) {
                if (arr[j].start < start_pos && arr[j].end < arr[j].start && arr[j].time < next_pos.end - start_pos) {
                    arr_cache[cache_num] = arr[j];
                    cache_num += 1;
                    printf("%d ", arr[j].start);
                    memset(arr[j], 0, sizeof(arr[1]));
                    if (arr[j].end < next_pos.end) {
                        printf("");
                    }
                }
                else {

                }
            }
        }
        else {
            for (int j = i + 1; j < arr_num; ++j){
                if (arr[j].start > start_pos && arr[j].end > arr[j].start && arr[j].time < next_pos.end - start_pos) {
                    arr_cache[cache_num] = arr[j];
                    cache_num += 1;
                    printf("%d ", arr[cache_num].start);
                    memset(arr[j], 0, sizeof(arr[1]));
                }
            }
        }


        start_pos = next_pos.start;
    }
    return 0;
}
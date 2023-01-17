#include <zephyr.h>
#include <pthread.h>

void my_thread_entry(void *p1, void *p2, void *p3)
{
    int i;
    for (i = 0; i < 10; i++) {
        printf("thread1\n");
        sleep(1);
    }
}

int main(void)
{
    pthread_t thread;
    pthread_create(&thread, NULL, (void *)my_thread_entry, NULL);
    pthread_join(thread, NULL);
}


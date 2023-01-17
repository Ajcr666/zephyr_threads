#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

pthread_t thread1, thread2;
pthread_mutex_t mutex;
pthread_cond_t cond;

void* thread_func1(void* arg)
{
    while (1) {
        pthread_mutex_lock(&mutex);
        printf("thread1\n");
        pthread_cond_signal(&cond);
        pthread_mutex_unlock(&mutex);
        sleep(1);
    }
    return NULL;
}

void* thread_func2(void* arg)
{
    while (1) {
        pthread_mutex_lock(&mutex);
        pthread_cond_wait(&cond, &mutex);
        printf("thread2\n");
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main(void)
{
    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&cond, NULL);
    pthread_create(&
pthread_create(&thread1, NULL, thread_func1, NULL);
pthread_create(&thread2, NULL, thread_func2, NULL);
pthread_join(thread1, NULL);
pthread_join(thread2, NULL);
return 0;
}

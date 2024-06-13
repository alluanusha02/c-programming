#include <unistd.h>
#include <sys/msg.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

#define KEY 1234
#define SIZE 50

struct msgbuf
{
    long mtype;
    char mtext[SIZE];
};

int main()
{
    int qid = msgget(KEY, IPC_CREAT | 0666);
    printf(" qid=%d getpid=%d\n",qid, getpid());

    struct msgbuf msg1;
    msg1.mtype = 1;
    strcpy(msg1.mtext, "Hello Rajneesh \n");
    msgsnd(qid, &msg1, sizeof msg1.mtext, 0);

    return 0;
}

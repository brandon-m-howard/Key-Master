#ifndef _QUEUE_H
#define _QUEUE_H

#define QUEUE_LENGTH 10

struct queue {
	int queue[QUEUE_LENGTH];
	int y;
};

void enqueue(struct queue*, int);
int dequeue(struct queue*);

#endif
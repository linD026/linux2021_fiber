#ifndef __FIBER_H_
#define __FIBER_H_

void fiber_init();
void fiber_yield();

int fiber_spawn(void (*func)(void));
int fiber_wait_all();
#endif
#ifndef WORLD_H
#define WORLD_H

#include "block.h"

typedef struct {
	int x;
	int y;
	int z;
} int3_t;

void world_initalload();
void world_cleanup();

void world_render();

int world_threadentry(void *ptr);

block_t world_getblock(long x, long y, long z, int loadnew);
int world_setblock(long x, long y, long z, block_t block, int loadnew);
#endif //WORLD_H
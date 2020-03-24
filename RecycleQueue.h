#ifndef _RECYCLEQUEUE_H
#define _RECYCLEQUEUE_H

#include <stdint.h>
#include <string.h>
#include <stdlib.h>

template <typename stType>
class RecycleQueue
{
	public:
		RecycleQueue(){}
		~RecycleQueue(){}
	private:
		stType **m_queue;
		volatile uint64_t m_readPos;
		volatile uint64_t m_writePos;
		uint64_t m_unDropCount;
		uint64_t m_rqSize;
		uint64_t m_rqmask;
};

#endif 

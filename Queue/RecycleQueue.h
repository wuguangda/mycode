#ifndef _RECYCLEQUEUE_H
#define _RECYCLEQUEUE_H

#include <stdint.h>
#include <string.h>
#include <stdlib.h>

template <typename stType>
class RecycleQueue
{
	public:
		RecycleQueue():m_readPos(0),m_writePos(0),m_unDropCount(0),m_rqSize(0),m_rqmask(0){}
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

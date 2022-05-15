#ifndef __SYLAR_UTIL_H__
#define __SYLAR_UTIL_H__

#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <stdint.h>
namespace sylar {
    
pid_t GetThreadId();
uint32_t GetFiberId(){
    return 0;
}


}




#endif

#ifndef NGS_H
#define NGS_H

// GC - start
// http://www.hboehm.info/gc/scale.html
#define GC_THREADS
#define PARALLEL_MARK
#define THREAD_LOCAL_ALLOC

#define GC_REDIRECT_TO_LOCAL

#include <gc.h>
#define NGS_GC_INIT() GC_INIT()
#define NGS_GC_THR_INIT() GC_thr_init()
#define NGS_MALLOC(n) GC_MALLOC(n)
#define NGS_MALLOC_UNCOLLECTALE(n) GC_MALLOC_UNCOLLECTABLE(n)
#define NGS_GCOLLECT() GC_gcollect()
// GC - end

#endif

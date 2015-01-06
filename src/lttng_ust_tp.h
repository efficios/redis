#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER redis

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./lttng_ust_tp.h"

#if !defined(_LTTNG_UST_TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _LTTNG_UST_TP_H

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
    redis,
    dbAddLong,
    TP_ARGS(
        char*, key,
        long, val
    ),
    TP_FIELDS(
        ctf_string(key, key)
        ctf_integer(long, val, val)
    )
)

TRACEPOINT_EVENT(
    redis,
    dbAddStr,
    TP_ARGS(
        char*, key,
        char*, val
    ),
    TP_FIELDS(
        ctf_string(key, key)
        ctf_string(val, val)
    )
)

TRACEPOINT_EVENT(
    redis,
    dbOverwriteLong,
    TP_ARGS(
        char*, key,
        long, val
    ),
    TP_FIELDS(
        ctf_string(key, key)
        ctf_integer(long, val, val)
    )
)

TRACEPOINT_EVENT(
    redis,
    dbOverwriteStr,
    TP_ARGS(
        char*, key,
        char*, val
    ),
    TP_FIELDS(
        ctf_string(key, key)
        ctf_string(val, val)
    )
)

TRACEPOINT_EVENT(
    redis,
    lookupKeyLong,
    TP_ARGS(
        char*, key,
        long, retval
    ),
    TP_FIELDS(
        ctf_string(key, key)
        ctf_integer(long, retval, retval)
    )
)

TRACEPOINT_EVENT(
    redis,
    lookupKeyStr,
    TP_ARGS(
        char*, key,
        char*, retval
    ),
    TP_FIELDS(
        ctf_string(key, key)
        ctf_string(retval, retval)
    )
)

#endif /* _LTTNG_UST_TP_H */

#include <lttng/tracepoint-event.h>

#ifndef _PG_THRIFT_H_
#define _PG_THRIFT_H_

#include <postgres.h>
#include <port.h>


#define THRIFT_RESULT_MAX_FIELDS 256

#define PG_THRIFT_TYPE_BOOL 2
#define PG_THRIFT_TYPE_BYTE 3
#define PG_THRIFT_TYPE_DOUBLE 4
#define PG_THRIFT_TYPE_INT16 6
#define PG_THRIFT_TYPE_INT32 8
#define PG_THRIFT_TYPE_INT64 10
#define PG_THRIFT_TYPE_STRING 11
#define PG_THRIFT_TYPE_STRUCT 12
#define PG_THRIFT_TYPE_MAP 13
#define PG_THRIFT_TYPE_SET 14
#define PG_THRIFT_TYPE_LIST 15

#define BYTE_LEN 4
#define PG_THRIFT_TYPE_LEN 1
#define PG_THRIFT_FIELD_LEN 2
#define DOUBLE_LEN 8
#define INT16_LEN 2
#define INT32_LEN 4
#define INT64_LEN 8
#define LIST_LEN 4
#define BOOL_LEN 1
#define FIELD_LEN 2

#endif // _PG_THRIFT_H_

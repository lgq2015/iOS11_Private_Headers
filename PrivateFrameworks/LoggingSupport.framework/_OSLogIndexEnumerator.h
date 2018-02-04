/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogIndexEnumerator : NSObject {
    struct os_timesync_range_s {} * _bounds;
    NSMutableArray * _catalogStartQ;
    NSMutableArray * _fileBootQ;
    NSMutableArray * _fileEndQ;
    NSMutableArray * _fileStartQ;
    _OSLogIndex * _index;
    struct os_timesync_range_s { struct os_trace_uuid_map_s {} *x1; unsigned long long x2; unsigned long long x3; unsigned char x4[0][16]; } * _live_bound;
    NSMutableArray * _oversizeChunks;
    NSMutableArray * _subchunkEndQ;
    NSMutableArray * _subchunkStartQ;
    _OSLogTracepointBuffer * _tracepoints;
}

@property (nonatomic, readonly) NSMutableArray *oversizeChunks;

- (void).cxx_destruct;
- (void)_initTimesyncBounds:(struct { struct _os_log_index_timeref { unsigned char x_1_1_1[16]; unsigned long long x_1_1_2; } x1; struct _os_log_index_timeref { unsigned char x_2_1_1[16]; unsigned long long x_2_1_2; } x2; struct _os_log_index_timeref { unsigned char x_3_1_1[16]; unsigned long long x_3_1_2; } x3; struct _os_log_index_timeref { unsigned char x_4_1_1[16]; unsigned long long x_4_1_2; } x4; struct _os_log_index_timeref { unsigned char x_5_1_1[16]; unsigned long long x_5_1_2; } x5; struct _os_log_index_timeref {} *x6; struct { struct _os_log_index_timeref { unsigned char x_1_2_1[16]; unsigned long long x_1_2_2; } x_7_1_1; unsigned char x_7_1_2; } x7[5]; }*)arg1;
- (void)dealloc;
- (void)enumerateTracepointsInRange:(struct os_timesync_range_s { struct os_trace_uuid_map_s {} *x1; unsigned long long x2; unsigned long long x3; unsigned char x4[0][16]; }*)arg1 timesync:(struct _os_timesync_db_s { }*)arg2 options:(unsigned int)arg3 usingBlock:(id /* block */)arg4;
- (id)initWithIndex:(id)arg1 metadata:(struct { struct _os_log_index_timeref { unsigned char x_1_1_1[16]; unsigned long long x_1_1_2; } x1; struct _os_log_index_timeref { unsigned char x_2_1_1[16]; unsigned long long x_2_1_2; } x2; struct _os_log_index_timeref { unsigned char x_3_1_1[16]; unsigned long long x_3_1_2; } x3; struct _os_log_index_timeref { unsigned char x_4_1_1[16]; unsigned long long x_4_1_2; } x4; struct _os_log_index_timeref { unsigned char x_5_1_1[16]; unsigned long long x_5_1_2; } x5; struct _os_log_index_timeref {} *x6; struct { struct _os_log_index_timeref { unsigned char x_1_2_1[16]; unsigned long long x_1_2_2; } x_7_1_1; unsigned char x_7_1_2; } x7[5]; }*)arg2 fileBootList:(id)arg3;
- (id)oversizeChunks;

@end

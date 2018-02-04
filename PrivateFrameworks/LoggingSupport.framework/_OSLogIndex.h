/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogIndex : NSObject {
    NSString * _file;
    NSMutableArray * _fileq;
    NSMutableArray * _files;
    _OSLogCollectionReference * _lcr;
    struct { 
        struct _os_log_index_timeref { 
            unsigned char uuid[16]; 
            unsigned long long continuous; 
        } olim_oldestpersist; 
        struct _os_log_index_timeref { 
            unsigned char uuid[16]; 
            unsigned long long continuous; 
        } olim_oldestspecial; 
        struct _os_log_index_timeref { 
            unsigned char uuid[16]; 
            unsigned long long continuous; 
        } olim_oldesthighvol; 
        struct _os_log_index_timeref { 
            unsigned char uuid[16]; 
            unsigned long long continuous; 
        } olim_oldestlive; 
        struct _os_log_index_timeref { 
            unsigned char uuid[16]; 
            unsigned long long continuous; 
        } olim_end; 
        struct _os_log_index_timeref {} *olim_oldest; 
        struct { 
            struct _os_log_index_timeref { 
                unsigned char uuid[16]; 
                unsigned long long continuous; 
            } timeref; 
            unsigned char ttl; 
        } olim_ttl[5]; 
    }  _metadata;
    _OSLogEventStoreMetadata * _metadata2;
    bool  _metadataValid;
    struct _os_timesync_db_s { } * _tsdb;
}

@property (nonatomic, readonly) unsigned long long endWalltime;
@property (nonatomic, readonly) unsigned long long persistStartWalltime;
@property (nonatomic, readonly) unsigned long long specialStartWalltime;
@property (nonatomic, readonly) struct _os_timesync_db_s { }*timesync;

- (void).cxx_destruct;
- (bool)_addFileToIndex:(const char *)arg1 error:(id*)arg2;
- (bool)_buildFileIndex:(id*)arg1;
- (bool)_buildSingleFileIndex:(id*)arg1;
- (void)_enumerateEntriesInRange:(struct os_timesync_range_s { struct os_trace_uuid_map_s {} *x1; unsigned long long x2; unsigned long long x3; unsigned char x4[0][16]; }*)arg1 options:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (bool)_openTimesyncDatabase:(id*)arg1;
- (bool)_readArchiveMetadata:(id*)arg1;
- (bool)addReferenceToIndex:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (unsigned long long)endWalltime;
- (void)enumerateEntriesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned int)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateEntriesFromLastBootWithOptions:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateEntriesInRange:(struct os_timesync_range_s { struct os_trace_uuid_map_s {} *x1; unsigned long long x2; unsigned long long x3; unsigned char x4[0][16]; }*)arg1 options:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (void)enumerateFilesUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCollection:(id)arg1 buildLocalIndex:(bool)arg2 error:(id*)arg3;
- (id)initWithCollection:(id)arg1 error:(id*)arg2;
- (id)initWithCollection:(id)arg1 timesync:(struct _os_timesync_db_s { }*)arg2 metadata:(id)arg3;
- (void)insertChunkStore:(id)arg1;
- (void)insertIndexFile:(id)arg1;
- (unsigned long long)persistStartWalltime;
- (unsigned long long)specialStartWalltime;
- (struct _os_timesync_db_s { }*)timesync;

@end

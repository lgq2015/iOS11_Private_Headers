/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogEventSource : NSObject {
    NSMutableArray * _fileRefs;
    _OSLogCollectionReference * _lcr;
    _OSLogEventStoreMetadata * _lesm;
    _OSLogEventStoreTimeRef * _oldestTimeRef;
    struct _os_timesync_db_s { } * _tsdb;
}

@property (nonatomic, retain) NSMutableArray *_fileRefs;
@property (nonatomic, readonly) _OSLogCollectionReference *lcr;
@property (nonatomic, readonly) _OSLogEventStoreMetadata *lesm;
@property (nonatomic, readonly) NSDate *newestDate;
@property (nonatomic, readonly) _OSLogEventStoreTimeRef *newestTimeRef;
@property (nonatomic, readonly) NSDate *oldestDate;
@property (nonatomic, readonly) _OSLogEventStoreTimeRef *oldestTimeRef;
@property (nonatomic, readonly) struct _os_timesync_db_s { }*tsdb;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (void)_enumerateIndexFiles:(id /* block */)arg1;
- (id)_fileRefs;
- (void)_insertIndexFile:(id)arg1;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 metadata:(id)arg2 timesync:(struct _os_timesync_db_s { }*)arg3;
- (id)lcr;
- (id)lesm;
- (id)newestDate;
- (id)newestTimeRef;
- (id)oldestDate;
- (id)oldestTimeRef;
- (void)set_fileRefs:(id)arg1;
- (struct _os_timesync_db_s { }*)tsdb;
- (id)uniqueIdentifier;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFetchRecordSubResourcesOperation : _BRCOperation <BRCOperationSubclass> {
    NSError * _error;
    bool  _isDoneFetchingRecords;
    NSObject<OS_dispatch_group> * _operationGroup;
    NSObject<OS_dispatch_group> * _recordsBeingFetchedGroup;
    NSMutableDictionary * _recordsByID;
    NSMutableArray * _recordsWithXattrsToFetch;
    BRCServerZone * _serverZone;
    NSObject<OS_dispatch_source> * _xattrFetchingSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *recordsByID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_scheduleXattrFetch;
- (void)addRecord:(id)arg1;
- (void)cancel;
- (id)createActivity;
- (id)error;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithServerZone:(id)arg1;
- (void)main;
- (id)recordsByID;
- (void)removeAllRecords;
- (void)removeRecordByID:(id)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (void)startWithParentOperation:(struct _BRCOperation { Class x1; id x2; int x3; id x4; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x5; void*x6; unsigned char x7; void*x8; }*)arg1;
- (void)stop;
- (void)stopWithError:(id)arg1;
- (void)waitUntilRecordsAreFetched;

@end
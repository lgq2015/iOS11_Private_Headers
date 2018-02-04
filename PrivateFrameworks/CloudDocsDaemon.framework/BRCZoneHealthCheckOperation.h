/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCZoneHealthCheckOperation : _BRCOperation <BRCOperationSubclass> {
    CKServerChangeToken * _changeToken;
    NSMutableArray * _deletedRecordIds;
    NSMutableDictionary * _recordsByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)completedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithSession:(id)arg1 changeToken:(id)arg2;
- (void)main;
- (void)receivedUpdatedServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (bool)shouldRetryForError:(id)arg1;

@end
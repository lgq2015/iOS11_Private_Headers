/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCloudKitTransportLog : NSObject {
    IDSCKDatabase * _database;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) IDSCKDatabase *database;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)_messageFromRecord:(id)arg1;

- (void).cxx_destruct;
- (id)_recordIDsToFetch;
- (id)_transportRecordZoneID;
- (void)createZone:(id /* block */)arg1;
- (id)database;
- (void)disabled_fetchChangesSinceToken:(id)arg1 completion:(id /* block */)arg2;
- (void)dropZone:(id /* block */)arg1;
- (void)fetchChangesSinceToken:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDatabase:(id)arg1 queue:(id)arg2;
- (id)queue;

@end

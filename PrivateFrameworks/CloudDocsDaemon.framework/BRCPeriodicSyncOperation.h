/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPeriodicSyncOperation : _BRCOperation <BRCOperationSubclass> {
    CKServerChangeToken * _metadataChangeToken;
    BRCContainerScheduler * _scheduler;
    CKServerChangeToken * _zoneHealthChangeToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKServerChangeToken *metadataChangeToken;
@property (nonatomic, readonly) BRCContainerScheduler *scheduler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CKServerChangeToken *zoneHealthChangeToken;

- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithContainerScheduler:(id)arg1 metadataChangeToken:(id)arg2 zoneHealthChangeToken:(id)arg3;
- (void)main;
- (id)metadataChangeToken;
- (bool)scheduleSyncDownIfNeededForZoneID:(id)arg1 zoneIfAny:(id)arg2;
- (id)scheduler;
- (bool)shouldRetryForError:(id)arg1;
- (id)zoneHealthChangeToken;

@end

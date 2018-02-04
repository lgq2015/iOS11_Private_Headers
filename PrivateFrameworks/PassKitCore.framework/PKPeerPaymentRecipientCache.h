/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentRecipientCache : NSObject {
    NSObject<OS_dispatch_queue> * _mapAccessQueue;
    PKMapContainer * _mapContainer;
    NSTimer * _mapNeedsWriteTimer;
}

+ (id)_instanceName;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)__init;
- (bool)_canReadMap;
- (bool)_canWriteMap;
- (void)_handleDiskMapChangedNotification:(id)arg1;
- (void)_handlePurgedNotification:(id)arg1;
- (id)_keyForRecipientAddress:(id)arg1;
- (void)_setMapNeedsWrite;
- (void)_updateMapsFromDisk;
- (bool)_writeMapToDisk;
- (void)cacheRecipient:(id)arg1 forRecipientAddress:(id)arg2;
- (void)dealloc;
- (id)init;
- (bool)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)arg1;
- (void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)arg1;
- (bool)purgeCache;
- (void)purgeRecipientWithRecipientAddress:(id)arg1;
- (id)recipientForRecipientAddress:(id)arg1;

@end

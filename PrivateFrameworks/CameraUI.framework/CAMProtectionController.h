/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMProtectionController : NSObject {
    NSMutableDictionary * __burstProcessingProtectionFileDescriptorsByIdentifier;
    int  __nebulaDaemonWriteProtectionFileDescriptor;
    NSMutableSet * __nebulaDaemonWriteProtectionInflightIdentifiers;
    NSMutableDictionary * __persistenceProtectionFileDescriptorsByType;
    NSCountedSet * __persistenceProtectionInflightRequestsByType;
    NSObject<OS_dispatch_queue> * __protectionQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *_burstProcessingProtectionFileDescriptorsByIdentifier;
@property (nonatomic, readonly) int _nebulaDaemonWriteProtectionFileDescriptor;
@property (nonatomic, readonly) NSMutableSet *_nebulaDaemonWriteProtectionInflightIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *_persistenceProtectionFileDescriptorsByType;
@property (nonatomic, readonly) NSCountedSet *_persistenceProtectionInflightRequestsByType;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_protectionQueue;

+ (bool)isCameraPerformingHighPriorityDiskActivity;
+ (id)pathForProtectNebulaDaemonWritesIndicator;

- (void).cxx_destruct;
- (void)_addBurstProcessingProtectionIndicatorForIdentifier:(id)arg1;
- (void)_addPersistenceProtectionIndicatorForType:(long long)arg1 logIdentifier:(id)arg2;
- (int)_burstProcessingProtectionFileDescriptorForIdentifier:(id)arg1;
- (id)_burstProcessingProtectionFileDescriptorsByIdentifier;
- (id)_burstProcessingProtectionPathForIdentifier:(id)arg1;
- (int)_nebulaDaemonWriteProtectionFileDescriptor;
- (id)_nebulaDaemonWriteProtectionInflightIdentifiers;
- (int)_persistenceProtectionFileDescriptorForType:(long long)arg1;
- (id)_persistenceProtectionFileDescriptorsByType;
- (id)_persistenceProtectionInflightRequestsByType;
- (id)_persistenceProtectionPathForType:(long long)arg1;
- (long long)_persistenceProtectionTypeForRequest:(id)arg1;
- (id)_protectionQueue;
- (void)_protectionQueueAbortProtectionForBurstProcessing;
- (void)_protectionQueueAbortProtectionForNebulaDaemonWrites;
- (void)_protectionQueueAbortProtectionForProtectionTypes;
- (void)_protectionQueueRemoveBurstProcessingProtectionIndicatorForIdentifier:(id)arg1;
- (void)_protectionQueueRemovePersistenceProtectionIndicatorForType:(long long)arg1 unlinkFile:(bool)arg2 logIdentifier:(id)arg3;
- (void)_protectionQueueStartProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)_protectionQueueStartProtectingPersistenceForType:(long long)arg1 logIdentifier:(id)arg2;
- (void)_protectionQueueStopProtectingNebulaDaemonWritesForIdentifier:(id)arg1 closeFile:(bool)arg2;
- (void)_protectionQueueStopProtectingPersistenceForType:(long long)arg1 logIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)startProtectingBurstProcessingForIdentifier:(id)arg1;
- (void)startProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)startProtectingPersistenceForRequest:(id)arg1;
- (void)stopProtectingBurstProcessingForIdentifier:(id)arg1;
- (void)stopProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)stopProtectingPersistenceForRequest:(id)arg1;

@end

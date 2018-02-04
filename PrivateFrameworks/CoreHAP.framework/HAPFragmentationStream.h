/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPFragmentationStream : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSNumber * _currentPacketTransactionIdentifier;
    <HAPFragmentationStreamDelegate> * _delegate;
    NSMutableOrderedSet * _pendingPackets;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSNumber *currentPacketTransactionIdentifier;
@property <HAPFragmentationStreamDelegate> *delegate;
@property (nonatomic, readonly) NSMutableOrderedSet *pendingPackets;

+ (id)fragmentationPacketsForData:(id)arg1 maxLength:(unsigned long long)arg2 transactionIdentifier:(unsigned short)arg3;

- (void).cxx_destruct;
- (void)__addFragmentationPacket:(id)arg1;
- (id)__filteredPacketsWithTransactionIdentifier:(unsigned short)arg1;
- (bool)__isTransactionCompleteWithTransactionIdentifier:(unsigned short)arg1;
- (void)__removeAllPendingPacketsWithTransactionIdentifier:(unsigned short)arg1;
- (id)__transactionDataWithTransactionIdentifier:(unsigned short)arg1;
- (id)clientQueue;
- (void)close;
- (id)currentPacketTransactionIdentifier;
- (id)delegate;
- (id)init;
- (void)open;
- (id)pendingPackets;
- (void)receivedFragmentedPacket:(id)arg1;
- (void)setCurrentPacketTransactionIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

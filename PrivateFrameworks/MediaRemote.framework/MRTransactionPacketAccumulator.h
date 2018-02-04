/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionPacketAccumulator : NSObject {
    unsigned long long  _currentLength;
    NSMutableOrderedSet * _packets;
}

- (void)dealloc;
- (id)init;
- (id)mergePacket:(id)arg1;

@end

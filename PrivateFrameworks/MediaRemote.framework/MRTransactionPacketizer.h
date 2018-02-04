/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionPacketizer : NSObject {
    NSMutableDictionary * _incomingPackets;
    NSMutableArray * _outgoingPackets;
}

- (void)dealloc;
- (bool)isEmpty;
- (void)packetize:(id)arg1 packageSize:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)unpacketize:(id)arg1 completion:(id /* block */)arg2;

@end

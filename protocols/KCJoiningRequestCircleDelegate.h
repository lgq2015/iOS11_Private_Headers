/* made by EzioChiu.
 */

@protocol KCJoiningRequestCircleDelegate

@required

- (struct __OpaqueSOSPeerInfo { }*)copyPeerInfoError:(id*)arg1;
- (bool)processCircleJoinData:(NSData *)arg1 version:(int)arg2 error:(id*)arg3;

@end

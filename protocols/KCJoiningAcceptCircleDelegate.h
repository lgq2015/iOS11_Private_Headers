/* made by EzioChiu.
 */

@protocol KCJoiningAcceptCircleDelegate

@required

- (NSData *)circleGetInitialSyncViews:(id*)arg1;
- (NSData *)circleJoinDataFor:(struct __OpaqueSOSPeerInfo { }*)arg1 error:(id*)arg2;

@end

/* made by EzioChiu.
 */

@protocol VCRemoteVideoManagerDelegate <NSObject>

@required

- (void)connectionDidChangeWithLocalInterfaceType:(NSString *)arg1 remoteInterfaceType:(NSString *)arg2 streamToken:(long long)arg3;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)remoteMediaDidStall:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteScreenAttributesDidChange:(VideoAttributes *)arg1 streamToken:(long long)arg2;
- (void)remoteVideoAttributesDidChange:(VideoAttributes *)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(bool)arg1 streamToken:(long long)arg2;

@optional

- (void)remoteVideoServerDidDie;

@end

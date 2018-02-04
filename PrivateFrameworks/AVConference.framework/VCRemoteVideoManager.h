/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRemoteVideoManager : NSObject <VCRemoteVideoManagerDelegate> {
    NSMutableDictionary * _queuesForStreamTokenDict;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _remoteVideoLock;
    NSMutableDictionary * _stateCacheForStreamTokenDict;
    NSObject<OS_dispatch_queue> * _xpcCallbackQueue;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultManager;

- (void)cleanupDictionaries;
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
- (void)dealloc;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
- (bool)doesQueueExistForStreamToken:(id)arg1;
- (id)getQueueForStreamToken:(unsigned int)arg1 videoMode:(int)arg2;
- (id)init;
- (void)lock;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2 imageQueueProtected:(bool)arg3;
- (void)notifyCachedStateForStreamToken:(id)arg1;
- (void)registerBlocksForService;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)remoteMediaDidStall:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(bool)arg1 streamToken:(long long)arg2;
- (unsigned int)slotForStreamToken:(long long)arg1 videoMode:(int)arg2;
- (void)unlock;

@end

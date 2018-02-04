/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryNowPlaying.framework/AccessoryNowPlaying
 */

@interface AccessoryNowPlayingClient : NSObject <AccessoryNowPlayingXPCClientProtocol> {
    <AccessoryNowPlayingClientProtocol> * _delegate;
    <AccessoryNowPlayingXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
    bool  _shouldSendArtwork;
    NSSet * _subscriberList;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AccessoryNowPlayingClientProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <AccessoryNowPlayingXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (nonatomic) bool shouldSendArtwork;
@property (nonatomic, readonly) bool shouldSendPlaybackQueueList;
@property (nonatomic, retain) NSSet *subscriberList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelRequestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2;
- (void)connectToServer;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)mediaItemArtworkDidChange;
- (void)mediaItemAttributesDidChange:(id)arg1;
- (void)playbackAttributesDidChange:(id)arg1;
- (void)playbackQueueListDidChange;
- (void)playbackQueueListInfoResponse:(id)arg1 requestID:(id)arg2 info:(id)arg3;
- (id)remoteObject;
- (void)requestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2 startIndex:(unsigned int)arg3 upToCount:(unsigned int)arg4 infoMask:(unsigned int)arg5;
- (id)serverConnection;
- (void)setDelegate:(id)arg1;
- (void)setPlaybackElapsedTime:(id)arg1 withReply:(id /* block */)arg2;
- (void)setPlaybackQueueIndex:(id)arg1 withReply:(id /* block */)arg2;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)setShouldSendArtwork:(bool)arg1;
- (void)setSubscriberList:(id)arg1;
- (bool)shouldSendArtwork;
- (bool)shouldSendPlaybackQueueList;
- (id)subscriberList;
- (void)triggerMediaItemArtworkUpdateWithReply:(id /* block */)arg1;
- (void)triggerMediaItemAttributesUpdateWithReply:(id /* block */)arg1;
- (void)triggerPlaybackAttributesUpdateWithReply:(id /* block */)arg1;
- (void)updateSubscriberList:(id)arg1 WithReply:(id /* block */)arg2;

@end

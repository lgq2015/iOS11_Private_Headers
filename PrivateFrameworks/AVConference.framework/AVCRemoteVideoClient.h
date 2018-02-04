/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCRemoteVideoClient : NSObject {
    int  _activeVideoMode;
    NSObject<OS_dispatch_queue> * _avcRemoteVideoQueue;
    AVConferenceXPCClient * _connection;
    NSString * _connectionTypeString;
    id  _delegate;
    bool  _hasReceivedFirstFrame;
    bool  _hasReceivedLastFrame;
    bool  _isMediaStalled;
    bool  _isVideoDegraded;
    bool  _isVideoPaused;
    CALayer * _primaryCameraLayer;
    CALayer * _primaryCameraSubLayer;
    VideoAttributes * _remoteScreenAttributes;
    VideoAttributes * _remoteVideoAttributes;
    CALayer * _screenLayer;
    CALayer * _screenSubLayer;
    CALayer * _secondaryCameraLayer;
    CALayer * _secondaryCameraSubLayer;
    bool  _shouldDisplayVideoInfoLayer;
    NSDictionary * _slotsForModes;
    long long  _streamToken;
}

@property (nonatomic, copy) NSString *connectionTypeString;
@property (nonatomic, readonly) <AVCRemoteVideoClientDelegate> *delegate;
@property (nonatomic) bool hasReceivedFirstFrame;
@property (nonatomic) bool hasReceivedLastFrame;
@property (nonatomic) bool isMediaStalled;
@property (nonatomic) bool isVideoDegraded;
@property (nonatomic) bool isVideoPaused;
@property (nonatomic, retain) VideoAttributes *remoteScreenAttributes;
@property (nonatomic, retain) VideoAttributes *remoteVideoAttributes;
@property (nonatomic) bool shouldDisplayVideoInfoLayer;
@property (nonatomic, readonly) long long streamToken;

- (void)cleanupSubLayerForMode:(int)arg1;
- (id)connectionTypeString;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (void)drawText:(id)arg1 inSubLayer:(id)arg2;
- (bool)hasReceivedFirstFrame;
- (bool)hasReceivedLastFrame;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2;
- (void)insertInfoSubLayerIntoLayer:(id)arg1 videoMode:(int)arg2;
- (void)insertSubLayerInLayer:(id)arg1 videoMode:(int)arg2 videoSlot:(id)arg3;
- (bool)isMediaStalled;
- (bool)isVideoDegraded;
- (bool)isVideoPaused;
- (void)registerBlocksForNotifications;
- (id)remoteScreenAttributes;
- (id)remoteVideoAttributes;
- (void)setActiveVideoLayerForMode:(int)arg1;
- (void)setActiveVideoModeFromRemoteVideoAttribute:(id)arg1;
- (void)setConnectionTypeString:(id)arg1;
- (void)setHasReceivedFirstFrame:(bool)arg1;
- (void)setHasReceivedLastFrame:(bool)arg1;
- (void)setIsMediaStalled:(bool)arg1;
- (void)setIsVideoDegraded:(bool)arg1;
- (void)setIsVideoPaused:(bool)arg1;
- (void)setRemoteScreenAttributes:(id)arg1;
- (void)setRemoteVideoAttributes:(id)arg1;
- (void)setShouldDisplayVideoInfoLayer:(bool)arg1;
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;
- (bool)shouldDisplayVideoInfoLayer;
- (id)slotForMode:(int)arg1;
- (long long)streamToken;
- (id)subLayerForMode:(int)arg1;
- (id*)subLayerRefForMode:(int)arg1;
- (void)terminateConnection;
- (void)updateConnectionInfoWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2;

@end

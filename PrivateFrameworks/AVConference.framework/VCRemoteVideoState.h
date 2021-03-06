/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRemoteVideoState : NSObject {
    bool  _hasReceivedFirstFrame;
    bool  _isMediaStalled;
    bool  _isVideoDegraded;
    bool  _isVideoPaused;
    NSString * _localInterfaceType;
    NSString * _remoteInterfaceType;
    VideoAttributes * _remoteScreenAttributes;
    VideoAttributes * _remoteVideoAttributes;
}

@property bool hasReceivedFirstFrame;
@property bool isMediaStalled;
@property bool isVideoDegraded;
@property bool isVideoPaused;
@property (nonatomic, copy) NSString *localInterfaceType;
@property (nonatomic, copy) NSString *remoteInterfaceType;
@property (retain) VideoAttributes *remoteScreenAttributes;
@property (retain) VideoAttributes *remoteVideoAttributes;

- (void)dealloc;
- (bool)hasReceivedFirstFrame;
- (bool)isMediaStalled;
- (bool)isVideoDegraded;
- (bool)isVideoPaused;
- (id)localInterfaceType;
- (id)remoteInterfaceType;
- (id)remoteScreenAttributes;
- (id)remoteVideoAttributes;
- (void)setHasReceivedFirstFrame:(bool)arg1;
- (void)setIsMediaStalled:(bool)arg1;
- (void)setIsVideoDegraded:(bool)arg1;
- (void)setIsVideoPaused:(bool)arg1;
- (void)setLocalInterfaceType:(id)arg1;
- (void)setRemoteInterfaceType:(id)arg1;
- (void)setRemoteScreenAttributes:(id)arg1;
- (void)setRemoteVideoAttributes:(id)arg1;

@end

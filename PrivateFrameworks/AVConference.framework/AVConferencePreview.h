/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVConferencePreview : NSObject {
    bool  _isPreviewRunning;
    NSString * _localCameraUID;
    NSObject<OS_dispatch_queue> * avConferencePreviewNotificationQueue;
    NSObject<OS_dispatch_queue> * avConferencePreviewQueue;
    CALayer * caLayerBack;
    CALayer * caLayerFront;
    bool  clientWantsPreview;
    AVConferenceXPCClient * connection;
    unsigned int  connectionAttempts;
    NSObject<AVConferencePreviewClientDelegate> * delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenPortraitAspectRatio;
    VideoAttributes * localVideoAttributes;
}

@property (nonatomic, retain) NSObject<AVConferencePreviewClientDelegate> *delegate;

+ (id)AVConferencePreviewSingleton;

- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
- (void)connectLayer:(id)arg1 withSlot:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didChangeLocalScreenAttributes:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didGetSnapshot:(id)arg1;
- (void)didPausePreview;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
- (void)didStartPreview;
- (void)didStopPreview;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)getSnapshot;
- (id)init;
- (bool)isPreviewRunning;
- (unsigned int)localCamera;
- (id)localCameraUID;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (id)localVideoAttributes;
- (id)localVideoLayer:(bool)arg1;
- (void)pausePreview;
- (void)registerBlocksForDelegateNotifications;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setDelegate:(id)arg1;
- (void)setLocalCamera:(unsigned int)arg1;
- (void)setLocalCameraWithPosition:(int)arg1;
- (void)setLocalCameraWithUID:(id)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (void)setLocalVideoAttributes:(id)arg1;
- (void)setLocalVideoLayer:(id)arg1 front:(bool)arg2;
- (void)startPreview;
- (void)startPreviewUnpausing:(bool)arg1;
- (void)stopPreview;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVLocalPreviewClient : NSObject <AVConferencePreviewClientDelegate, IMSystemMonitorListener> {
    AVConferencePreview * _conferencePreview;
    bool  _shouldAlterPreviewState;
    bool  _wantsPausedPreview;
    bool  _wantsPreview;
    bool  _wantsUnpausedPreview;
}

@property (nonatomic) unsigned int cameraOrientation;
@property (nonatomic) unsigned int cameraType;
@property (nonatomic, retain) AVConferencePreview *conferencePreview;
@property (nonatomic, readonly) bool isPreviewRunning;
@property (nonatomic) IMAVCamera *localCamera;
@property (nonatomic) void*localVideoBackLayer;
@property (nonatomic) void*localVideoLayer;

+ (struct CGSize { double x1; double x2; })localPortraitAspectRatio;
+ (id)sharedInstance;

- (void)_avDaemonConnected;
- (bool)_shouldPreviewBeRunning;
- (void)_updatePreviewState;
- (void)avChat:(id)arg1 setLocalPortraitRatio:(struct CGSize { double x1; double x2; })arg2 localLandscapeRatio:(struct CGSize { double x1; double x2; })arg3;
- (void)beginAnimationToPIP;
- (void)beginAnimationToPreview;
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
- (unsigned int)cameraOrientation;
- (unsigned int)cameraType;
- (id)conferencePreview;
- (void)dealloc;
- (void)didChangeLocalScreenAttributes:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didPausePreview;
- (void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
- (void)didStartPreview;
- (void)didStopPreview;
- (void)endAnimationToPIP;
- (void)endAnimationToPreview;
- (id)init;
- (bool)isPreviewRunning;
- (id)localCamera;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (void)pausePreview;
- (void)setCameraOrientation:(unsigned int)arg1;
- (void)setCameraType:(unsigned int)arg1;
- (void)setConferencePreview:(id)arg1;
- (void)setLocalCamera:(id)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)startPreview;
- (void)stopPreview;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)systemScreenDidPowerDown;
- (void)systemScreenDidPowerUp;
- (void)unpausePreview;
- (void)updateLocalScreenAtrributes;

@end

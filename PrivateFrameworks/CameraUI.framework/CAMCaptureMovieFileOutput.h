/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureMovieFileOutput : AVCaptureMovieFileOutput <AVCaptureFileOutputRecordingDelegate> {
    CAMCaptureEngine * __captureEngine;
    NSMutableArray * __removeOnCompletionSettingsIDs;
    NSMutableDictionary * __userInfoBySettingsID;
    NSObject<OS_dispatch_queue> * __userInfoQueue;
    NSDictionary * _currentUserInfo;
    NSDictionary * _userInfoForNextCapture;
    <AVCaptureFileOutputRecordingDelegate> * _wrappedDelegate;
}

@property (nonatomic, readonly) CAMCaptureEngine *_captureEngine;
@property (nonatomic, readonly) NSMutableArray *_removeOnCompletionSettingsIDs;
@property (nonatomic, readonly) NSMutableDictionary *_userInfoBySettingsID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_userInfoQueue;
@property (nonatomic, copy) NSDictionary *currentUserInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSDictionary *userInfoForNextCapture;
@property (nonatomic) <AVCaptureFileOutputRecordingDelegate> *wrappedDelegate;

- (void).cxx_destruct;
- (id)_captureEngine;
- (id)_removeOnCompletionSettingsIDs;
- (id)_userInfoBySettingsID;
- (id)_userInfoQueue;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (id)currentUserInfo;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)initWithEngine:(id)arg1;
- (void)setCurrentUserInfo:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoForNextCapture:(id)arg1;
- (void)setWrappedDelegate:(id)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;
- (id)userInfo;
- (id)userInfoForNextCapture;
- (id)wrappedDelegate;

@end

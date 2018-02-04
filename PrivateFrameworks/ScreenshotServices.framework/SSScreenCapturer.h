/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSScreenCapturer : NSObject {
    <SSScreenCapturerDelegate> * _delegate;
    SSDittoRemoteConnection * _dittoRemoteConnection;
    SSScreenshotsWindow * _serviceWindow;
    SSSnapshotter * _snapshotter;
}

@property (nonatomic) <SSScreenCapturerDelegate> *delegate;

+ (id)_currentDisplayLayout;
+ (void)playScreenshotSound;
+ (bool)shouldUseScreenCapturerForScreenshots;

- (void).cxx_destruct;
- (void)_actuallyPerformCaptureAndSendEnvironmentDescriptionsWithPresentationOptions:(id)arg1;
- (void)_saveSnapshotToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2;
- (void)_sendEnvironmentDescriptionsWithPresentationOptions:(id)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)takeScreenshot;
- (void)takeScreenshotWithPresentationOptions:(id)arg1;

@end

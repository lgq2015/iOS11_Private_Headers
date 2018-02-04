/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLImageItemViewController : QLScrollableContentItemViewController <QLAnimationTimerObserver> {
    QLAnimatedImage * _animatedImage;
    double  _currentPlaybackTime;
    bool  _imageIsAnimated;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIImageView * _imageView;
    double  _initialTimeStamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (void)animationTimerFired:(double)arg1;
- (id)draggableView;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;

@end

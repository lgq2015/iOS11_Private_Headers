/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface TopoProgressBar : CALayer {
    id  _owningView;
    float  _progressValue;
}

@property (nonatomic) id owningView;
@property (nonatomic) float progressValue;

+ (void)deallocImageCache;
+ (int)initImageCache;

- (struct CGImage { }*)composeProgressBar;
- (void)dealloc;
- (id)initWithOwningView:(id)arg1;
- (void)layoutSublayers;
- (id)owningView;
- (struct CGSize { double x1; double x2; })preferredFrameSize;
- (float)progressValue;
- (void)setOwningView:(id)arg1;
- (void)setProgressValue:(float)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PHCloudActivityView : UIView {
    CALayer * _cloudImageLayer;
    CALayer * _completedImageLayer;
    double  _initialWidth;
    CALayer * _loadingImageLayer;
    CAPropertyAnimation * _rotationAnimation;
    unsigned long long  _state;
}

@property (nonatomic, retain) CALayer *cloudImageLayer;
@property (nonatomic, retain) CALayer *completedImageLayer;
@property (nonatomic) double initialWidth;
@property (nonatomic, retain) CALayer *loadingImageLayer;
@property (nonatomic, retain) CAPropertyAnimation *rotationAnimation;
@property (nonatomic) unsigned long long state;

+ (void)initialize;

- (void).cxx_destruct;
- (id)cloudImageLayer;
- (id)completedImageLayer;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)initialWidth;
- (void)layoutSubviews;
- (id)loadingImageLayer;
- (void)persistenceManagerDidChange:(id)arg1;
- (void)registerForNotifications;
- (id)rotationAnimation;
- (void)setCloudImageLayer:(id)arg1;
- (void)setCompletedImageLayer:(id)arg1;
- (void)setInitialWidth:(double)arg1;
- (void)setLoadingImageLayer:(id)arg1;
- (void)setRotationAnimation:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)startRotationAnimation;
- (unsigned long long)state;
- (void)stopRotationAnimation;
- (void)streamingDidStart:(id)arg1;
- (void)streamingDidStop:(id)arg1;
- (void)updateViewVisibility;

@end

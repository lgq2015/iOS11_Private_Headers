/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroCircularProgressBar : UIView

@property (nonatomic) double animationDuration;
@property (nonatomic) float progress;
@property (nonatomic, retain) UIColor *progressColor;

+ (Class)layerClass;

- (double)animationDuration;
- (id)initWithCoder:(id)arg1;
- (float)progress;
- (id)progressColor;
- (void)setAnimationDuration:(double)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressColor:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIMutableCABasicAnimationParameters : CCUICABasicAnimationParameters

@property (nonatomic) double duration;
@property (nonatomic, copy) <CCUIAnimationTimingFunctionDescription> *timingFunction;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDuration:(double)arg1;
- (void)setTimingFunction:(id)arg1;

@end

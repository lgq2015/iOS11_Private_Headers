/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGradient : NSObject

+ (id)generateGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 height:(double)arg3;
+ (id)generateRoundedCornerGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 cornerRadius:(double)arg3 height:(double)arg4;
+ (struct CGGradient { }*)newGradientWithTopColor:(id)arg1 bottomColor:(id)arg2;

@end

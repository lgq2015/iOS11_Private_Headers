/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISpringAnimation : CASpringAnimation

@property (nonatomic, retain) _UISpringAnimationDelegate *delegate;

+ (double)defaultAnimationDuration;
+ (double)defaultDamping;
+ (double)defaultStiffness;
+ (void)setDefaultDamping:(double)arg1;
+ (void)setDefaultStiffness:(double)arg1;
+ (id)springAnimationWithKeyPath:(id)arg1 toLayer:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;

- (void)addCompletionBlock:(id /* block */)arg1;
- (id)init;

@end

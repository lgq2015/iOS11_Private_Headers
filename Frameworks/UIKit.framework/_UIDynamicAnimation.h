/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDynamicAnimation : NSObject {
    unsigned int  _began;
    unsigned int  _completing;
    id /* block */  _completion;
    unsigned int  _grouped;
    unsigned int  _running;
    int  _state;
    unsigned int  _usesNSTimer;
    unsigned int  _yield;
}

@property (nonatomic, readonly) int state;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_updateAnimations:(id)arg1;
+ (void)_updateAnimations:(id)arg1 timer:(id)arg2;
+ (void)_updateAnimationsWithTimer:(id)arg1;
+ (id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(struct CGPoint { double x1; double x2; })arg5;

- (bool)_animateForInterval:(double)arg1;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (void)_callAppliers:(id /* block */)arg1 additionalEndAppliers:(id /* block */)arg2 done:(bool)arg3;
- (void)_cancelWithAppliers:(id /* block */)arg1;
- (void)_completeWithFinished:(bool)arg1;
- (bool)_isGrouped;
- (bool)_isRunning;
- (void)_setGrouped:(bool)arg1;
- (void)_setShouldYield:(bool)arg1;
- (void)_setUsesNSTimer:(bool)arg1;
- (bool)_shouldYield;
- (void)_stopAnimation;
- (bool)_usesNSTimer;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)runWithCompletion:(id /* block */)arg1;
- (void)runWithCompletion:(id /* block */)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3;
- (int)state;
- (void)stop;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)pu_setFriction:(double)arg1;

@end

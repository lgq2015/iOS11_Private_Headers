/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAction : NSObject <NSCopying, NSSecureCoding> {
    struct SCNCAction { int (**x1)(); float x2; id /* block */ x3; id x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; id /* block */ x12; struct __CFString {} *x13; long long x14; double x15; double x16; double x17; double x18; } * _caction;
}

@property (nonatomic) double duration;
@property (nonatomic) double speed;
@property (nonatomic) id /* block */ timingFunction;
@property (nonatomic) long long timingMode;

+ (id)actionNamed:(id)arg1;
+ (id)customActionWithDuration:(double)arg1 actionBlock:(id /* block */)arg2;
+ (bool)editingModeEnabled;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)group:(id)arg1;
+ (id)hide;
+ (id)javaScriptActionWithScript:(id)arg1 duration:(double)arg2;
+ (id)moveBy:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)moveTo:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;
+ (id)playAudioSource:(id)arg1 waitForCompletion:(bool)arg2;
+ (id)removeFromParentNode;
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (id)repeatActionForever:(id)arg1;
+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 duration:(double)arg3;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateToAxisAngle:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1 duration:(double)arg2;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(bool)arg5;
+ (id)runAction:(id)arg1 onChildNodeWithName:(id)arg2;
+ (id)runBlock:(id /* block */)arg1;
+ (id)runBlock:(id /* block */)arg1 queue:(id)arg2;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)sequence:(id)arg1;
+ (void)setEditingModeEnabled:(bool)arg1;
+ (bool)supportsSecureCoding;
+ (id)unhide;
+ (id)waitForDuration:(double)arg1;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;

- (struct SCNCAction { int (**x1)(); float x2; id /* block */ x3; id x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; id /* block */ x12; struct __CFString {} *x13; long long x14; double x15; double x16; double x17; double x18; }*)caction;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)duration;
- (double)durationRange;
- (void)encodeWithCoder:(id)arg1;
- (bool)finished;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCustom;
- (bool)isRelative;
- (id)parameters;
- (double)ratioForTime:(double)arg1;
- (id)reversedAction;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCppAction:(void*)arg1;
- (void)setDuration:(double)arg1;
- (void)setDurationRange:(double)arg1;
- (void)setFinished:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTimingFunction:(id /* block */)arg1;
- (void)setTimingMode:(long long)arg1;
- (double)speed;
- (void)timeJumpWithTarget:(id)arg1 timeOffset:(double)arg2;
- (id /* block */)timingFunction;
- (long long)timingMode;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)wasAddedToTarget:(id)arg1 atTime:(double)arg2;
- (void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2;
- (void)willResumeWithTarget:(id)arg1 atTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileAnimationOptions : NSObject {
    NSObject<OS_dispatch_group> * _completionGroup;
    id /* block */  _customViewAnimatorBlock;
    double  _delay;
    double  _duration;
    struct PUDisplayVelocity { 
        double x; 
        double y; 
        double scale; 
        double rotation; 
    }  _initialVelocity;
    long long  _kind;
    bool  _shouldFadeOutSnapshotAfterCompletionGroup;
    double  _springDampingRatio;
    double  _springMass;
    long long  _springNumberOfOscillations;
    double  _springStiffness;
    bool  _synchronizedWithTransition;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *completionGroup;
@property (nonatomic, copy) id /* block */ customViewAnimatorBlock;
@property (nonatomic) double delay;
@property (nonatomic) double duration;
@property (nonatomic) struct PUDisplayVelocity { double x1; double x2; double x3; double x4; } initialVelocity;
@property (nonatomic) long long kind;
@property (nonatomic) bool shouldFadeOutSnapshotAfterCompletionGroup;
@property (nonatomic) double springDampingRatio;
@property (nonatomic) double springMass;
@property (nonatomic) long long springNumberOfOscillations;
@property (nonatomic) double springStiffness;
@property (getter=isSynchronizedWithTransition, nonatomic) bool synchronizedWithTransition;

- (void).cxx_destruct;
- (id)completionGroup;
- (id /* block */)customViewAnimatorBlock;
- (double)delay;
- (double)duration;
- (struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })initialVelocity;
- (bool)isSynchronizedWithTransition;
- (long long)kind;
- (void)setCompletionGroup:(id)arg1;
- (void)setCustomViewAnimatorBlock:(id /* block */)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setInitialVelocity:(struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })arg1;
- (void)setKind:(long long)arg1;
- (void)setShouldFadeOutSnapshotAfterCompletionGroup:(bool)arg1;
- (void)setSpringDampingRatio:(double)arg1;
- (void)setSpringMass:(double)arg1;
- (void)setSpringNumberOfOscillations:(long long)arg1;
- (void)setSpringStiffness:(double)arg1;
- (void)setSynchronizedWithTransition:(bool)arg1;
- (bool)shouldFadeOutSnapshotAfterCompletionGroup;
- (double)springDampingRatio;
- (double)springMass;
- (long long)springNumberOfOscillations;
- (double)springStiffness;

@end

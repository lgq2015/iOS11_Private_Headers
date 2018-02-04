/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationProcessExitContext : NSObject {
    unsigned long long  _exitReason;
    FBProcessState * _stateBeforeExiting;
    long long  _terminationReason;
}

@property (nonatomic, readonly) int exitCode;
@property (nonatomic, readonly) unsigned long long exitReason;
@property (nonatomic, readonly) long long exitStatus;
@property (nonatomic, readonly) bool exitedNormally;
@property (nonatomic, readonly, copy) FBProcessState *stateBeforeExiting;
@property (nonatomic, readonly) long long terminationReason;
@property (nonatomic, readonly) int terminationSignal;

+ (id)descriptionForExitReason:(unsigned long long)arg1;

- (bool)consideredJetsam;
- (void)dealloc;
- (id)description;
- (int)exitCode;
- (unsigned long long)exitReason;
- (long long)exitStatus;
- (bool)exitedNormally;
- (bool)fairPlayFailure;
- (id)initWithExitReason:(unsigned long long)arg1 terminationReason:(long long)arg2 state:(id)arg3;
- (id)stateBeforeExiting;
- (long long)terminationReason;
- (int)terminationSignal;

@end

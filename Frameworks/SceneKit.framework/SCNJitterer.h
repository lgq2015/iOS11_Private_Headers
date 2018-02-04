/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNJitterer : NSObject {
    <SCNJittererDelegate> * _delegate;
    bool  _enabled;
    unsigned long long  _iteration;
    NSObject<OS_dispatch_source> * _restartSource;
    bool  _restartSourceIsSuspended;
    unsigned long long  _state;
}

@property (getter=isEnabled, nonatomic) bool enabled;

+ (void)initialize;

- (void)dealloc;
- (void)delegateWillDie;
- (id)initWithDelegate:(id)arg1;
- (bool)isAborting;
- (bool)isEnabled;
- (void)jitter;
- (void)restart;
- (void)setEnabled:(bool)arg1;
- (void)stopIfNeeded;
- (void)update;

@end

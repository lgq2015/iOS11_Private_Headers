/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSWallClockMinuteTimer : NSObject {
    SEL  _action;
    id  _target;
    NSTimer * _timer;
}

- (void).cxx_destruct;
- (void)_fireAction;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (void)startTimer;

@end

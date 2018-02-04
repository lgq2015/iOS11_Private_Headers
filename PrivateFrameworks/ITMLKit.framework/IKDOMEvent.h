/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMEvent : IKJSObject <IKJSDOMEvent> {
    bool  _bubbles;
    bool  _cancelable;
    IKDOMNode * _currentTarget;
    bool  _defaultPrevented;
    long long  _dispatchState;
    long long  _eventPhase;
    bool  _inUse;
    IKDOMNode * _target;
    NSDate * _timeStamp;
    NSString * _type;
    NSString * _xmlAttribute;
}

@property (nonatomic, readonly) bool bubbles;
@property (nonatomic, readonly) bool cancelable;
@property (nonatomic, retain) IKDOMNode *currentTarget;
@property (nonatomic) bool defaultPrevented;
@property (nonatomic) long long dispatchState;
@property (nonatomic) long long eventPhase;
@property (getter=isInUse, nonatomic) bool inUse;
@property (nonatomic, retain) IKDOMNode *target;
@property (nonatomic, readonly) NSDate *timeStamp;
@property (nonatomic, readonly, retain) NSString *type;
@property (nonatomic, readonly, retain) NSString *xmlAttribute;

- (void).cxx_destruct;
- (bool)bubbles;
- (bool)cancelable;
- (id)currentTarget;
- (bool)defaultPrevented;
- (long long)dispatchState;
- (long long)eventPhase;
- (id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(bool)arg4 isCancelable:(bool)arg5;
- (id)initWithType:(id)arg1 eventInit:(id)arg2;
- (bool)isImmediatePropagationStopped;
- (bool)isInUse;
- (bool)isPropagationStopped;
- (void)preventDefault;
- (void)setCurrentTarget:(id)arg1;
- (void)setDefaultPrevented:(bool)arg1;
- (void)setDispatchState:(long long)arg1;
- (void)setEventPhase:(long long)arg1;
- (void)setInUse:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)stopImmediatePropagation;
- (void)stopPropagation;
- (id)target;
- (id)timeStamp;
- (id)type;
- (void)updateDispatchStateWithCurrentTarget:(id)arg1 phase:(long long)arg2;
- (id)xmlAttribute;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIRequestTrigger : NSObject {
    NSMapTable * _observers;
    AFUIRequestOptions * _options;
    long long  _state;
}

@property (nonatomic, readonly) AFUIRequestOptions *options;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (void)_updateState:(long long)arg1;
- (void)addTriggerTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithRequestOptions:(id)arg1 updateHandle:(id /* block */*)arg2;
- (id)options;
- (void)removeTriggerTarget:(id)arg1;
- (long long)state;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKUIAnimationDelegate : NSObject <CAAnimationDelegate> {
    id /* block */  _completionHandler;
    id /* block */  _didStartHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didStartHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id /* block */)didStartHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDidStartHandler:(id /* block */)arg1;

@end

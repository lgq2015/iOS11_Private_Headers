/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLDelegateProxy : NSProxy {
    id  _firstDelegate;
    id  _secondDelegate;
}

@property id firstDelegate;
@property id secondDelegate;

- (void).cxx_destruct;
- (id)firstDelegate;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)secondDelegate;
- (void)setFirstDelegate:(id)arg1;
- (void)setSecondDelegate:(id)arg1;

@end

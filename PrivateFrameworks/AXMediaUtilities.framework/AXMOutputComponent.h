/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMOutputComponent : NSObject {
    long long  _componentState;
}

@property (nonatomic) long long componentState;

+ (bool)isSupported;

- (bool)canHandleRequest:(id)arg1 options:(id)arg2;
- (long long)componentState;
- (id)description;
- (void)handleRequest:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)setComponentState:(long long)arg1;
- (void)transitionToState:(long long)arg1 completion:(id /* block */)arg2;

@end

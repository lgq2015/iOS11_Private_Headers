/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory {
    _UIViewAnimationAttributes * _attributes;
}

- (void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)_initWithAttributes:(id)arg1;
- (id)_initWithSettings:(id)arg1;
- (void)dealloc;
- (double)delay;
- (id)description;
- (double)duration;
- (id)factoryWithTimingFunction:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end

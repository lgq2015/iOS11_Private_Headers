/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKUISpringAnimationFactory : PKSpringAnimationFactory <_UIBasicAnimationFactory> {
    id /* block */  _animationDelayHandler;
    double  _maximumVendedDelay;
}

@property (nonatomic, copy) id /* block */ animationDelayHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maximumVendedDelay;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(struct UIView { Class x1; }*)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationForView:(struct UIView { Class x1; }*)arg1 withKeyPath:(id)arg2;
- (id /* block */)animationDelayHandler;
- (double)maximumVendedDelay;
- (void)setAnimationDelayHandler:(id /* block */)arg1;
- (id)springAnimationForView:(struct UIView { Class x1; }*)arg1 withKeyPath:(id)arg2;

@end

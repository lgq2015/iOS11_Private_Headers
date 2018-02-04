/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentBehaviorHandler : NSObject {
    SXComponentBehavior * _behavior;
    SXComponentView * _componentView;
    bool  _isSetup;
}

@property (nonatomic, readonly) SXComponentBehavior *behavior;
@property (nonatomic, readonly) UIView *behaviorView;
@property (nonatomic, readonly) SXComponentView *componentView;
@property (nonatomic, readonly) bool isSetup;

- (void).cxx_destruct;
- (id)behavior;
- (id)behaviorView;
- (id)componentView;
- (void)destroyWithBehaviorController:(id)arg1;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (bool)isSetup;
- (void)setupWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;

@end

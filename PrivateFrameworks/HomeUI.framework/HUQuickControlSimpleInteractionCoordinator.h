/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSimpleInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlViewInteractionDelegate> {
    bool  _hasStartedSecondTouch;
    bool  _shouldDismissAutomatically;
    id  _value;
}

@property (nonatomic, readonly) UIView<HUQuickControlInteractiveView> *controlView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasStartedSecondTouch;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldDismissAutomatically;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestDismissalIfNecessary;
- (void)_setValue:(id)arg1 notifyDelegate:(bool)arg2 updateControlView:(bool)arg3;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (void)controlView:(id)arg1 interactionStateDidChange:(bool)arg2 forFirstTouch:(bool)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (bool)hasStartedSecondTouch;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;
- (bool)isUserInteractionActive;
- (bool)isUserInteractionEnabled;
- (void)setHasStartedSecondTouch:(bool)arg1;
- (void)setShouldDismissAutomatically:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldDismissAutomatically;
- (id)value;

@end

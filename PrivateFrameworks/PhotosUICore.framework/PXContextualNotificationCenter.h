/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContextualNotificationCenter : NSObject <UIGestureRecognizerDelegate> {
    _PXContextualNotificationCenterUpdatingView * _containerView;
    NSMutableSet * _contextualNotifications;
    NSMutableSet * _contextualNotificationsNeedingUpdate;
    UIPanGestureRecognizer * _panGestureRecognizer;
    PXContextualNotification * _pannedContextualNotification;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIWindow * _window;
}

@property (nonatomic, retain) _PXContextualNotificationCenterUpdatingView *containerView;
@property (nonatomic, readonly) NSMutableSet *contextualNotifications;
@property (nonatomic, readonly) NSMutableSet *contextualNotificationsNeedingUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, retain) PXContextualNotification *pannedContextualNotification;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) UIWindow *window;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)_contextualNotificationAtLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2 isInsideDismissArea:(bool*)arg3 isInsidePassthroughArea:(bool*)arg4;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_updateAppearanceStateForContextualNotification:(id)arg1;
- (void)_updateContainerView;
- (id)containerView;
- (id)contextualNotifications;
- (id)contextualNotificationsNeedingUpdate;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithWindow:(id)arg1;
- (void)invalidateContextualNotification:(id)arg1;
- (id)panGestureRecognizer;
- (id)pannedContextualNotification;
- (void)setContainerView:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setPannedContextualNotification:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;
- (void)updateContextualNotificationsIfNeeded;
- (id)window;

@end

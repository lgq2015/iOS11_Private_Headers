/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlMultiStateController : HUQuickControlController

@property (nonatomic, readonly) HFMultiStateControlItem *controlItem;

+ (Class)controlItemClass;

- (bool)_useOverrideStatusText;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (void)modelValueDidChange;
- (id)overrideStatusText;
- (id)viewProfile;

@end

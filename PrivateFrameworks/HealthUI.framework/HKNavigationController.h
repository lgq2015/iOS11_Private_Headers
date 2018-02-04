/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKNavigationController : UINavigationController <HKTabBarTapObserver, UINavigationControllerDelegate> {
    HKProfileBarButtonItem * _commonProfileBarButtonItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)commonProfileBarButtonItem;
- (void)didChangeToAnotherTab;
- (void)didTapTabBarIcon;
- (id)initLargeTitlesNavigationControllerWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;

@end

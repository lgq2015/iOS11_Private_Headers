/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupAboutViewController : UIViewController <UIScrollViewDelegate> {
    PKPaymentSetupAboutView * _aboutView;
    NSMutableString * _bodyText;
    void * _navigationController;
    bool  _navigationControllerHidesShadow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_setupNavigationItemWithTitle:(id)arg1 isPresented:(bool)arg2;
- (void)dealloc;
- (id)initForPrivacyPresented:(bool)arg1 webService:(id)arg2;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;

@end

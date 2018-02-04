/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController {
    bool  _appIsInstalled;
    SKUIItemOfferButton * _appStoreButton;
}

@property bool appIsInstalled;
@property (retain) SKUIItemOfferButton *appStoreButton;

+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (bool)appIsInstalled;
- (id)appStoreButton;
- (void)buttonPressed;
- (void)setAppIsInstalled:(bool)arg1;
- (void)setAppStoreButton:(id)arg1;
- (id)setupViewWithStyle:(unsigned long long)arg1;
- (bool)shouldTopAlignForAccessibilityContentSizes;
- (void)updateWithResult:(id)arg1;

@end

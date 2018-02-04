/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLargeTextController : PSListController {
    PSLargeTextSliderListController * _extendedRangeSliderListController;
    bool  _showsExtendedRangeSwitch;
    PSLargeTextSliderListController * _sliderListController;
    bool  _usesExtendedRange;
}

@property (nonatomic) bool showsExtendedRangeSwitch;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (void)setShowsExtendedRangeSwitch:(bool)arg1;
- (void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2;
- (bool)showsExtendedRangeSwitch;
- (void)sizeCategoryDidChange:(id)arg1;
- (id)specifiers;
- (id)usesExtendedRangeForSpecifier:(id)arg1;
- (void)viewDidLayoutSubviews;

@end

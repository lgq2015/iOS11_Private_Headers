/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
    UIButton * _contentButton;
}

+ (id)_defaultTitleAttributes;

- (void).cxx_destruct;
- (void)_configureImageOrTitleFromBarItem:(id)arg1;
- (id)_defaultTitleAttributes;
- (id)_newButton;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (void)updateButton:(id)arg1 forEnabledState:(bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(bool)arg2;

@end

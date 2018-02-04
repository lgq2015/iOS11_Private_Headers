/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKFlashButton : CMKExpandableMenuButton {
    UIImageView * __glyphView;
    UIImageView * __warningIndicatorView;
    bool  _allowsAutomaticFlash;
    bool  _unavailable;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (nonatomic, readonly) UIImageView *_warningIndicatorView;
@property (nonatomic) bool allowsAutomaticFlash;
@property (nonatomic) long long flashMode;
@property (getter=isUnavailable, nonatomic) bool unavailable;

- (void).cxx_destruct;
- (void)_commonCMKFlashButtonInitialization;
- (id)_currentGlyphImage;
- (id)_glyphView;
- (void)_updateCurrentGlyphImage;
- (id)_warningIndicatorView;
- (bool)allowsAutomaticFlash;
- (long long)flashMode;
- (id)headerView;
- (id)hiddenIndexesWhileCollapsed;
- (long long)indexForMode:(long long)arg1;
- (id)initWithExpansionOrientation:(long long)arg1;
- (bool)isUnavailable;
- (long long)modeForIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)prepareHeaderViewForExpanding:(bool)arg1;
- (void)reloadData;
- (void)setAllowsAutomaticFlash:(bool)arg1;
- (void)setExpansionOrientation:(long long)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setUnavailable:(bool)arg1;
- (bool)shouldIgnoreMenuInteraction;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (bool)wantsSelectedItemToBeVisible;

@end

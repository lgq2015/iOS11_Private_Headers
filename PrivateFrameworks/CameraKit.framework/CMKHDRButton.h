/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKHDRButton : CMKExpandableMenuButton {
    UIImageView * __glyphView;
    bool  _allowsAutomaticHDR;
}

@property (nonatomic) int HDRMode;
@property (nonatomic, readonly) UIImageView *_glyphView;
@property (nonatomic) bool allowsAutomaticHDR;

- (void).cxx_destruct;
- (int)HDRMode;
- (void)_commonCMKHDRButtonInitialization;
- (id)_currentGlyphImage;
- (id)_glyphView;
- (void)_updateCurrentGlyphImage;
- (bool)allowsAutomaticHDR;
- (id)headerView;
- (id)hiddenIndexesWhileCollapsed;
- (long long)indexForMode:(int)arg1;
- (id)initWithExpansionOrientation:(long long)arg1;
- (int)modeForIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)prepareHeaderViewForExpanding:(bool)arg1;
- (void)reloadData;
- (void)setAllowsAutomaticHDR:(bool)arg1;
- (void)setHDRMode:(int)arg1;
- (id)titleForMenuItemAtIndex:(long long)arg1;

@end

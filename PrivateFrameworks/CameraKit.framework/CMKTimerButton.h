/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTimerButton : CMKExpandableMenuButton {
    UIImageView * __glyphView;
    <CMKTimerButtonDelegate> * _delegate;
    bool  _hideOffWhenCollapsed;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (nonatomic) <CMKTimerButtonDelegate> *delegate;
@property (nonatomic) long long duration;
@property (nonatomic) bool hideOffWhenCollapsed;

- (void).cxx_destruct;
- (void)_commonCMKTimerButtonInitialization;
- (id)_glyphView;
- (id)delegate;
- (long long)duration;
- (id)headerView;
- (id)hiddenIndexesWhileCollapsed;
- (bool)hideOffWhenCollapsed;
- (id)initWithExpansionOrientation:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setDuration:(long long)arg1 animated:(bool)arg2;
- (void)setHideOffWhenCollapsed:(bool)arg1;
- (id)titleForMenuItemAtIndex:(long long)arg1;

@end

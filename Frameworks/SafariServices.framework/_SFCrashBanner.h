/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFCrashBanner : UIView {
    _UIBackdropView * _backdrop;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedLabelLayoutSize;
    UIButton * _closeButton;
    UIImageView * _closeButtonOverlayImageView;
    UILabel * _label;
    UIView * _separator;
    UIView * _separatorOverlay;
    bool  _usesLightControls;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, readonly) bool usesLightControls;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_labelLayoutSizeForWidth:(double)arg1;
- (void)_layoutCloseButton;
- (bool)_shouldUseManuallyWrappedCrashMessageForWidth:(double)arg1;
- (id)backdropGroupName;
- (id)closeButton;
- (id)initUsingLightControls:(bool)arg1;
- (void)layoutSubviews;
- (void)setBackdropGroupName:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)usesLightControls;

@end
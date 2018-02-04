/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrivacyButton : UIControl {
    UIImage * _highlightedIconImage;
    UIImage * _iconImage;
    UIImageView * _iconImageView;
}

@property (nonatomic, retain) UIImage *highlightedIconImage;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) UIImageView *iconImageView;

+ (id)highlightedIconImage;
+ (id)iconImage;

- (void)dealloc;
- (id)highlightedIconImage;
- (id)iconImage;
- (id)iconImageView;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedIconImage:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageView:(id)arg1;

@end

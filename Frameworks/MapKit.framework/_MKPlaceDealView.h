/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceDealView : MKPlaceSectionRowView {
    NSLayoutConstraint * _baselineToBottom;
    NSLayoutConstraint * _baselineToTop;
    UIImageView * _imageView;
    _MKUILabel * _textLabel;
}

@property (nonatomic, retain) NSString *dealTitle;

+ (id)_dealFont;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)dealTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDealTitle:(id)arg1;

@end

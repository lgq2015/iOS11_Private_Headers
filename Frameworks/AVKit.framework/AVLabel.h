/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVLabel : UIView {
    bool  _collapsed;
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    bool  _hidesLabelTextWhenLoadingIndicatorVisible;
    bool  _included;
    UILabel * _label;
    UIActivityIndicatorView * _loadingIndicator;
    long long  _loadingIndicatorAlignment;
    bool  _showsLoadingIndicator;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasFullScreenAppearance;
@property (nonatomic) bool hidesLabelTextWhenLoadingIndicatorVisible;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic) long long loadingIndicatorAlignment;
@property (nonatomic) bool showsLoadingIndicator;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (id)font;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (bool)hidesLabelTextWhenLoadingIndicatorVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (id)label;
- (void)layoutSubviews;
- (id)loadingIndicator;
- (long long)loadingIndicatorAlignment;
- (void)setCollapsed:(bool)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setHidesLabelTextWhenLoadingIndicatorVisible:(bool)arg1;
- (void)setIncluded:(bool)arg1;
- (void)setLoadingIndicatorAlignment:(long long)arg1;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (void)setText:(id)arg1;
- (bool)showsLoadingIndicator;
- (id)text;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

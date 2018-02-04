/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKExpandingLabel : UIView <UIGestureRecognizerDelegate> {
    unsigned long long  _expansionMode;
    bool  _isPerformingLayout;
    id /* block */  _labelResizedBlock;
    unsigned long long  _numberOfLinesWhenCollapsed;
    _MKUILabel * _showMoreLabel;
    UITapGestureRecognizer * _showMoreTapRecognizer;
    UIColor * _showMoreTextColor;
    NSTextContainer * _textContainer;
    NSLayoutManager * _textLayoutManager;
    NSTextStorage * _textStorage;
    UITextView * _textView;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ labelResizedBlock;
@property (nonatomic) unsigned long long numberOfLinesWhenCollapsed;
@property (nonatomic, retain) UIFont *showMoreFont;
@property (nonatomic, copy) NSString *showMoreText;
@property (nonatomic, retain) UIColor *showMoreTextColor;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (bool)_canShowAllText;
- (void)_expand;
- (void)_mkExpandingLabelComonInit;
- (void)_setExpansionMode:(unsigned long long)arg1;
- (void)_setTextExclusionPath;
- (id)attributedText;
- (id)font;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExpanded;
- (bool)isShowingExpanded;
- (id /* block */)labelResizedBlock;
- (void)layoutSubviews;
- (unsigned long long)numberOfLinesWhenCollapsed;
- (void)setAttributedText:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setLabelResizedBlock:(id /* block */)arg1;
- (void)setNumberOfLinesWhenCollapsed:(unsigned long long)arg1;
- (void)setShowMoreFont:(id)arg1;
- (void)setShowMoreText:(id)arg1;
- (void)setShowMoreTextColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)showMoreFont;
- (id)showMoreText;
- (id)showMoreTextColor;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)textView;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

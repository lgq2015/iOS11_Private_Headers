/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableHeaderView : UITableViewHeaderFooterView <NUIContainerStackViewDelegate> {
    <SearchUITableHeaderViewDelegate> * _delegate;
    <SFFeedbackListener> * _feedbackListener;
    UIButton * _headerOptionButton;
    unsigned long long  _headerType;
    SFResultSection * _section;
    TLKStackView * _stackView;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property <SearchUITableHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property <SFFeedbackListener> *feedbackListener;
@property (readonly) unsigned long long hash;
@property (retain) UIButton *headerOptionButton;
@property unsigned long long headerType;
@property (retain) SFResultSection *section;
@property (retain) TLKStackView *stackView;
@property (readonly) Class superclass;
@property (readonly) NSString *title;
@property (retain) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)delegate;
- (id)feedbackListener;
- (id)headerOptionButton;
- (void)headerOptionButtonPressed;
- (unsigned long long)headerType;
- (id)initWithStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)moreButtonPressed;
- (id)moreResultsPunchout;
- (id)section;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackListener:(id)arg1;
- (void)setFloating:(bool)arg1;
- (void)setHeaderOptionButton:(id)arg1;
- (void)setHeaderType:(unsigned long long)arg1;
- (void)setSection:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stackView;
- (bool)supportsShowMoreInApp;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAlignmentRectInsets;
- (void)updateHeaderButtonVisibility;
- (void)updateWithSection:(id)arg1 isExpanded:(bool)arg2;

@end

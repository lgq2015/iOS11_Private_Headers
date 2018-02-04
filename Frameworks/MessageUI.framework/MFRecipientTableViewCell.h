/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecipientTableViewCell : UITableViewCell {
    NSArray * _activeConstraints;
    UILabel * _detailLabel;
    MFComposeRecipient * _recipient;
    bool  _shouldDimIrrelevantInformation;
    bool  _shouldHideDetailLabel;
    bool  _shouldHighlightCompleteMatches;
    UIColor * _tintColor;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, readonly) UILabel *detailLabel;
@property (nonatomic) bool shouldDimIrrelevantInformation;
@property (nonatomic) bool shouldHighlightCompleteMatches;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)_attributedStringRepresentationOfCompleteMatchesForRecipient:(id)arg1 constrainedToWidth:(double)arg2 overflowRecipients:(out id*)arg3 useHighlighting:(bool)arg4;
+ (id)_attributedStringRepresentationOfPartialEmailMatchForSingleRecipient:(id)arg1 useHighlighting:(bool)arg2;
+ (double)_constrainedWidthForDetailViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2;
+ (double)_constrainedWidthForTitleViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2;
+ (id)_copyAttributedStringRepresentationOfGroupRecipient:(id)arg1 withSortedRecipientList:(id)arg2;
+ (id)_defaultTintColor;
+ (double)_deviceSpecificLayoutMargin;
+ (double)_realDetailButtonAccessoryMargin;
+ (id)_tintedAttributedString:(id)arg1 toColor:(id)arg2 shouldDim:(bool)arg3;
+ (id)cellForRecipient:(id)arg1;
+ (id)defaultDetailStringAttributes;
+ (id)defaultTitleStringAttributes;
+ (double)detailLineHeight;
+ (id)groupDetailStringAttributes;
+ (double)height;
+ (double)heightWithRecipient:(id)arg1 width:(double)arg2;
+ (id)highlightedDetailStringAttributes;
+ (id)highlightedTitleStringAttributes;
+ (id)identifier;
+ (id)labelDetailStringAttributes;
+ (id)regularTitleStringAttributes;

- (id)activeConstraints;
- (void)animateSnapshotOfLabel:(id)arg1 withBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)detailLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)recipient;
- (void)setActiveConstraints:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setRecipient:(id)arg1;
- (void)setShouldDimIrrelevantInformation:(bool)arg1;
- (void)setShouldHighlightCompleteMatches:(bool)arg1;
- (void)setTintColor:(id)arg1 animated:(bool)arg2;
- (bool)shouldDimIrrelevantInformation;
- (bool)shouldHighlightCompleteMatches;
- (id)tintColor;
- (id)titleLabel;
- (void)updateActiveConstraints;

@end

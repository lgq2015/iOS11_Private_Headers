/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryEditorMenuTableViewCell : UITableViewCell {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _centerDetailsLabel;
    NSString * _detailText;
    UILabel * _lowerDetailsLabel;
    NSString * _secondaryDetailText;
    bool  _showingActivityIndicator;
    UILabel * _titleLabel;
    UILabel * _upperDetailsLabel;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UILabel *centerDetailsLabel;
@property (nonatomic, retain) NSString *detailText;
@property (nonatomic, retain) UILabel *lowerDetailsLabel;
@property (nonatomic, retain) NSString *secondaryDetailText;
@property (getter=isShowingActivityIndicator, nonatomic) bool showingActivityIndicator;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *upperDetailsLabel;

- (void).cxx_destruct;
- (id)_disclosureChevronImage:(bool)arg1;
- (void)_updateFonts;
- (id)activityIndicator;
- (void)awakeFromNib;
- (id)centerDetailsLabel;
- (id)detailText;
- (bool)isShowingActivityIndicator;
- (id)lowerDetailsLabel;
- (void)prepareForReuse;
- (id)secondaryDetailText;
- (void)setActivityIndicator:(id)arg1;
- (void)setCenterDetailsLabel:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setLowerDetailsLabel:(id)arg1;
- (void)setSecondaryDetailText:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setShowingActivityIndicator:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpperDetailsLabel:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (id)text;
- (id)titleLabel;
- (id)upperDetailsLabel;

@end
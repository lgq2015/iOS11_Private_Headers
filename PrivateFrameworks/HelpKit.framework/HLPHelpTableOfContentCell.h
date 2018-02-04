/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpTableOfContentCell : UITableViewCell {
    bool  _RTL;
    UIImageView * _arrowImageView;
    NSLayoutConstraint * _arrowImageViewLeadingConstraint;
    NSLayoutConstraint * _arrowImageViewWidthConstraint;
    bool  _closed;
    HLPHelpItem * _helpItem;
    UILabel * _nameLabel;
    NSLayoutConstraint * _sectionImageLeadingConstraint;
    HLPURLSession * _sectionImageURLSession;
    UIImageView * _sectionImageView;
    NSLayoutConstraint * _sectionImageWidthConstraint;
    bool  _showFirstLevelIcon;
}

@property (nonatomic) bool RTL;
@property (nonatomic, retain) UIImageView *arrowImageView;
@property (nonatomic) bool closed;
@property (nonatomic, retain) HLPHelpItem *helpItem;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UIImageView *sectionImageView;
@property (nonatomic) bool showFirstLevelIcon;

- (void).cxx_destruct;
- (bool)RTL;
- (id)accessibilityLabel;
- (id)arrowImageView;
- (bool)closed;
- (void)dealloc;
- (id)helpItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)nameLabel;
- (void)prepareForReuse;
- (id)sectionImageView;
- (void)setArrowImageView:(id)arg1;
- (void)setClosed:(bool)arg1;
- (void)setHelpItem:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSectionImageView:(id)arg1;
- (void)setShowFirstLevelIcon:(bool)arg1;
- (bool)showFirstLevelIcon;
- (void)toggle;
- (void)updateConstraints;
- (void)updateFonts;
- (void)updateToggleImageAnimated:(bool)arg1;

@end

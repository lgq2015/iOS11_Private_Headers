/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarChooserHeaderView : UITableViewHeaderFooterView {
    UILabel * _primaryLabel;
    EKGroupInfoButton * _showAllButton;
    UIStackView * _stackView;
}

@property (retain) UILabel *primaryLabel;
@property (retain) EKGroupInfoButton *showAllButton;

- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_updateStackViewAxis;
- (double)contentHeight;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)primaryLabel;
- (void)setChooser:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setShowAllButton:(id)arg1;
- (id)showAllButton;

@end

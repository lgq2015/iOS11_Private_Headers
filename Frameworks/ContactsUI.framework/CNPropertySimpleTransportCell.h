/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertySimpleTransportCell : CNPropertySimpleCell {
    UIColor * _actionsColor;
    bool  _allowsActions;
    UIView * _recentCallout;
    bool  _shouldShowRecentCallout;
    bool  _shouldShowTransportButtons;
    UIImageView * _standardStarView;
    UIImageView * _starView;
    CNTransportButton * _transportIcon1;
    CNTransportButton * _transportIcon2;
    CNTransportButton * _transportIcon3;
}

@property (nonatomic, retain) UIColor *actionsColor;
@property (nonatomic) bool allowsActions;
@property (nonatomic, retain) UIView *recentCallout;
@property (nonatomic) bool shouldShowRecentCallout;
@property (nonatomic, readonly) bool shouldShowStar;
@property (nonatomic) bool shouldShowTransportButtons;
@property (nonatomic, readonly) UIImageView *standardStarView;
@property (nonatomic, readonly) CNTransportButton *standardTransportIcon;
@property (nonatomic, readonly) CNTransportButton *transportIcon1;
@property (nonatomic, readonly) CNTransportButton *transportIcon2;
@property (nonatomic, readonly) CNTransportButton *transportIcon3;

+ (void)_updateStarImageForView:(id)arg1;
+ (id)standardRecentCallout;
+ (id)standardStarView;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)actionsColor;
- (bool)allowsActions;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareForReuse;
- (id)recentCallout;
- (id)rightMostView;
- (void)setActionsColor:(id)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setCardGroupItem:(id)arg1;
- (void)setRecentCallout:(id)arg1;
- (void)setShouldShowRecentCallout:(bool)arg1;
- (void)setShouldShowTransportButtons:(bool)arg1;
- (bool)shouldPerformDefaultAction;
- (bool)shouldShowRecentCallout;
- (bool)shouldShowStar;
- (bool)shouldShowTransportButtons;
- (id)standardStarView;
- (id)standardTransportIcon;
- (void)transportButtonClicked:(id)arg1;
- (id)transportIcon1;
- (id)transportIcon2;
- (id)transportIcon3;
- (void)updateLabelNeedingHuggingContent;
- (void)updateStarIcon;
- (void)updateTransportButtons;
- (void)updateWithPropertyItem:(id)arg1;
- (id)variableConstraints;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridServiceCell : HUGridCell <HUAccessoryViewCellProtocol> {
    UIView * _accessoryView;
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _coloredDescriptionLabel;
    UIVisualEffectView * _descriptionLabelEffectView;
    HUVisualEffectContainerView * _exclamationView;
    bool  _hasUpdatedUISinceLastReuse;
    HUIconView * _iconView;
    UIView * _overrideAccessoryView;
    HFItem * _serviceItem;
    HUGridServiceCellTextView * _serviceTextView;
    bool  _shouldColorDescription;
    bool  _shouldShowLoadingState;
    <NACancelable> * _showProgressIndicatorAfterDelayToken;
    <NACancelable> * _showUpdatingStateAfterDelayToken;
    bool  _showingProgressIndicator;
    bool  _showingUpdatingState;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UILabel *coloredDescriptionLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIVisualEffectView *descriptionLabelEffectView;
@property (nonatomic) bool disableContinuousIconAnimation;
@property (nonatomic, retain) HUVisualEffectContainerView *exclamationView;
@property (nonatomic) bool hasUpdatedUISinceLastReuse;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUIconView *iconView;
@property (nonatomic, retain) HUGridServiceCellLayoutOptions *layoutOptions;
@property (nonatomic, retain) UIView *overrideAccessoryView;
@property (nonatomic, retain) HFItem *serviceItem;
@property (nonatomic, retain) HUGridServiceCellTextView *serviceTextView;
@property (nonatomic) bool shouldColorDescription;
@property (nonatomic) bool shouldShowLoadingState;
@property (nonatomic) bool showProgressIndicatorAfterDelay;
@property (nonatomic, retain) <NACancelable> *showProgressIndicatorAfterDelayToken;
@property (nonatomic) bool showUpdatingStateAfterDelay;
@property (nonatomic, retain) <NACancelable> *showUpdatingStateAfterDelayToken;
@property (nonatomic) bool showingProgressIndicator;
@property (nonatomic) bool showingUpdatingState;
@property (readonly) Class superclass;

+ (id)_iconTintColor;
+ (Class)layoutOptionsClass;

- (void).cxx_destruct;
- (void)_createExclamationViewIfNecessary;
- (id)_descriptionTextAttributesWithColor:(id)arg1;
- (void)_setupServiceCell;
- (id)_textConfiguration;
- (void)_updateAccessoryView;
- (void)_updateIconAnimated:(bool)arg1;
- (void)_updateSecondaryContentDisplayStyle;
- (void)_updateText;
- (id)accessoryView;
- (id)activityIndicator;
- (id)coloredDescriptionLabel;
- (id)descriptionLabelEffectView;
- (bool)disableContinuousIconAnimation;
- (void)displayStyleDidChange;
- (id)exclamationView;
- (bool)hasUpdatedUISinceLastReuse;
- (id)iconView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutOptionsDidChange;
- (void)layoutSubviews;
- (id)overrideAccessoryView;
- (void)prepareForReuse;
- (id)serviceItem;
- (id)serviceTextView;
- (void)setAccessoryView:(id)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setColoredDescriptionLabel:(id)arg1;
- (void)setDescriptionLabelEffectView:(id)arg1;
- (void)setDisableContinuousIconAnimation:(bool)arg1;
- (void)setExclamationView:(id)arg1;
- (void)setHasUpdatedUISinceLastReuse:(bool)arg1;
- (void)setIconView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setOverrideAccessoryView:(id)arg1;
- (void)setServiceItem:(id)arg1;
- (void)setServiceTextView:(id)arg1;
- (void)setShouldColorDescription:(bool)arg1;
- (void)setShouldShowLoadingState:(bool)arg1;
- (void)setShowProgressIndicatorAfterDelay:(bool)arg1;
- (void)setShowProgressIndicatorAfterDelayToken:(id)arg1;
- (void)setShowUpdatingStateAfterDelay:(bool)arg1;
- (void)setShowUpdatingStateAfterDelayToken:(id)arg1;
- (void)setShowingProgressIndicator:(bool)arg1;
- (void)setShowingUpdatingState:(bool)arg1;
- (bool)shouldColorDescription;
- (bool)shouldShowLoadingState;
- (bool)showProgressIndicatorAfterDelay;
- (id)showProgressIndicatorAfterDelayToken;
- (bool)showUpdatingStateAfterDelay;
- (id)showUpdatingStateAfterDelayToken;
- (bool)showingProgressIndicator;
- (bool)showingUpdatingState;
- (void)updateUIWithAnimation:(bool)arg1;

@end

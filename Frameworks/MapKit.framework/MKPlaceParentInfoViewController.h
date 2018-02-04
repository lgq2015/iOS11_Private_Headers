/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceParentInfoViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    bool  _accessibilityMode;
    NSTextAttachment * _attachment;
    NSLayoutConstraint * _baselineConstraint;
    NSLayoutConstraint * _bottomConstraint;
    MKMapItem * _childMapItem;
    <MKPlaceParentInfoViewControllerDelegate> * _delegate;
    UIImage * _iconImage;
    UIImageView * _iconImageView;
    NSLayoutConstraint * _leadingLayoutGuideConstraint;
    MKMapItem * _parentMapItem;
    bool  _resizableViewsDisabled;
    MKPlaceSectionRowView * _sectionRow;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    NSLayoutConstraint * _topConstraint;
}

@property (nonatomic) bool accessibilityMode;
@property (nonatomic, retain) NSLayoutConstraint *baselineConstraint;
@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, retain) MKMapItem *childMapItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceParentInfoViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) NSLayoutConstraint *leadingLayoutGuideConstraint;
@property (nonatomic, retain) MKMapItem *parentMapItem;
@property (nonatomic) bool resizableViewsDisabled;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *topConstraint;

+ (id)parentInfoWithPlaceItem:(id)arg1;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)_titleAttributedString;
- (bool)accessibilityMode;
- (void)addConstraints;
- (id)baselineConstraint;
- (id)bottomConstraint;
- (id)childMapItem;
- (id)delegate;
- (void)fetchParentItem;
- (id)iconImage;
- (id)iconImageView;
- (id)infoCardChildPossibleActions;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithChild:(id)arg1;
- (id)leadingLayoutGuideConstraint;
- (id)parentIdentifiers;
- (id)parentMapItem;
- (bool)resizableViewsDisabled;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setAccessibilityMode:(bool)arg1;
- (void)setBaselineConstraint:(id)arg1;
- (void)setBottomConstraint:(id)arg1;
- (void)setChildMapItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setLeadingLayoutGuideConstraint:(id)arg1;
- (void)setParentMapItem:(id)arg1;
- (void)setResizableViewsDisabled:(bool)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopConstraint:(id)arg1;
- (void)setupData;
- (void)showData;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)topConstraint;
- (void)updateAccessibilityMode;
- (void)updateConstraintsValue;
- (void)updateLabelsColor;
- (id)venueTitleForMapItem:(id)arg1;
- (void)viewDidLoad;

@end

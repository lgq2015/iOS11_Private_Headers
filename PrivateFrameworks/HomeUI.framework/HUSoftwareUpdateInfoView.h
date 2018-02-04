/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateInfoView : UIView <HUCellProtocol, HUInlineWebContainerViewDelegate, UIScrollViewDelegate> {
    HUSoftwareUpdateAnimatedIcon * _animatedGearView;
    UIImage * _gearBackgroundImage;
    UIImageView * _gearBackgroundImageView;
    <HUSoftwareUpdateInternalResizingDelegate> * _internalViewResizingDelegate;
    HFItem * _item;
    UIStackView * _labelStackView;
    UILabel * _publisherNameLabel;
    NSLayoutConstraint * _releaseNotesSummaryHeightConstraint;
    HUInlineWebContainerView * _releaseNotesSummaryView;
    UILabel * _sizeLabel;
    UILabel * _updateNameLabel;
}

@property (nonatomic, retain) HUSoftwareUpdateAnimatedIcon *animatedGearView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *gearBackgroundImage;
@property (nonatomic, retain) UIImageView *gearBackgroundImageView;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUSoftwareUpdateInternalResizingDelegate> *internalViewResizingDelegate;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) UIStackView *labelStackView;
@property (nonatomic, retain) UILabel *publisherNameLabel;
@property (nonatomic, retain) NSLayoutConstraint *releaseNotesSummaryHeightConstraint;
@property (nonatomic, retain) HUInlineWebContainerView *releaseNotesSummaryView;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) UILabel *sizeLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *updateNameLabel;

- (void).cxx_destruct;
- (id)_gearBackgroundImage;
- (id)animatedGearView;
- (id)gearBackgroundImage;
- (id)gearBackgroundImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)inlineWebContainerViewDidFinishLoadingContent:(id)arg1;
- (id)internalViewResizingDelegate;
- (id)item;
- (id)labelStackView;
- (id)publisherNameLabel;
- (id)releaseNotesSummaryHeightConstraint;
- (id)releaseNotesSummaryView;
- (void)setAnimatedGearView:(id)arg1;
- (void)setGearBackgroundImage:(id)arg1;
- (void)setGearBackgroundImageView:(id)arg1;
- (void)setInternalViewResizingDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setLabelStackView:(id)arg1;
- (void)setPublisherNameLabel:(id)arg1;
- (void)setReleaseNotesSummaryHeightConstraint:(id)arg1;
- (void)setReleaseNotesSummaryView:(id)arg1;
- (void)setSizeLabel:(id)arg1;
- (void)setUpdateNameLabel:(id)arg1;
- (id)sizeLabel;
- (void)updateConstraints;
- (id)updateNameLabel;
- (void)updateUIWithAnimation:(bool)arg1;

@end

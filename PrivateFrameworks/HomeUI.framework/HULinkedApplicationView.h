/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULinkedApplicationView : UIView <HUCellProtocol> {
    NSString * _bundleID;
    NSArray * _currentConstraints;
    UIImageView * _iconView;
    UILabel * _installedLabel;
    bool  _isInstalled;
    HFItem * _item;
    UILabel * _nameLabel;
    UILabel * _priceLabel;
    UILabel * _publisherLabel;
    HULinkedApplicationRatingView * _ratingView;
    NSURL * _storeURL;
    UIButton * _viewButton;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSArray *currentConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UILabel *installedLabel;
@property (nonatomic) bool isInstalled;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *priceLabel;
@property (nonatomic, retain) UILabel *publisherLabel;
@property (nonatomic, retain) HULinkedApplicationRatingView *ratingView;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) NSURL *storeURL;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *viewButton;

- (void).cxx_destruct;
- (void)_viewButtonTapped:(id)arg1;
- (id)bundleID;
- (id)currentConstraints;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)installedLabel;
- (bool)isInstalled;
- (id)item;
- (id)nameLabel;
- (id)priceLabel;
- (id)publisherLabel;
- (id)ratingView;
- (void)setBundleID:(id)arg1;
- (void)setCurrentConstraints:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setInstalledLabel:(id)arg1;
- (void)setIsInstalled:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPriceLabel:(id)arg1;
- (void)setPublisherLabel:(id)arg1;
- (void)setRatingView:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (void)setViewButton:(id)arg1;
- (id)storeURL;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)viewButton;

@end

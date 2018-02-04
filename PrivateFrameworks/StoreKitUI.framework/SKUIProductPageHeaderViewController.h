/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageHeaderViewController : UIViewController <SKUIItemStateCenterObserver, UIPopoverControllerDelegate> {
    UIPopoverController * _activityPopoverController;
    SKUIItemArtworkContext * _artworkContext;
    bool  _askPermission;
    SKUIClientContext * _clientContext;
    SKUIContentRatingArtworkResourceLoader * _contentRatingArtworkLoader;
    <SKUIProductPageHeaderViewDelegate> * _delegate;
    SKUIProductPageHeaderFloatingView * _floatingView;
    SKUIProductPageHeaderView * _headerView;
    UIImage * _iconImage;
    SKUIItem * _item;
    long long  _itemIdentifier;
    SSVLoadURLOperation * _loadIconOperation;
    SSVLoadURLOperation * _loadUberOperation;
    NSOperationQueue * _operationQueue;
    bool  _performArtistActionOnLoad;
    long long  _personalizationState;
    SKUIItemOffer * _personalizedOffer;
    UIImage * _placeholderImage;
    SKUIProductPage * _productPage;
    UIImage * _uberImage;
    bool  _wantsActivityViewController;
}

@property (nonatomic) bool askPermission;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIProductPageHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SKUIProductPageHeaderFloatingView *floatingView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *iconImage;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) long long selectedSectionIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeItem;
- (id)_ageBandString;
- (void)_artistButtonAction:(id)arg1;
- (id)_artworkContext;
- (id)_contentRatingResourceLoader;
- (void)_destroyPopoverController;
- (void)_disableItemOfferButtonWithTitle:(id)arg1 animated:(bool)arg2;
- (bool)_isRestricted;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_loadUberImageIfAvailable;
- (void)_reloadItemStateAnimated:(bool)arg1;
- (void)_sectionControlAction:(id)arg1;
- (id)_segmentedControlTitles;
- (void)_sendDidReloadOffer;
- (void)_setArtworkWithImage:(id)arg1 error:(id)arg2;
- (void)_setItemState:(id)arg1 animated:(bool)arg2;
- (void)_setPersonalizedOffer:(id)arg1;
- (void)_setUberWithImage:(id)arg1 error:(id)arg2;
- (void)_shareButtonAction:(id)arg1;
- (void)_showActivityViewControllerFromView:(id)arg1;
- (void)_showAskPermissionBanner;
- (void)_showSynthesizedItemStateWithFlag:(unsigned long long)arg1 animated:(bool)arg2;
- (bool)askPermission;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)floatingView;
- (id)iconImage;
- (id)initWithItem:(id)arg1;
- (id)item;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)loadView;
- (id)operationQueue;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)reloadData;
- (long long)selectedSectionIndex;
- (void)setAskPermission:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setProductPage:(id)arg1;
- (void)setSelectedSectionIndex:(long long)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

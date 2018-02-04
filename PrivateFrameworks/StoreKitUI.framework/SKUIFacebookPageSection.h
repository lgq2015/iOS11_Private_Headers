/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIFacebookPageSection : SKUIStorePageSection {
    ACAccountStore * _accountStore;
    BOOL  _facebookAccountsExist;
    SKUIReviewsFacebookView * _facebookView;
    bool  _isLoadingLikeStatus;
    SKUIViewElementLayoutContext * _layoutContext;
    SKUIFacebookLikeStatus * _likeStatus;
}

@property (nonatomic, readonly) SKUIFacebookPageComponent *pageComponent;

- (void).cxx_destruct;
- (id)_accountStore;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_applyColorSchemeToFacebookView:(id)arg1;
- (void)_changeStatusToUserLiked:(bool)arg1;
- (long long)_facebookAccountsExist;
- (id)_facebookView;
- (void)_finishLookupWithStatus:(id)arg1 error:(id)arg2;
- (void)_reloadCollectionViewSection;
- (void)_reloadLikeStatus;
- (void)_resetState;
- (void)_toggleLikeAction:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (long long)applyUpdateType:(long long)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (void)willAppearInContext:(id)arg1;

@end

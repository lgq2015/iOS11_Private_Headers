/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUItemTableViewController : SUTableViewController {
    SUDocumentInteractionSession * _documentInteractionSession;
}

- (void)_chooseApplicationToOpenDocumentAtIndexPath:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_hidePurchaseConfirmationForButton:(id)arg1;
- (id)_preferredApplicationFromCandidates:(id)arg1;
- (void)_promptToOpenUTI:(id)arg1 fromIndexPath:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_purchasedItemSetChangedNotification:(id)arg1;
- (void)_removeTouchCaptureView;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_showPurchaseConfirmationForButton:(id)arg1;
- (id)_tableCellForButton:(id)arg1;
- (void)_touchCaptureAction:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)itemAtIndexPath:(id)arg1;
- (void)itemOfferButtonAction:(id)arg1;
- (bool)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2;
- (bool)purchaseItemAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)viewWillDisappear:(bool)arg1;

@end

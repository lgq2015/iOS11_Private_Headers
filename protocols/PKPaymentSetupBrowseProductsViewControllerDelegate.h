/* made by EzioChiu.
 */

@protocol PKPaymentSetupBrowseProductsViewControllerDelegate <NSObject>

@required

- (void)browseProductsViewController:(void *)arg1 didSelectProduct:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: PKPaymentSetupBrowseProductsViewController *, PKPaymentSetupProduct *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end

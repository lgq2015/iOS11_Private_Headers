/* made by EzioChiu.
 */

@protocol PKAddressSearcherViewControllerDelegate

@required

- (void)addressSearcherViewController:(PKAddressSearcherViewController *)arg1 selectedContact:(CNContact *)arg2;
- (void)addressSearcherViewControllerDidCancel:(PKAddressSearcherViewController *)arg1;

@end

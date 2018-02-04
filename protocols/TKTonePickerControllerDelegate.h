/* made by EzioChiu.
 */

@protocol TKTonePickerControllerDelegate <NSObject>

@optional

- (void)tonePickerController:(void *)arg1 didDeletePickerRowItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: TKTonePickerController *, TKPickerRowItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)tonePickerController:(TKTonePickerController *)arg1 didInsertPickerRowItems:(NSArray *)arg2 andTonePickerSectionItems:(NSArray *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateCheckedStatus:(bool)arg2 ofTonePickerItem:(TKTonePickerItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateDetailText:(NSString *)arg2 ofTonePickerItem:(TKTonePickerItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateDownloadProgressOfTonePickerItem:(TKTonePickerItem *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateFooterText:(NSString *)arg2 ofTonePickerSectionItem:(TKTonePickerSectionItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateTonePickerItem:(TKTonePickerItem *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;
- (void)tonePickerControllerDidReloadTones:(TKTonePickerController *)arg1;

@end

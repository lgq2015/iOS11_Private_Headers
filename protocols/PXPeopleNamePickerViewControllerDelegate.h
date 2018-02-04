/* made by EzioChiu.
 */

@protocol PXPeopleNamePickerViewControllerDelegate <NSObject>

@required

- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickContact:(CNContact *)arg2;
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickPerson:(PHPerson *)arg2;
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickString:(NSString *)arg2;

@optional

- (void)namePickerControllerDidEndEditing:(PXPeopleNamePickerViewController *)arg1;
- (void)namePickerControllerDidStartEditing:(PXPeopleNamePickerViewController *)arg1;
- (void)namePickerControllerWillChangeText:(PXPeopleNamePickerViewController *)arg1;

@end

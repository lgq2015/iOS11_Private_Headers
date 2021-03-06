/* made by EzioChiu.
 */

@protocol SXMediaSelectionViewControllerDataSource <NSObject>

@required

- (NSString *)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 displayNameForMediaSelectionGroup:(unsigned long long)arg2;
- (NSString *)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 displayNameForMediaSelectionOptionAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 indexOfSelectedMediaSelectionOptionInGroup:(unsigned long long)arg2;
- (unsigned long long)mediaSelectionViewController:(SXMediaSelectionViewController *)arg1 numberOfMediaSelectionOptionsInGroup:(unsigned long long)arg2;
- (unsigned long long)numberOfMediaSelectionGroupsInMediaSelectionViewController:(SXMediaSelectionViewController *)arg1;

@end

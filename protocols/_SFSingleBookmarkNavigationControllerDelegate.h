/* made by EzioChiu.
 */

@protocol _SFSingleBookmarkNavigationControllerDelegate

@required

- (void)addBookmarkNavController:(_SFSingleBookmarkNavigationController *)arg1 didFinishWithResult:(bool)arg2;
- (bool)addBookmarkNavControllerCanSaveBookmarkChanges:(_SFSingleBookmarkNavigationController *)arg1;

@end

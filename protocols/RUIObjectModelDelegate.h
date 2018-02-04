/* made by EzioChiu.
 */

@protocol RUIObjectModelDelegate <NSObject>

@required

- (UINavigationController *)parentViewControllerForObjectModel:(RUIObjectModel *)arg1;

@optional

- (void)objectModel:(RUIObjectModel *)arg1 configureTableRow:(RUITableViewRow *)arg2 page:(RUIPage *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 configureTableSection:(RUITableViewSection *)arg2 page:(RUIPage *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 configureTableView:(RUITableView *)arg2 page:(RUIPage *)arg3;
- (Class)objectModel:(RUIObjectModel *)arg1 customFooterClassForSection:(RUITableViewSection *)arg2;
- (Class)objectModel:(RUIObjectModel *)arg1 customHeaderClassForSection:(RUITableViewSection *)arg2;
- (Class)objectModel:(RUIObjectModel *)arg1 customTableCellClassForTableViewRow:(RUITableViewRow *)arg2;
- (void)objectModel:(RUIObjectModel *)arg1 didNavigateBackFromController:(UIViewController *)arg2 withGesture:(bool)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 elementDidChange:(RUIElement *)arg2;
- (bool)objectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2 deletedTableRow:(RUITableViewRow *)arg3 atIndexPath:(NSIndexPath *)arg4 withName:(NSString *)arg5;
- (bool)objectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2 deletedTableRow:(RUITableViewRow *)arg3 atIndexPath:(NSIndexPath *)arg4 withURL:(NSURL *)arg5 httpMethod:(NSString *)arg6;
- (void)objectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2 toggledEditing:(bool)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 pressedButton:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 pressedLink:(NSURL *)arg2 httpMethod:(NSString *)arg3;
- (void)objectModel:(void *)arg1 pressedLink:(void *)arg2 httpMethod:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: RUIObjectModel *, NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)objectModel:(RUIObjectModel *)arg1 shouldDisplayNamedElement:(RUIElement *)arg2 page:(RUIPage *)arg3;
- (bool)objectModel:(RUIObjectModel *)arg1 shouldShowModalHTMLViewWithURL:(NSURL *)arg2;
- (UIView *)objectModel:(RUIObjectModel *)arg1 tableFooterViewForAttributes:(NSDictionary *)arg2 page:(RUIPage *)arg3;
- (UIView *)objectModel:(RUIObjectModel *)arg1 tableHeaderViewForAttributes:(NSDictionary *)arg2 page:(RUIPage *)arg3;
- (void)objectModel:(RUIObjectModel *)arg1 willLoadLinkURL:(NSURL *)arg2 attributes:(NSDictionary *)arg3;
- (void)objectModelDidChange:(RUIObjectModel *)arg1;
- (void)objectModelPressedBack:(RUIObjectModel *)arg1;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(RUIObjectModel *)arg1 page:(RUIPage *)arg2;
- (UIViewController *)viewControllerForAlertPresentation;

@end

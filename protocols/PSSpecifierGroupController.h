/* made by EzioChiu.
 */

@protocol PSSpecifierGroupController <NSObject>

@required

- (id)initWithListController:(PSListController *)arg1 groupSpecifier:(PSSpecifier *)arg2;
- (NSArray *)specifiers;

@end

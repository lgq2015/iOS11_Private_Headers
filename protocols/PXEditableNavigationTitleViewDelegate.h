/* made by EzioChiu.
 */

@protocol PXEditableNavigationTitleViewDelegate <NSObject>

@optional

- (NSString *)editableNavigationTitleView:(PXEditableNavigationTitleView *)arg1 validateNewText:(NSString *)arg2;
- (void)editableNavigationTitleViewDidEndEditing:(PXEditableNavigationTitleView *)arg1;

@end

/* made by EzioChiu.
 */

@protocol SUMenuViewControllerDelegate <NSObject>

@optional

- (void)menuViewController:(SUMenuViewController *)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)menuViewController:(SUMenuViewController *)arg1 didTapButton:(SUProtocolButton *)arg2;
- (void)menuViewControllerDidCancel:(SUMenuViewController *)arg1;

@end

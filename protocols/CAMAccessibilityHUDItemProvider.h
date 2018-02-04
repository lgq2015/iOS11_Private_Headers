/* made by EzioChiu.
 */

@protocol CAMAccessibilityHUDItemProvider <NSObject>

@required

- (UIAccessibilityHUDItem *)hudItemForAccessibilityHUDManager:(CAMBarsAccessibilityHUDManager *)arg1;
- (void)selectedByAccessibilityHUDManager:(CAMBarsAccessibilityHUDManager *)arg1;

@end

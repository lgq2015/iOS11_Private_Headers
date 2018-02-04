/* made by EzioChiu.
 */

@protocol SXItemizedScrollViewDataSource <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemizedScrollView:(SXItemizedScrollView *)arg1 frameForViewAtIndex:(unsigned long long)arg2;
- (UIView *)itemizedScrollView:(SXItemizedScrollView *)arg1 viewAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfViewsInItemizedScrollView:(SXItemizedScrollView *)arg1;

@optional

- (double)gutterBetweenItemsInNotPagingItemizedScrollView:(SXItemizedScrollView *)arg1;
- (bool)itemizedScrollView:(SXItemizedScrollView *)arg1 isAllowedToAddViewInHierarchy:(unsigned long long)arg2;
- (bool)itemizedScrollViewWillReindex:(SXItemizedScrollView *)arg1;

@end

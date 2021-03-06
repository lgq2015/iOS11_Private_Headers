/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIWidthLimitedLabel : UILabel <SearchUIWidthLimitedView> {
    double  width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property double width;

- (struct CGSize { double x1; double x2; })originalFittingSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (double)width;

@end

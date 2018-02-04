/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIWidgetGridView : UIView {
    double  _centerAdjustmentAllowed;
    double  _currentLabelOutset;
    unsigned long long  _currentLayout;
    <NUIWidgetGridViewDataSource> * _dataSource;
    <NUIWidgetGridViewDelegate> * _delegate;
    NUIContainerGridView * _gridView;
    long long  _imageStyle;
    NSArray * _itemViews;
    struct CGSize { 
        double width; 
        double height; 
    }  _labelSizes;
    long long  _subtitleStyle;
    long long  _titleStyle;
}

@property (nonatomic) double centerAdjustmentAllowed;
@property (nonatomic, readonly) double currentLabelOutset;
@property (nonatomic) <NUIWidgetGridViewDataSource> *dataSource;
@property (nonatomic) <NUIWidgetGridViewDelegate> *delegate;
@property (nonatomic) long long imageStyle;
@property (nonatomic) long long subtitleStyle;
@property (nonatomic) long long titleStyle;

+ (double)itemWidth;
+ (unsigned long long)maxNumberOfItems;

- (void).cxx_destruct;
- (void)_createGridViewIfNeeded;
- (struct { double x1; double x2; })borrowableSpaceForCellAtIndex:(unsigned long long)arg1;
- (id)cellForGridViewItemAtIndex:(long long)arg1;
- (double)centerAdjustmentAllowed;
- (void)contentSizeDidChange;
- (double)currentLabelOutset;
- (long long)currentLayout;
- (id)dataSource;
- (id)delegate;
- (struct { double x1; double x2; })entitledExtraSpaceForCellAtIndex:(unsigned long long)arg1;
- (void)generateItems;
- (double)horizontalMargin;
- (long long)imageStyle;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (unsigned long long)itemsPerRow;
- (double)labelMinSpacing;
- (double)labelOutset;
- (void)layoutSubviews;
- (unsigned long long)maxNumberOfItems;
- (void)reloadData;
- (void)setCenterAdjustmentAllowed:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageStyle:(long long)arg1;
- (void)setSubtitleStyle:(long long)arg1;
- (void)setTitleStyle:(long long)arg1;
- (long long)subtitleStyle;
- (long long)titleStyle;

@end

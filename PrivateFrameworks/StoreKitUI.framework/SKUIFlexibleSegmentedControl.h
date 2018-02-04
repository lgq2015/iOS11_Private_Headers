/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIFlexibleSegmentedControl : UIView {
    <SKUIFlexibleSegmentedControlDelegate> * _delegate;
    double  _desiredSegmentWidth;
    bool  _isMoreListSelected;
    NSArray * _itemTitles;
    long long  _maximumNumberOfVisibleItems;
    NSString * _moreListTitle;
    long long  _previousSelectedSegmentIndex;
    UISegmentedControl * _segmentedControl;
    long long  _selectedSegmentIndex;
    bool  _sizesSegmentsToFitWidth;
}

@property (nonatomic) <SKUIFlexibleSegmentedControlDelegate> *delegate;
@property (nonatomic) double desiredSegmentWidth;
@property (nonatomic, copy) NSArray *itemTitles;
@property (nonatomic) long long maximumNumberOfVisibleItems;
@property (nonatomic, readonly) long long moreListIndex;
@property (nonatomic, copy) NSString *moreListTitle;
@property (nonatomic) long long selectedSegmentIndex;
@property (nonatomic) bool sizesSegmentsToFitWidth;

- (void).cxx_destruct;
- (void)_configureSegmentedControl:(id)arg1 withTitles:(id)arg2 boundingSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_setTitles:(id)arg1 forSegmentedControl:(id)arg2;
- (void)_valueChangeAction:(id)arg1;
- (void)cancelMoreList;
- (void)dealloc;
- (id)delegate;
- (double)desiredSegmentWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSegmentWithIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemTitles;
- (void)layoutSubviews;
- (long long)maximumNumberOfVisibleItems;
- (long long)moreListIndex;
- (id)moreListTitle;
- (long long)selectedSegmentIndex;
- (void)setDelegate:(id)arg1;
- (void)setDesiredSegmentWidth:(double)arg1;
- (void)setItemTitles:(id)arg1;
- (void)setMaximumNumberOfVisibleItems:(long long)arg1;
- (void)setMoreListTitle:(id)arg1;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)setSizesSegmentsToFitWidth:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)sizesSegmentsToFitWidth;

@end

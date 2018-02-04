/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKFontSizePicker : UIControl <UICollectionViewDataSource, UICollectionViewDelegate> {
    id /* block */  _didEndTrackingUpdates;
    UILabel * _label;
    UICollectionView * _sizeList;
    NSArray * _sizeListValues;
    UISlider * _slider;
    UIStepper * _stepper;
    long long  _style;
    double  _value;
    id /* block */  _willBeginTrackingUpdates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didEndTrackingUpdates;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UICollectionView *sizeList;
@property (nonatomic, retain) NSArray *sizeListValues;
@property (nonatomic, retain) UISlider *slider;
@property (nonatomic, retain) UIStepper *stepper;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic) double value;
@property (nonatomic, copy) id /* block */ willBeginTrackingUpdates;

- (void).cxx_destruct;
- (void)_decreaseSize:(id)arg1;
- (void)_handleValueChanged:(id)arg1;
- (void)_increaseSize:(id)arg1;
- (struct CGSize { double x1; double x2; })_itemSizeInContainer;
- (void)_selectSizeInList;
- (void)_sliderTouchDown:(id)arg1;
- (void)_sliderTouchUp:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id /* block */)didEndTrackingUpdates;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)label;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setDidEndTrackingUpdates:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setSizeList:(id)arg1;
- (void)setSizeListValues:(id)arg1;
- (void)setSlider:(id)arg1;
- (void)setStepper:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setValue:(double)arg1;
- (void)setWillBeginTrackingUpdates:(id /* block */)arg1;
- (id)sizeList;
- (id)sizeListValues;
- (id)slider;
- (id)stepper;
- (long long)style;
- (double)value;
- (id /* block */)willBeginTrackingUpdates;

@end

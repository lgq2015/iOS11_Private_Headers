/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailComplicationPickerCell : NTKCDetailTableViewCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSArray * _complications;
    bool  _dateSlot;
    <NTKCFaceDetailComplicationPickerCellDelegate> * _delegate;
    UIPickerView * _picker;
    long long  _selectedIndex;
    CAShapeLayer * _selectionIndicator;
    NSString * _slot;
}

@property (nonatomic, readonly) NSArray *complications;
@property (nonatomic, readonly) bool dateSlot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailComplicationPickerCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPickerView *picker;
@property (nonatomic, retain) NTKComplication *selectedComplication;
@property (nonatomic, retain) CAShapeLayer *selectionIndicator;
@property (nonatomic, readonly) NSString *slot;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
+ (double)rowHeight;

- (void).cxx_destruct;
- (id)_nameForRow:(long long)arg1;
- (id)complications;
- (bool)dateSlot;
- (id)delegate;
- (id)init;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)picker;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)selectedComplication;
- (id)selectionIndicator;
- (void)setComplications:(id)arg1 forSlot:(id)arg2 dateSlot:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setPicker:(id)arg1;
- (void)setSelectedComplication:(id)arg1;
- (void)setSelectionIndicator:(id)arg1;
- (id)slot;

@end

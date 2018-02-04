/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSignificantEventOffsetPickerCell : UITableViewCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSDateComponents * _currentOffset;
    <HUSignificantEventOffsetPickerDelegate> * _delegate;
    NSArray * _offsetDateComponentOptions;
    UIPickerView * _pickerView;
    NSDateComponents * _selectedOffset;
    NSString * _significantEvent;
}

@property (nonatomic, retain) NSDateComponents *currentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUSignificantEventOffsetPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *offsetDateComponentOptions;
@property (nonatomic, readonly) UIPickerView *pickerView;
@property (nonatomic, retain) NSDateComponents *selectedOffset;
@property (nonatomic, retain) NSString *significantEvent;
@property (readonly) Class superclass;

+ (id)_defaultOffsetDateComponentOptions;

- (void).cxx_destruct;
- (id)_titleForOffsetComponents:(id)arg1;
- (void)_updateOffsetDateComponentOptions;
- (id)currentOffset;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)offsetDateComponentOptions;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)selectedOffset;
- (void)setCurrentOffset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOffsetDateComponentOptions:(id)arg1;
- (void)setSelectedOffset:(id)arg1;
- (void)setSignificantEvent:(id)arg1;
- (id)significantEvent;

@end

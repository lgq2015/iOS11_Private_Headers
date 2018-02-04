/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPickerViewCell : UITableViewCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSArray * _data;
    UIPickerView * _pickerView;
    bool  _shouldPostNotifications;
}

@property (nonatomic, retain) NSArray *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPickerView *pickerView;
@property (nonatomic, readonly) id selectedValue;
@property (nonatomic) bool shouldPostNotifications;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resizeCellForPickerView;
- (id)_setupPickerView;
- (id)data;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)prepareForReuse;
- (id)selectedValue;
- (void)setData:(id)arg1;
- (void)setPickerView:(id)arg1;
- (void)setShouldPostNotifications:(bool)arg1;
- (bool)shouldPostNotifications;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTonePickerCell : UITableViewCell {
    MTAlarm * _alarm;
}

@property (nonatomic, copy) MTAlarm *alarm;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)alarm;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)reload;
- (void)setAlarm:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
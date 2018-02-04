/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLSettingsTableViewCell : UITableViewCell {
    <MSCLSettingsTableViewCellDelegate> * _changeDelegate;
    bool  _disabled;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _titleUsesTintColor;
    NSObject<NSCopying> * _value;
    UILabel * _valueLabel;
    UISwitch * _valueSwitch;
    long long  _valueType;
}

@property (nonatomic) <MSCLSettingsTableViewCellDelegate> *changeDelegate;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) UISwitch *switchControl;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool titleUsesTintColor;
@property (nonatomic, copy) NSObject<NSCopying> *value;
@property (nonatomic) long long valueType;

- (void).cxx_destruct;
- (void)_reloadTitleTextColor;
- (void)_valueChanged:(id)arg1;
- (id)changeDelegate;
- (id)image;
- (struct CGSize { double x1; double x2; })imageSize;
- (bool)isDisabled;
- (void)layoutSubviews;
- (void)setChangeDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleUsesTintColor:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setValueType:(long long)arg1;
- (id)switchControl;
- (void)tintColorDidChange;
- (id)title;
- (bool)titleUsesTintColor;
- (id)value;
- (long long)valueType;

@end

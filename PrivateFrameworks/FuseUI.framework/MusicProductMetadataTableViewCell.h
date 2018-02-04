/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductMetadataTableViewCell : UITableViewCell {
    <MusicProductMetadataTableViewCellDelegate> * _delegate;
    struct { 
        unsigned int switchDidChangeState : 1; 
    }  _delegateRespondsToSelector;
    UIColor * _originalTextColor;
    UISwitch * _switch;
    bool  _switchOn;
    bool  _textLabelColorFollowsTintColor;
    bool  _wantsSwitchAccessoryView;
}

@property (nonatomic) <MusicProductMetadataTableViewCellDelegate> *delegate;
@property (getter=isSwitchOn, nonatomic) bool switchOn;
@property (nonatomic) bool textLabelColorFollowsTintColor;
@property (nonatomic) bool wantsSwitchAccessoryView;

+ (double)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_handlePreferredContentSizeDidChangeNotification:(id)arg1;
- (void)_handleSwitchStateDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isSwitchOn;
- (void)setDelegate:(id)arg1;
- (void)setSwitchOn:(bool)arg1;
- (void)setTextLabelColorFollowsTintColor:(bool)arg1;
- (void)setWantsSwitchAccessoryView:(bool)arg1;
- (bool)textLabelColorFollowsTintColor;
- (void)tintColorDidChange;
- (bool)wantsSwitchAccessoryView;

@end

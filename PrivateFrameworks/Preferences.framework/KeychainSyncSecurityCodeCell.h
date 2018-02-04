/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncSecurityCodeCell : PSEditableTableCell {
    UILabel * _bulletTextLabel;
    NSString * _firstPasscodeEntry;
    int  _mode;
    int  _securityCodeType;
}

@property (nonatomic, retain) NSString *firstPasscodeEntry;
@property (nonatomic) int mode;
@property (nonatomic) int securityCodeType;

- (void).cxx_destruct;
- (id)firstPasscodeEntry;
- (void)layoutSubviews;
- (int)mode;
- (int)securityCodeType;
- (void)setBulletText:(id)arg1;
- (void)setFirstPasscodeEntry:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setSecurityCodeType:(int)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;

@end

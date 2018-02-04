/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreDialogResponse : NSObject <NSCopying> {
    NSDictionary * _responseDictionary;
}

@property (getter=isBiometricAuthenticationAllowed, nonatomic, readonly) bool biometricAuthenticationAllowed;
@property (nonatomic, readonly, copy) NSArray *buttons;
@property (nonatomic, readonly) long long defaultButtonType;
@property (nonatomic, readonly, copy) NSString *explanation;
@property (getter=isInitialCheckboxValue, nonatomic, readonly) bool initialCheckboxValue;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_buttonActionKeyForType:(long long)arg1;
- (id)_buttonTitleKeyForType:(long long)arg1;
- (id)_buttonWithType:(long long)arg1;
- (id)buttons;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (long long)defaultButtonType;
- (id)explanation;
- (id)initWithResponseDictionary:(id)arg1;
- (bool)isBiometricAuthenticationAllowed;
- (bool)isInitialCheckboxValue;
- (id)message;
- (id)responseDictionary;
- (long long)type;

@end

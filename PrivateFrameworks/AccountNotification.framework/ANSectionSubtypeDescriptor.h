/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
 */

@interface ANSectionSubtypeDescriptor : NSObject <NSSecureCoding> {
    NSString * _accountTypeID;
    bool  _allowsAddingToLockScreenWhenUnlocked;
    NSString * _fullUnlockActionLabel;
    long long  _subtype;
}

@property (nonatomic, readonly) NSString *accountTypeID;
@property (nonatomic) bool allowsAddingToLockScreenWhenUnlocked;
@property (nonatomic, copy) NSString *fullUnlockActionLabel;
@property (nonatomic) long long subtype;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountTypeID;
- (bool)allowsAddingToLockScreenWhenUnlocked;
- (void)encodeWithCoder:(id)arg1;
- (id)fullUnlockActionLabel;
- (id)init;
- (id)initForAccountWithType:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAllowsAddingToLockScreenWhenUnlocked:(bool)arg1;
- (void)setFullUnlockActionLabel:(id)arg1;
- (void)setSubtype:(long long)arg1;
- (long long)subtype;

@end
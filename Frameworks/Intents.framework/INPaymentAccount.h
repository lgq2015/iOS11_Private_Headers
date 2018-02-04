/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPaymentAccount : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountNumber;
    long long  _accountType;
    INBalanceAmount * _balance;
    INSpeakableString * _nickname;
    INSpeakableString * _organizationName;
    INBalanceAmount * _secondaryBalance;
}

@property (nonatomic, readonly, copy) NSString *accountNumber;
@property (nonatomic, readonly) long long accountType;
@property (nonatomic, readonly, copy) INBalanceAmount *balance;
@property (nonatomic, readonly, copy) INSpeakableString *nickname;
@property (nonatomic, readonly, copy) INSpeakableString *organizationName;
@property (nonatomic, readonly, copy) INBalanceAmount *secondaryBalance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)accountNumber;
- (long long)accountType;
- (id)balance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4 balance:(id)arg5 secondaryBalance:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)nickname;
- (id)organizationName;
- (id)secondaryBalance;

@end

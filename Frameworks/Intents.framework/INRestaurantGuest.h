/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRestaurantGuest : INPerson <INRestaurantGuestExport> {
    NSString * _emailAddress;
    NSString * _phoneNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *emailAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *phoneNumber;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(bool)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNameComponents:(id)arg1 phoneNumber:(id)arg2 emailAddress:(id)arg3;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)phoneNumber;
- (void)setEmailAddress:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
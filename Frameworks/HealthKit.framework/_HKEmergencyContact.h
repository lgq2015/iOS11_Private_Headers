/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKEmergencyContact : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    NSString * _nameContactIdentifier;
    NSNumber * _nameRecordID;
    NSString * _phoneNumber;
    NSString * _phoneNumberContactIdentifier;
    NSString * _phoneNumberLabel;
    NSNumber * _phoneNumberPropertyID;
    NSString * _relationship;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *nameContactIdentifier;
@property (nonatomic, retain) NSNumber *nameRecordID;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *phoneNumberContactIdentifier;
@property (nonatomic, copy) NSString *phoneNumberLabel;
@property (nonatomic, retain) NSNumber *phoneNumberPropertyID;
@property (nonatomic, copy) NSString *relationship;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)emergencyContactWithContact:(id)arg1 property:(id)arg2;
+ (id)nameForContact:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)nameContactIdentifier;
- (id)nameRecordID;
- (id)phoneNumber;
- (id)phoneNumberContactIdentifier;
- (id)phoneNumberLabel;
- (id)phoneNumberPropertyID;
- (id)relationship;
- (void)setName:(id)arg1;
- (void)setNameContactIdentifier:(id)arg1;
- (void)setNameRecordID:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPhoneNumberContactIdentifier:(id)arg1;
- (void)setPhoneNumberLabel:(id)arg1;
- (void)setPhoneNumberPropertyID:(id)arg1;
- (void)setRelationship:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void)_migrateToAddressBook:(void*)arg1;
- (void)_migrateToContactsWithAddressBook:(void*)arg1;
- (void)_migrateToSchemaVersion:(long long)arg1 withAddressBook:(void*)arg2;

@end

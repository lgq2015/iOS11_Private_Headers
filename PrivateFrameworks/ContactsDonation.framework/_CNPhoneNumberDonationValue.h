/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface _CNPhoneNumberDonationValue : CNDonationValue {
    NSString * _label;
    CNPhoneNumber * _phoneNumber;
}

@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) CNPhoneNumber *phoneNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptDonationValueVisitor:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 label:(id)arg2 origin:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)phoneNumber;
- (void)updatePropertyListRepresentation:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface _CNPostalAddressDonationValue : CNDonationValue {
    NSString * _label;
    CNPostalAddress * _postalAddress;
    long long  _style;
}

@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) CNPostalAddress *postalAddress;
@property (nonatomic, readonly) long long style;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptDonationValueVisitor:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPostalAddress:(id)arg1 style:(long long)arg2 label:(id)arg3 origin:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)postalAddress;
- (long long)style;
- (void)updatePropertyListRepresentation:(id)arg1;

@end

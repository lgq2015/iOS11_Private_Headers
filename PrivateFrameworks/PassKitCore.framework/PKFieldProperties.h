/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKFieldProperties : NSObject <NSSecureCoding> {
    NSError * _error;
    NSArray * _merchantIdentifiers;
    unsigned long long  _technology;
    long long  _terminalType;
    long long  _valueAddedServiceMode;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSArray *merchantIdentifiers;
@property (nonatomic, readonly) unsigned long long technology;
@property (nonatomic, readonly) long long terminalType;
@property (nonatomic, readonly) long long valueAddedServiceMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithTechnology:(unsigned long long)arg1 terminalType:(long long)arg2 valueAddedServiceMode:(long long)arg3;
- (id)merchantIdentifiers;
- (void)setError:(id)arg1;
- (void)setMerchantIdentifiers:(id)arg1;
- (unsigned long long)technology;
- (long long)terminalType;
- (long long)valueAddedServiceMode;

@end

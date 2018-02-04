/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKExpressPassInformation : NSObject <NSSecureCoding> {
    NSString * _expressMode;
    long long  _expressPassType;
    NSString * _passUniqueIdentifier;
    NSString * _paymentApplicationIdentifier;
}

@property (nonatomic, readonly) NSString *expressMode;
@property (nonatomic, readonly) long long expressPassType;
@property (nonatomic, readonly) NSString *passUniqueIdentifier;
@property (nonatomic, readonly) NSString *paymentApplicationIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)expressMode;
- (long long)expressPassType;
- (unsigned long long)hash;
- (id)init;
- (id)initForExpressMode:(id)arg1 withPassUniqueIdentifier:(id)arg2 paymentApplicationIdentifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)passUniqueIdentifier;
- (id)paymentApplicationIdentifier;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFPeerPaymentResponse : NSObject <NSSecureCoding> {
    NSDictionary * _certificates;
    NSData * _transactionData;
}

@property (nonatomic, readonly) NSDictionary *certificates;
@property (nonatomic, readonly) NSData *transactionData;

+ (bool)supportsSecureCoding;

- (id)certificates;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)transactionData;

@end

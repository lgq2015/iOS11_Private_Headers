/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _label;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long type;

+ (id)itemWithProtobuf:(id)arg1;
+ (id)summaryItemWithLabel:(id)arg1 amount:(id)arg2;
+ (id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 type:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentSummaryItem:(id)arg1;
- (id)label;
- (id)protobuf;
- (void)setAmount:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end

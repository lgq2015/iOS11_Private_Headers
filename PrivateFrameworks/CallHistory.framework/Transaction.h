/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface Transaction : NSObject <NSSecureCoding> {
    NSData * _record;
    unsigned long long  _transactionType;
}

@property (retain) NSData *record;
@property unsigned long long transactionType;

+ (bool)supportsSecureCoding;
+ (id)toString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 andRecord:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 andRecord:(id)arg2;
- (id)record;
- (void)setRecord:(id)arg1;
- (void)setTransactionType:(unsigned long long)arg1;
- (unsigned long long)transactionType;

@end

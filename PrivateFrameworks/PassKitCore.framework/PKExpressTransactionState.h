/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKExpressTransactionState : NSObject <NSSecureCoding> {
    long long  _expressType;
    bool  _processing;
    unsigned long long  _receivedEvents;
}

@property (nonatomic) long long expressType;
@property (getter=isProcessing, nonatomic) bool processing;
@property (nonatomic) unsigned long long receivedEvents;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)expressType;
- (id)initWithCoder:(id)arg1;
- (bool)isProcessing;
- (unsigned long long)receivedEvents;
- (void)setExpressType:(long long)arg1;
- (void)setProcessing:(bool)arg1;
- (void)setReceivedEvents:(unsigned long long)arg1;

@end

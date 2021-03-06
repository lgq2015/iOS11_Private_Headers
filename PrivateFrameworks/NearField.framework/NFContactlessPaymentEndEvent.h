/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFContactlessPaymentEndEvent : NSObject <NSSecureCoding> {
    NSDecimalNumber * _amount;
    NFApplet * _applet;
    NSString * _appletIdentifier;
    unsigned short  _command;
    NSString * _currency;
    bool  _didError;
    NSDictionary * _felicaInfo;
    unsigned short  _informative;
    unsigned short  _result;
    unsigned short  _status;
    NSData * _tlv;
    NSString * _transactionIdentifier;
    unsigned short  _type;
}

@property (nonatomic, readonly) NSDecimalNumber *amount;
@property (nonatomic, readonly) NFApplet *applet;
@property (nonatomic, readonly) unsigned short command;
@property (nonatomic, readonly) NSString *currency;
@property (nonatomic, readonly) bool didError;
@property (nonatomic, readonly) NSDictionary *felicaInfo;
@property (nonatomic, readonly) unsigned short informative;
@property (nonatomic, readonly) unsigned short result;
@property (nonatomic, readonly) unsigned short status;
@property (nonatomic, readonly) NSData *tlv;
@property (nonatomic, readonly) NSString *transactionIdentifier;
@property (nonatomic, readonly) unsigned short type;

+ (bool)logsTransactionDetails;
+ (bool)supportsSecureCoding;

- (void)_setApplet:(id)arg1;
- (id)amount;
- (id)applet;
- (id)appletIdentifier;
- (id)asDictionary;
- (unsigned short)command;
- (id)currency;
- (void)dealloc;
- (id)description;
- (bool)didError;
- (void)encodeWithCoder:(id)arg1;
- (id)felicaInfo;
- (unsigned short)informative;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned short)result;
- (unsigned short)status;
- (id)tlv;
- (id)transactionIdentifier;
- (unsigned short)type;

@end

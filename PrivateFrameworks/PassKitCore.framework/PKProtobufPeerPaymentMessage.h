/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPeerPaymentMessage : PBCodable <NSCopying> {
    long long  _amount;
    NSString * _currency;
    struct { 
        unsigned int amount : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _memo;
    NSString * _paymentIdentifier;
    NSString * _recipientAddress;
    NSString * _requestDeviceScoreIdentifier;
    NSString * _requestToken;
    NSString * _senderAddress;
    NSString * _transactionIdentifier;
    int  _type;
    unsigned int  _version;
}

@property (nonatomic) long long amount;
@property (nonatomic, retain) NSString *currency;
@property (nonatomic) bool hasAmount;
@property (nonatomic, readonly) bool hasCurrency;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasMemo;
@property (nonatomic, readonly) bool hasPaymentIdentifier;
@property (nonatomic, readonly) bool hasRecipientAddress;
@property (nonatomic, readonly) bool hasRequestDeviceScoreIdentifier;
@property (nonatomic, readonly) bool hasRequestToken;
@property (nonatomic, readonly) bool hasSenderAddress;
@property (nonatomic, readonly) bool hasTransactionIdentifier;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *memo;
@property (nonatomic, retain) NSString *paymentIdentifier;
@property (nonatomic, retain) NSString *recipientAddress;
@property (nonatomic, retain) NSString *requestDeviceScoreIdentifier;
@property (nonatomic, retain) NSString *requestToken;
@property (nonatomic, retain) NSString *senderAddress;
@property (nonatomic, retain) NSString *transactionIdentifier;
@property (nonatomic) int type;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (long long)amount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAmount;
- (bool)hasCurrency;
- (bool)hasIdentifier;
- (bool)hasMemo;
- (bool)hasPaymentIdentifier;
- (bool)hasRecipientAddress;
- (bool)hasRequestDeviceScoreIdentifier;
- (bool)hasRequestToken;
- (bool)hasSenderAddress;
- (bool)hasTransactionIdentifier;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)memo;
- (void)mergeFrom:(id)arg1;
- (id)paymentIdentifier;
- (bool)readFrom:(id)arg1;
- (id)recipientAddress;
- (id)requestDeviceScoreIdentifier;
- (id)requestToken;
- (id)senderAddress;
- (void)setAmount:(long long)arg1;
- (void)setCurrency:(id)arg1;
- (void)setHasAmount:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMemo:(id)arg1;
- (void)setPaymentIdentifier:(id)arg1;
- (void)setRecipientAddress:(id)arg1;
- (void)setRequestDeviceScoreIdentifier:(id)arg1;
- (void)setRequestToken:(id)arg1;
- (void)setSenderAddress:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)transactionIdentifier;
- (int)type;
- (id)typeAsString:(int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end

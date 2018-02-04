/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitMessageTransported : PBCodable <NSCopying> {
    int  _direction;
    struct { 
        unsigned int payloadSize : 1; 
        unsigned int timestamp : 1; 
        unsigned int direction : 1; 
        unsigned int messageType : 1; 
        unsigned int transport : 1; 
        unsigned int isSecure : 1; 
    }  _has;
    NSString * _identifier;
    bool  _isSecure;
    int  _messageType;
    unsigned long long  _payloadSize;
    unsigned long long  _timestamp;
    NSString * _transactionID;
    int  _transport;
}

@property (nonatomic) int direction;
@property (nonatomic) bool hasDirection;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIsSecure;
@property (nonatomic) bool hasMessageType;
@property (nonatomic) bool hasPayloadSize;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTransactionID;
@property (nonatomic) bool hasTransport;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isSecure;
@property (nonatomic) int messageType;
@property (nonatomic) unsigned long long payloadSize;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *transactionID;
@property (nonatomic) int transport;

- (void).cxx_destruct;
- (int)StringAsDirection:(id)arg1;
- (int)StringAsMessageType:(id)arg1;
- (int)StringAsTransport:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)direction;
- (id)directionAsString:(int)arg1;
- (bool)hasDirection;
- (bool)hasIdentifier;
- (bool)hasIsSecure;
- (bool)hasMessageType;
- (bool)hasPayloadSize;
- (bool)hasTimestamp;
- (bool)hasTransactionID;
- (bool)hasTransport;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isSecure;
- (void)mergeFrom:(id)arg1;
- (int)messageType;
- (id)messageTypeAsString:(int)arg1;
- (unsigned long long)payloadSize;
- (bool)readFrom:(id)arg1;
- (void)setDirection:(int)arg1;
- (void)setHasDirection:(bool)arg1;
- (void)setHasIsSecure:(bool)arg1;
- (void)setHasMessageType:(bool)arg1;
- (void)setHasPayloadSize:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransport:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsSecure:(bool)arg1;
- (void)setMessageType:(int)arg1;
- (void)setPayloadSize:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransactionID:(id)arg1;
- (void)setTransport:(int)arg1;
- (unsigned long long)timestamp;
- (id)transactionID;
- (int)transport;
- (id)transportAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

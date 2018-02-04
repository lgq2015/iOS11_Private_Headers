/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentSummaryItem : PBCodable <NSCopying> {
    long long  _amount;
    struct { 
        unsigned int amount : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _label;
    unsigned int  _type;
}

@property (nonatomic) long long amount;
@property (nonatomic) bool hasAmount;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned int type;

- (void).cxx_destruct;
- (long long)amount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAmount;
- (bool)hasLabel;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmount:(long long)arg1;
- (void)setHasAmount:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
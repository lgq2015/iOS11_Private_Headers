/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBNamedProtobufMessage : PBCodable <NSSecureCoding, _SFPBNamedProtobufMessage> {
    NSData * _protobufMessageData;
    NSString * _protobufMessageName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasProtobufMessageData;
@property (nonatomic, readonly) bool hasProtobufMessageName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *protobufMessageData;
@property (nonatomic, copy) NSString *protobufMessageName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasProtobufMessageData;
- (bool)hasProtobufMessageName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)protobufMessageData;
- (id)protobufMessageName;
- (bool)readFrom:(id)arg1;
- (void)setProtobufMessageData:(id)arg1;
- (void)setProtobufMessageName:(id)arg1;
- (void)writeTo:(id)arg1;

@end

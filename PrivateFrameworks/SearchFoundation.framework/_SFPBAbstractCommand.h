/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBAbstractCommand : PBCodable <NSSecureCoding, _SFPBAbstractCommand> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    _SFPBCommandValue * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) _SFPBCommandValue *value;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasType;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (int)type;
- (id)value;
- (void)writeTo:(id)arg1;

@end

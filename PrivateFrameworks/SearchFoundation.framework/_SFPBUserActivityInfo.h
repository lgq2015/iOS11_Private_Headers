/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBUserActivityInfo : PBCodable <NSSecureCoding, _SFPBUserActivityInfo> {
    struct { 
        unsigned int valueType : 1; 
    }  _has;
    NSString * _key;
    NSString * _stringValue;
    _SFPBURL * _urlValue;
    int  _valueType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, readonly) bool hasUrlValue;
@property (nonatomic, readonly) bool hasValueType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBURL *urlValue;
@property (nonatomic) int valueType;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasStringValue;
- (bool)hasUrlValue;
- (bool)hasValueType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)key;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUrlValue:(id)arg1;
- (void)setValueType:(int)arg1;
- (id)stringValue;
- (id)urlValue;
- (int)valueType;
- (void)writeTo:(id)arg1;

@end

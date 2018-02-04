/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBImageOption : PBCodable <NSSecureCoding, _SFPBImageOption> {
    NSString * _defaultValue;
    NSString * _name;
    _SFPBStringDictionary * _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultValue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDefaultValue;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) _SFPBStringDictionary *options;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)dictionaryRepresentation;
- (bool)hasDefaultValue;
- (bool)hasName;
- (bool)hasOptions;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (id)options;
- (bool)readFrom:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)writeTo:(id)arg1;

@end

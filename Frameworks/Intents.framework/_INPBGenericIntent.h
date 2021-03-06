/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGenericIntent : PBCodable <NSCopying> {
    NSString * _domain;
    _INPBIntentMetadata * _metadata;
    NSMutableArray * _parameters;
    PBUnknownFields * _unknownFields;
    NSString * _verb;
}

@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, readonly) bool hasVerb;
@property (nonatomic, retain) _INPBIntentMetadata *metadata;
@property (nonatomic, retain) NSMutableArray *parameters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *verb;

+ (id)options;
+ (Class)parametersType;

- (void).cxx_destruct;
- (void)addParameters:(id)arg1;
- (void)clearParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasDomain;
- (bool)hasMetadata;
- (bool)hasVerb;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (id)parameters;
- (id)parametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)parametersCount;
- (bool)readFrom:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)unknownFields;
- (id)verb;
- (void)writeTo:(id)arg1;

@end

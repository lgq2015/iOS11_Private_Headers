/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartVideoCallIntentResponse : PBCodable <NSCopying> {
    _INPBCallMetrics * _metrics;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasMetrics;
@property (nonatomic, retain) _INPBCallMetrics *metrics;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMetrics;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metrics;
- (bool)readFrom:(id)arg1;
- (void)setMetrics:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

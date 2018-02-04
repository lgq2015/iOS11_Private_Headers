/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBUserActivity : PBCodable <NSCopying> {
    NSData * _data;
    NSString * _title;
    PBUnknownFields * _unknownFields;
    NSString * _uri;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasUri;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *uri;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasData;
- (bool)hasTitle;
- (bool)hasUri;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUri:(id)arg1;
- (id)title;
- (id)unknownFields;
- (id)uri;
- (void)writeTo:(id)arg1;

@end

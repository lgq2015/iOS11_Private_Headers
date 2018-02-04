/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAlert : PBCodable <NSCopying> {
    NSString * _content;
    NSString * _title;
}

@property (nonatomic, retain) NSString *content;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)content;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContent;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end

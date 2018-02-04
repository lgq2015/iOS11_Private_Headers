/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTopStoriesStyleConfig : PBCodable <NSCopying> {
    NSString * _backgroundColor;
    NSString * _foregroundColor;
    NSString * _label;
    NSString * _type;
}

@property (nonatomic, retain) NSString *backgroundColor;
@property (nonatomic, retain) NSString *foregroundColor;
@property (nonatomic, readonly) bool hasBackgroundColor;
@property (nonatomic, readonly) bool hasForegroundColor;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)foregroundColor;
- (bool)hasBackgroundColor;
- (bool)hasForegroundColor;
- (bool)hasLabel;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end

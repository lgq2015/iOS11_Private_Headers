/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewport : PBCodable <NSCopying> {
    NSMutableArray * _elements;
    unsigned long long  _feedDBVersion;
    struct { 
        unsigned int feedDBVersion : 1; 
        unsigned int version : 1; 
    }  _has;
    NSString * _identifier;
    NSMutableArray * _sharedStrings;
    unsigned long long  _version;
}

@property (nonatomic, retain) NSMutableArray *elements;
@property (nonatomic) unsigned long long feedDBVersion;
@property (nonatomic) bool hasFeedDBVersion;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *sharedStrings;
@property (nonatomic) unsigned long long version;

+ (Class)elementsType;
+ (Class)sharedStringsType;

- (void)addElements:(id)arg1;
- (void)addSharedStrings:(id)arg1;
- (void)clearElements;
- (void)clearSharedStrings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)elements;
- (id)elementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementsCount;
- (unsigned long long)feedDBVersion;
- (bool)hasFeedDBVersion;
- (bool)hasIdentifier;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setFeedDBVersion:(unsigned long long)arg1;
- (void)setHasFeedDBVersion:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSharedStrings:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)sharedStrings;
- (id)sharedStringsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sharedStringsCount;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;

@end

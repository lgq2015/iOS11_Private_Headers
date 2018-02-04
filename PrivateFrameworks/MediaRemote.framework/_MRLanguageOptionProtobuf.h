/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRLanguageOptionProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _characteristics;
    NSString * _displayName;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _languageTag;
    int  _type;
}

@property (nonatomic, retain) NSMutableArray *characteristics;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLanguageTag;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *languageTag;
@property (nonatomic) int type;

+ (Class)characteristicsType;

- (void)addCharacteristics:(id)arg1;
- (id)characteristics;
- (id)characteristicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)characteristicsCount;
- (void)clearCharacteristics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDisplayName;
- (bool)hasIdentifier;
- (bool)hasLanguageTag;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)languageTag;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLanguageTag:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end

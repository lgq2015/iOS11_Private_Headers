/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBConflictingParameter : PBCodable <NSCopying> {
    NSMutableArray * _alternateItems;
    NSString * _keyPath;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *alternateItems;
@property (nonatomic, readonly) bool hasKeyPath;
@property (nonatomic, retain) NSString *keyPath;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)alternateItemsType;
+ (id)options;

- (void).cxx_destruct;
- (void)addAlternateItems:(id)arg1;
- (id)alternateItems;
- (id)alternateItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternateItemsCount;
- (void)clearAlternateItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKeyPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlternateItems:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

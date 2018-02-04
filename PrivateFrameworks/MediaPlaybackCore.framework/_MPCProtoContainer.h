/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCProtoContainer : PBCodable <NSCopying> {
    int  _containerType;
    struct { 
        unsigned int containerType : 1; 
    }  _has;
    _MPCProtoContainerIdentifierSet * _identifierSet;
    NSMutableArray * _items;
}

@property (nonatomic) int containerType;
@property (nonatomic) bool hasContainerType;
@property (nonatomic, readonly) bool hasIdentifierSet;
@property (nonatomic, retain) _MPCProtoContainerIdentifierSet *identifierSet;
@property (nonatomic, retain) NSMutableArray *items;

+ (Class)itemType;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)clearItems;
- (int)containerType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainerType;
- (bool)hasIdentifierSet;
- (unsigned long long)hash;
- (id)identifierSet;
- (bool)isEqual:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)items;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainerType:(int)arg1;
- (void)setHasContainerType:(bool)arg1;
- (void)setIdentifierSet:(id)arg1;
- (void)setItems:(id)arg1;
- (void)writeTo:(id)arg1;

@end

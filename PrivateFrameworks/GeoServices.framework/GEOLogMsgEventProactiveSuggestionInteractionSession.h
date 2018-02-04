/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventProactiveSuggestionInteractionSession : PBCodable <NSCopying> {
    int  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int interactedItemIndex : 1; 
        unsigned int listType : 1; 
    }  _has;
    int  _interactedItemIndex;
    int  _listType;
    NSMutableArray * _proactiveItems;
}

@property (nonatomic) int duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasInteractedItemIndex;
@property (nonatomic) bool hasListType;
@property (nonatomic) int interactedItemIndex;
@property (nonatomic) int listType;
@property (nonatomic, retain) NSMutableArray *proactiveItems;

+ (Class)proactiveItemType;

- (void).cxx_destruct;
- (int)StringAsListType:(id)arg1;
- (void)addProactiveItem:(id)arg1;
- (void)clearProactiveItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)duration;
- (bool)hasDuration;
- (bool)hasInteractedItemIndex;
- (bool)hasListType;
- (unsigned long long)hash;
- (int)interactedItemIndex;
- (bool)isEqual:(id)arg1;
- (int)listType;
- (id)listTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;
- (id)proactiveItems;
- (unsigned long long)proactiveItemsCount;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasInteractedItemIndex:(bool)arg1;
- (void)setHasListType:(bool)arg1;
- (void)setInteractedItemIndex:(int)arg1;
- (void)setListType:(int)arg1;
- (void)setProactiveItems:(id)arg1;
- (void)writeTo:(id)arg1;

@end

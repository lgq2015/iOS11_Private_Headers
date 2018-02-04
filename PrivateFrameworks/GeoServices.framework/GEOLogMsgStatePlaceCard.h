/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStatePlaceCard : PBCodable <NSCopying> {
    struct { 
        unsigned int placecardType : 1; 
    }  _has;
    GEOPlaceActionDetails * _placeActionDetails;
    NSString * _placecardCategory;
    int  _placecardType;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _possibleActions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _unactionableUiElements;
}

@property (nonatomic, readonly) bool hasPlaceActionDetails;
@property (nonatomic, readonly) bool hasPlacecardCategory;
@property (nonatomic) bool hasPlacecardType;
@property (nonatomic, retain) GEOPlaceActionDetails *placeActionDetails;
@property (nonatomic, retain) NSString *placecardCategory;
@property (nonatomic) int placecardType;
@property (nonatomic, readonly) int*possibleActions;
@property (nonatomic, readonly) unsigned long long possibleActionsCount;
@property (nonatomic, readonly) int*unactionableUiElements;
@property (nonatomic, readonly) unsigned long long unactionableUiElementsCount;

- (void).cxx_destruct;
- (int)StringAsPlacecardType:(id)arg1;
- (int)StringAsPossibleActions:(id)arg1;
- (int)StringAsUnactionableUiElements:(id)arg1;
- (void)addPossibleAction:(int)arg1;
- (void)addUnactionableUiElement:(int)arg1;
- (void)clearPossibleActions;
- (void)clearUnactionableUiElements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceActionDetails;
- (bool)hasPlacecardCategory;
- (bool)hasPlacecardType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeActionDetails;
- (id)placecardCategory;
- (int)placecardType;
- (id)placecardTypeAsString:(int)arg1;
- (int)possibleActionAtIndex:(unsigned long long)arg1;
- (int*)possibleActions;
- (id)possibleActionsAsString:(int)arg1;
- (unsigned long long)possibleActionsCount;
- (bool)readFrom:(id)arg1;
- (void)setHasPlacecardType:(bool)arg1;
- (void)setPlaceActionDetails:(id)arg1;
- (void)setPlacecardCategory:(id)arg1;
- (void)setPlacecardType:(int)arg1;
- (void)setPossibleActions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUnactionableUiElements:(int*)arg1 count:(unsigned long long)arg2;
- (int)unactionableUiElementAtIndex:(unsigned long long)arg1;
- (int*)unactionableUiElements;
- (id)unactionableUiElementsAsString:(int)arg1;
- (unsigned long long)unactionableUiElementsCount;
- (void)writeTo:(id)arg1;

@end

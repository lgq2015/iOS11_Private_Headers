/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionItem : PBCodable <NSCopying> {
    bool  _eventuallyVisible;
    struct { 
        unsigned int tappingCount : 1; 
        unsigned int eventuallyVisible : 1; 
        unsigned int initiallyVisible : 1; 
    }  _has;
    bool  _initiallyVisible;
    NSString * _suggestionString;
    int  _tappingCount;
}

@property (nonatomic) bool eventuallyVisible;
@property (nonatomic) bool hasEventuallyVisible;
@property (nonatomic) bool hasInitiallyVisible;
@property (nonatomic, readonly) bool hasSuggestionString;
@property (nonatomic) bool hasTappingCount;
@property (nonatomic) bool initiallyVisible;
@property (nonatomic, retain) NSString *suggestionString;
@property (nonatomic) int tappingCount;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)eventuallyVisible;
- (bool)hasEventuallyVisible;
- (bool)hasInitiallyVisible;
- (bool)hasSuggestionString;
- (bool)hasTappingCount;
- (unsigned long long)hash;
- (bool)initiallyVisible;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventuallyVisible:(bool)arg1;
- (void)setHasEventuallyVisible:(bool)arg1;
- (void)setHasInitiallyVisible:(bool)arg1;
- (void)setHasTappingCount:(bool)arg1;
- (void)setInitiallyVisible:(bool)arg1;
- (void)setSuggestionString:(id)arg1;
- (void)setTappingCount:(int)arg1;
- (id)suggestionString;
- (int)tappingCount;
- (void)writeTo:(id)arg1;

@end

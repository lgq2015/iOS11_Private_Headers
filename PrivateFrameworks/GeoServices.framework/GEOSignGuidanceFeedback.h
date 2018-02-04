/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSignGuidanceFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int signDetailIndex : 1; 
        unsigned int signTitleIndex : 1; 
    }  _has;
    int  _signDetailIndex;
    int  _signTitleIndex;
}

@property (nonatomic) bool hasSignDetailIndex;
@property (nonatomic) bool hasSignTitleIndex;
@property (nonatomic) int signDetailIndex;
@property (nonatomic) int signTitleIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSignDetailIndex;
- (bool)hasSignTitleIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSignDetailIndex:(bool)arg1;
- (void)setHasSignTitleIndex:(bool)arg1;
- (void)setSignDetailIndex:(int)arg1;
- (void)setSignTitleIndex:(int)arg1;
- (int)signDetailIndex;
- (int)signTitleIndex;
- (void)writeTo:(id)arg1;

@end

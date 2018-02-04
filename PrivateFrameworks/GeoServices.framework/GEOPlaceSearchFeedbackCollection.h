/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying> {
    NSMutableArray * _actionCaptures;
    unsigned long long  _businessID;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
        unsigned int localSearchProviderID : 1; 
    }  _has;
    int  _localSearchProviderID;
    long long  _placeID;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
}

@property (nonatomic, retain) NSMutableArray *actionCaptures;
@property (nonatomic) unsigned long long businessID;
@property (nonatomic) bool hasBusinessID;
@property (nonatomic) bool hasLocalSearchProviderID;
@property (nonatomic) bool hasPlaceID;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) long long placeID;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;

+ (Class)actionCaptureType;

- (void).cxx_destruct;
- (id)actionCaptureAtIndex:(unsigned long long)arg1;
- (id)actionCaptures;
- (unsigned long long)actionCapturesCount;
- (void)addActionCapture:(id)arg1;
- (unsigned long long)businessID;
- (void)clearActionCaptures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBusinessID;
- (bool)hasLocalSearchProviderID;
- (bool)hasPlaceID;
- (bool)hasSessionID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (long long)placeID;
- (bool)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setActionCaptures:(id)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setHasBusinessID:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasPlaceID:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setPlaceID:(long long)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)writeTo:(id)arg1;

@end

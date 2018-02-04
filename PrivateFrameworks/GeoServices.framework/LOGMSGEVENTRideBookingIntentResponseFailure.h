/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface LOGMSGEVENTRideBookingIntentResponseFailure : PBCodable <NSCopying> {
    int  _failure;
    struct { 
        unsigned int failure : 1; 
        unsigned int intent : 1; 
    }  _has;
    int  _intent;
}

@property (nonatomic) int failure;
@property (nonatomic) bool hasFailure;
@property (nonatomic) bool hasIntent;
@property (nonatomic) int intent;

- (int)StringAsFailure:(id)arg1;
- (int)StringAsIntent:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)failure;
- (id)failureAsString:(int)arg1;
- (bool)hasFailure;
- (bool)hasIntent;
- (unsigned long long)hash;
- (int)intent;
- (id)intentAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFailure:(int)arg1;
- (void)setHasFailure:(bool)arg1;
- (void)setHasIntent:(bool)arg1;
- (void)setIntent:(int)arg1;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    GEOLatLng * _destination;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    GEOLatLng * _source;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) GEOLatLng *destination;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) GEOLatLng *source;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasDestination;
- (bool)hasSource;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)source;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end

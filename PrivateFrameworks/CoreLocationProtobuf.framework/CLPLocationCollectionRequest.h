/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPLocationCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _accessoryLocations;
    CLPAccessoryMeta * _accessoryMeta;
    NSString * _appBundleId;
    NSMutableArray * _appBundleIds;
    struct { 
        unsigned int mcc : 1; 
        unsigned int mnc : 1; 
        unsigned int rat : 1; 
    }  _has;
    NSMutableArray * _locations;
    int  _mcc;
    CLPMeta * _meta;
    int  _mnc;
    int  _rat;
    NSString * _tripId;
}

@property (nonatomic, retain) NSMutableArray *accessoryLocations;
@property (nonatomic, retain) CLPAccessoryMeta *accessoryMeta;
@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic, retain) NSMutableArray *appBundleIds;
@property (nonatomic, readonly) bool hasAccessoryMeta;
@property (nonatomic, readonly) bool hasAppBundleId;
@property (nonatomic) bool hasMcc;
@property (nonatomic) bool hasMnc;
@property (nonatomic) bool hasRat;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic) int mcc;
@property (nonatomic, retain) CLPMeta *meta;
@property (nonatomic) int mnc;
@property (nonatomic) int rat;
@property (nonatomic, retain) NSString *tripId;

+ (Class)accessoryLocationType;
+ (Class)appBundleIdsType;
+ (Class)locationType;

- (void).cxx_destruct;
- (id)accessoryLocationAtIndex:(unsigned long long)arg1;
- (id)accessoryLocations;
- (unsigned long long)accessoryLocationsCount;
- (id)accessoryMeta;
- (void)addAccessoryLocation:(id)arg1;
- (void)addAppBundleIds:(id)arg1;
- (void)addLocation:(id)arg1;
- (id)appBundleId;
- (id)appBundleIds;
- (id)appBundleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)appBundleIdsCount;
- (void)clearAccessoryLocations;
- (void)clearAppBundleIds;
- (void)clearLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessoryMeta;
- (bool)hasAppBundleId;
- (bool)hasMcc;
- (bool)hasMnc;
- (bool)hasRat;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationAtIndex:(unsigned long long)arg1;
- (id)locations;
- (unsigned long long)locationsCount;
- (int)mcc;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (int)mnc;
- (int)rat;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAccessoryLocations:(id)arg1;
- (void)setAccessoryMeta:(id)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setAppBundleIds:(id)arg1;
- (void)setHasMcc:(bool)arg1;
- (void)setHasMnc:(bool)arg1;
- (void)setHasRat:(bool)arg1;
- (void)setLocations:(id)arg1;
- (void)setMcc:(int)arg1;
- (void)setMeta:(id)arg1;
- (void)setMnc:(int)arg1;
- (void)setRat:(int)arg1;
- (void)setTripId:(id)arg1;
- (id)tripId;
- (void)writeTo:(id)arg1;

@end

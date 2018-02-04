/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLPrefetchFloorRequest : NSObject <NSSecureCoding> {
    bool  _allowCellularDownload;
    NSString * _floorUuid;
    bool  _hasCompleteFloor;
    long long  _locationContext;
    NSDate * _relevancy;
    NSString * _venueUuid;
}

@property (nonatomic) bool allowCellularDownload;
@property (nonatomic, retain) NSString *floorUuid;
@property (nonatomic) bool hasCompleteFloor;
@property (nonatomic) long long locationContext;
@property (nonatomic, retain) NSDate *relevancy;
@property (nonatomic, retain) NSString *venueUuid;

+ (id)prefetchRequestForFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 locationContext:(long long)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowCellularDownload;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)floorUid;
- (id)floorUuid;
- (bool)hasCompleteFloor;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 hasCompleteFloor:(bool)arg4 allowCellularDownload:(bool)arg5 locationContext:(long long)arg6;
- (id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 locationContext:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (long long)locationContext;
- (id)relevancy;
- (void)setAllowCellularDownload:(bool)arg1;
- (void)setFloorUid:(id)arg1;
- (void)setFloorUuid:(id)arg1;
- (void)setHasCompleteFloor:(bool)arg1;
- (void)setLocationContext:(long long)arg1;
- (void)setRelevancy:(id)arg1;
- (void)setVenueUuid:(id)arg1;
- (id)venueUuid;

@end

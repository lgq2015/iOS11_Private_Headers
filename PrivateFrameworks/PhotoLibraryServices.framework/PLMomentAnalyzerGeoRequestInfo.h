/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentAnalyzerGeoRequestInfo : NSObject {
    NSArray * _assetIds;
    NSArray * _extraAssetIds;
    NSArray * _extraLocations;
    unsigned long long  _failureCount;
    NSObject<NSCopying> * _momentId;
    NSString * _momentUuid;
    unsigned long long  _requestType;
    PLRevGeoLocationInfo * _revGeoLocationInfo;
    <GEOMapServiceTicket> * _reverseGeocodeRequest;
}

@property (nonatomic, copy) NSArray *assetIds;
@property (nonatomic, copy) NSArray *extraAssetIds;
@property (getter=hasExtraData, nonatomic, readonly) bool extraData;
@property (nonatomic, copy) NSArray *extraLocations;
@property (nonatomic) unsigned long long failureCount;
@property (nonatomic, retain) NSObject<NSCopying> *momentId;
@property (nonatomic, copy) NSString *momentUuid;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic, retain) PLRevGeoLocationInfo *revGeoLocationInfo;
@property (nonatomic, retain) <GEOMapServiceTicket> *reverseGeocodeRequest;

- (id)assetIds;
- (void)dealloc;
- (id)description;
- (id)extraAssetIds;
- (id)extraLocations;
- (unsigned long long)failureCount;
- (bool)hasExtraData;
- (unsigned long long)hash;
- (id)initWithRequestType:(unsigned long long)arg1 momentId:(id)arg2 momentUuid:(id)arg3 assetIds:(id)arg4 reverseGeocodeRequest:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)momentId;
- (id)momentUuid;
- (unsigned long long)requestType;
- (id)revGeoLocationInfo;
- (id)reverseGeocodeRequest;
- (void)setAssetIds:(id)arg1;
- (void)setExtraAssetIds:(id)arg1;
- (void)setExtraLocations:(id)arg1;
- (void)setFailureCount:(unsigned long long)arg1;
- (void)setMomentId:(id)arg1;
- (void)setMomentUuid:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setRevGeoLocationInfo:(id)arg1;
- (void)setReverseGeocodeRequest:(id)arg1;

@end

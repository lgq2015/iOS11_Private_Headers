/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoLocationInfo : NSObject {
    PLRevGeoCompoundNameInfo * _compoundNameInfo;
    PLRevGeoCompoundNameInfo * _compoundSecondaryNameInfo;
    <GEOMapItemPrivate> * _geoMapItem;
    bool  _isHome;
    bool  _isValid;
    NSString * _providerId;
    unsigned long long  _providerVersion;
}

@property (nonatomic, retain) PLRevGeoCompoundNameInfo *compoundNameInfo;
@property (nonatomic, retain) PLRevGeoCompoundNameInfo *compoundSecondaryNameInfo;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, retain) <GEOMapItemPrivate> *geoMapItem;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool isHome;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, retain) NSString *providerId;
@property (nonatomic) unsigned long long providerVersion;

+ (id)_namingOrderForAssetReverseGeoDescription;
+ (id)_newRevGeoLocationInfoFromData:(id)arg1;
+ (unsigned long long)currentVersion;
+ (bool)isValidFromData:(id)arg1;
+ (id)newDataFromRevGeoLocationInfo:(id)arg1;
+ (unsigned long long)qualityTypeForPointInCountryCode:(id)arg1 withDataProviderId:(id)arg2;
+ (id /* block */)sortedNameAndAreaInfoComparatorWithHomeAtEnd:(bool)arg1;

- (void)_addNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 totalPlaceCount:(long long*)arg3;
- (id)compoundNameInfo;
- (id)compoundSecondaryNameInfo;
- (id)countryCode;
- (id)dataForInfo;
- (void)dealloc;
- (id)description;
- (id)geoMapItem;
- (bool)hasLocation;
- (id)initWithData:(id)arg1;
- (bool)isHome;
- (bool)isValid;
- (id)localizedDescription;
- (id)providerId;
- (unsigned long long)providerVersion;
- (void)setCompoundNameInfo:(id)arg1;
- (void)setCompoundSecondaryNameInfo:(id)arg1;
- (void)setGeoMapItem:(id)arg1;
- (void)setIsHome:(bool)arg1;
- (void)setProviderId:(id)arg1;
- (void)setProviderVersion:(unsigned long long)arg1;

@end

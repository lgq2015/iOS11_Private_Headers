/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEOPDClientMetadata * _clientMetadata;
    NSMutableArray * _displayLanguages;
    NSString * _displayRegion;
    struct { 
        unsigned int requestType : 1; 
        unsigned int needLatency : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    }  _has;
    bool  _needLatency;
    GEOPDPlaceRequestParameters * _placeRequestParameters;
    int  _requestType;
    NSMutableArray * _requestedComponents;
    NSMutableArray * _spokenLanguages;
    bool  _suppressResultsRequiringAttribution;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, retain) NSMutableArray *displayLanguages;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic, readonly) bool hasAnalyticMetadata;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic) bool hasNeedLatency;
@property (nonatomic, readonly) bool hasPlaceRequestParameters;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool hasSuppressResultsRequiringAttribution;
@property (nonatomic) bool needLatency;
@property (nonatomic, retain) GEOPDPlaceRequestParameters *placeRequestParameters;
@property (nonatomic) int requestType;
@property (nonatomic, retain) NSMutableArray *requestedComponents;
@property (nonatomic, retain) NSMutableArray *spokenLanguages;
@property (nonatomic) bool suppressResultsRequiringAttribution;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)displayLanguageType;
+ (Class)requestedComponentType;
+ (Class)spokenLanguageType;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (id)_initWithTraits:(id)arg1;
- (void)addDisplayLanguage:(id)arg1;
- (void)addRequestedComponent:(id)arg1;
- (void)addRequestedComponentIfNotNil:(id)arg1;
- (void)addSpokenLanguage:(id)arg1;
- (id)analyticMetadata;
- (void)clearDisplayLanguages;
- (void)clearRequestedComponents;
- (void)clearSpokenLanguages;
- (id)clientMetadata;
- (id)componentInfoWithType:(int)arg1 count:(unsigned int)arg2 traits:(id)arg3;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (id)displayLanguages;
- (unsigned long long)displayLanguagesCount;
- (id)displayRegion;
- (int)geoUserPreferredTransportType;
- (bool)hasAnalyticMetadata;
- (bool)hasClientMetadata;
- (bool)hasDisplayRegion;
- (bool)hasNeedLatency;
- (bool)hasPlaceRequestParameters;
- (bool)hasRequestType;
- (bool)hasResultProviderID;
- (bool)hasSuppressResultsRequiringAttribution;
- (unsigned long long)hash;
- (id)initForAutocompleteWithTraits:(id)arg1 count:(unsigned int)arg2;
- (id)initForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2;
- (id)initForCategoryListWithTraits:(id)arg1;
- (id)initForDatasetCheckWithTraits:(id)arg1;
- (id)initForGeoIpLookupWithIpAddress:(id)arg1 traits:(id)arg2;
- (id)initForNearestTransitStationWithLine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3;
- (id)initForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)initForSpotlightCategoryListWithTraits:(id)arg1;
- (id)initForWifiFingerprintLookupWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4;
- (id)initWithBatchPopularNearbySearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)initWithCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithCategory:(id)arg1 routeInfo:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3;
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithPopularNearbySearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 floorOrdinal:(int)arg2 includeEntryPoints:(bool)arg3 preserveOriginalLocation:(bool)arg4 traits:(id)arg5;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 preserveOriginalLocation:(bool)arg3 traits:(id)arg4;
- (id)initWithSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned int)arg5 suppressResultsRequiringAttribution:(bool)arg6 traits:(id)arg7;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)initWithTraits:(id)arg1 count:(unsigned int)arg2 includeEntryPoints:(bool)arg3;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (bool)isAlwaysCacheable;
- (bool)isBrandLookupRequest;
- (bool)isCanonicalLocationSearchRequest;
- (bool)isEqual:(id)arg1;
- (bool)isForwardGeocoderRequest;
- (bool)isMerchantRequest;
- (bool)isPlaceRefinementRequest;
- (void)mergeFrom:(id)arg1;
- (bool)needLatency;
- (id)placeRequestParameters;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (unsigned int)requestTypeCode;
- (id)requestedComponentAtIndex:(unsigned long long)arg1;
- (id)requestedComponents;
- (unsigned long long)requestedComponentsCount;
- (Class)responseClass;
- (int)resultProviderID;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setHasNeedLatency:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasSuppressResultsRequiringAttribution:(bool)arg1;
- (void)setNeedLatency:(bool)arg1;
- (void)setPlaceRequestParameters:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setRequestedComponents:(id)arg1;
- (void)setSpokenLanguages:(id)arg1;
- (void)setSuppressResultsRequiringAttribution:(bool)arg1;
- (bool)shouldConsiderCaching;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (id)spokenLanguages;
- (unsigned long long)spokenLanguagesCount;
- (bool)suppressResultsRequiringAttribution;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

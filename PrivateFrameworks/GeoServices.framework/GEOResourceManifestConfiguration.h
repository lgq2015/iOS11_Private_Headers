/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestConfiguration : NSObject {
    NSString * _applicationIdentifier;
    NSString * _applicationVersion;
    NSString * _countryCode;
    NSString * _dataDirectory;
    int  _defaultScale;
    NSString * _disputedBorderCountryOverride;
    NSString * _disputedBorderRegionOverride;
    NSString * _environment;
    NSString * _hardwareIdentifier;
    NSString * _os;
    NSString * _osBuild;
    NSString * _osVersion;
    bool  _requiresLegacyFormat;
    unsigned int  _tileGroupIdentifier;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *applicationVersion;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *dataDirectory;
@property (nonatomic, readonly) int defaultScale;
@property (nonatomic, readonly) NSString *directorySuffix;
@property (nonatomic, copy) NSString *disputedBorderCountryOverride;
@property (nonatomic, copy) NSString *disputedBorderRegionOverride;
@property (nonatomic, copy) NSString *environment;
@property (nonatomic, copy) NSString *hardwareIdentifier;
@property (nonatomic, copy) NSString *os;
@property (nonatomic, copy) NSString *osBuild;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, readonly) bool requiresLegacyFormat;
@property (nonatomic) unsigned int tileGroupIdentifier;

+ (id)configurationWithPairedDevice:(id)arg1;
+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)applicationVersion;
- (id)conciseDictionaryRepresentation;
- (id)countryCode;
- (id)dataDirectory;
- (int)defaultScale;
- (id)directorySuffix;
- (id)disputedBorderCountryOverride;
- (id)disputedBorderRegionOverride;
- (id)environment;
- (id)hardwareIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConciseDictionaryRepresentation:(id)arg1;
- (bool)isDefaultConfiguration;
- (bool)isEqual:(id)arg1;
- (id)manifestDictionaryRepresentation;
- (id)os;
- (id)osBuild;
- (id)osVersion;
- (bool)requiresLegacyFormat;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDataDirectory:(id)arg1;
- (void)setDisputedBorderCountryOverride:(id)arg1;
- (void)setDisputedBorderRegionOverride:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setHardwareIdentifier:(id)arg1;
- (void)setOs:(id)arg1;
- (void)setOsBuild:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setTileGroupIdentifier:(unsigned int)arg1;
- (unsigned int)tileGroupIdentifier;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFMediaCapabilities : NSObject {
    NSDictionary * _capabilitiesInformation;
}

@property (retain) NSDictionary *capabilitiesInformation;

+ (id)capabilitiesForCurrentDevice;
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)arg1;
+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)arg1;
+ (id)legacyCapabilities;
+ (long long)newFormatsConfiguration;
+ (id)recordSlomoConfigurationWithValidValues:(id)arg1;
+ (id)recordVideoConfigurationWithValidValues:(id)arg1;
+ (bool)setNewFormatsConfiguration:(long long)arg1 fromSource:(long long)arg2;
+ (void)setRecordSlomoConfiguration:(id)arg1;
+ (void)setRecordVideoConfiguration:(id)arg1;
+ (id)stringForSupport:(long long)arg1;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (id)testCapabilitiesNotSupportingHEVC;

- (void).cxx_destruct;
- (id)capabilitiesInformation;
- (id)description;
- (id)initWithOpaqueRepresentation:(id)arg1;
- (id)opaqueRepresentation;
- (void)setCapabilitiesInformation:(id)arg1;
- (long long)supportForAVAsset:(id)arg1;
- (long long)supportForCodec:(unsigned int)arg1;
- (long long)supportForContainerTypeIdentifier:(id)arg1;
- (long long)supportForFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (long long)supportForLivePhotoVersion:(id)arg1;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)arg1 selector:(SEL)arg2;
- (bool)supportsTranscodeChoice;
- (long long)userDefaultsPeerOverrideValue;

@end

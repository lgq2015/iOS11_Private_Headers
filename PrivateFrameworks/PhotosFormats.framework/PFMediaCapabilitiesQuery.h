/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFMediaCapabilitiesQuery : NSObject {
    NSMutableDictionary * _capabilitiesInformation;
}

@property (retain) NSMutableDictionary *capabilitiesInformation;

- (void).cxx_destruct;
- (void)addCodecInformation;
- (void)addHEIFContainerInformationToDictionary:(id)arg1;
- (void)addHEVCCodecInformationToDictionary:(id)arg1;
- (void)addLivePhotoInformationToDictionary:(id)arg1;
- (void)addTranscodeChoiceWithOptions:(id)arg1;
- (void)addVendorSpecificInformation;
- (void)addVersion;
- (id)capabilitiesInformation;
- (id)dictionaryRepresentation;
- (void)gatherCapabilitiesWithOptions:(id)arg1;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (void)setCapabilitiesInformation:(id)arg1;

@end

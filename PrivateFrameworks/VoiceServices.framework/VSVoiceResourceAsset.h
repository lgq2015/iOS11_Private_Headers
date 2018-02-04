/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSVoiceResourceAsset : VSAssetBase <NSSecureCoding> {
    NSArray * _languages;
    float  _pitch;
    float  _rate;
    NSDictionary * _resourceList;
    NSURL * _searchPathURL;
    NSDictionary * _vocalizerConfig;
    NSDictionary * _voiceConfig;
    float  _volume;
}

@property (nonatomic, copy) NSArray *languages;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;
@property (nonatomic, copy) NSDictionary *resourceList;
@property (nonatomic, copy) NSURL *searchPathURL;
@property (nonatomic, retain) NSDictionary *vocalizerConfig;
@property (nonatomic, copy) NSDictionary *voiceConfig;
@property (nonatomic) float volume;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultFootprintString;
- (id)defaultTypeString;
- (id)defaultVoice;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)languages;
- (float)pitch;
- (float)rate;
- (id)resourceList;
- (id)searchPathURL;
- (void)setLanguages:(id)arg1;
- (void)setPitch:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setResourceList:(id)arg1;
- (void)setSearchPathURL:(id)arg1;
- (void)setVocalizerConfig:(id)arg1;
- (void)setVoiceConfig:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)syncWithConfigFile:(id)arg1;
- (id)vocalizerConfig;
- (id)voiceConfig;
- (float)volume;

@end

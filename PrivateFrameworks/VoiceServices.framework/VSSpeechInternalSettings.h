/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechInternalSettings : NSObject {
    bool  _internalBuild;
    NSUserDefaults * _internalDefaults;
    bool  _isInternalBuild;
}

@property (nonatomic) bool disableAssetCleaning;
@property (nonatomic) bool disableCache;
@property (nonatomic) bool enableLocalVoices;
@property (nonatomic, readonly) bool internalBuild;
@property (nonatomic, retain) NSUserDefaults *internalDefaults;
@property (nonatomic) bool isInternalBuild;

+ (id)standardInstance;

- (void).cxx_destruct;
- (bool)disableAssetCleaning;
- (bool)disableCache;
- (bool)enableLocalVoices;
- (id)init;
- (bool)internalBuild;
- (id)internalDefaults;
- (bool)isInternalBuild;
- (void)setDisableAssetCleaning:(bool)arg1;
- (void)setDisableCache:(bool)arg1;
- (void)setEnableLocalVoices:(bool)arg1;
- (void)setInternalDefaults:(id)arg1;
- (void)setIsInternalBuild:(bool)arg1;

@end

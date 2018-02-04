/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPVideoAudioAndSubtitleLanguageOptions : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *availableSubtitles;
@property (nonatomic, copy) NSArray *availableTracks;
@property (nonatomic, retain) SANPVideoLanguageOption *currentAudioTrack;
@property (nonatomic, retain) SANPVideoLanguageOption *currentSubtitles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)audioAndSubtitleLanguageOptions;
+ (id)audioAndSubtitleLanguageOptionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)availableSubtitles;
- (id)availableTracks;
- (id)currentAudioTrack;
- (id)currentSubtitles;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAvailableSubtitles:(id)arg1;
- (void)setAvailableTracks:(id)arg1;
- (void)setCurrentAudioTrack:(id)arg1;
- (void)setCurrentSubtitles:(id)arg1;

@end

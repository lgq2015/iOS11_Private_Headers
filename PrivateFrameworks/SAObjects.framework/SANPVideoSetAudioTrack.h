/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPVideoSetAudioTrack : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *desiredOptionId;
@property (nonatomic, copy) NSString *languageOptionChangeUserSetting;

+ (id)setAudioTrack;
+ (id)setAudioTrackWithDictionary:(id)arg1 context:(id)arg2;

- (id)desiredOptionId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)languageOptionChangeUserSetting;
- (bool)requiresResponse;
- (void)setDesiredOptionId:(id)arg1;
- (void)setLanguageOptionChangeUserSetting:(id)arg1;

@end

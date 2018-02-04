/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASmsPlayAudio : SABaseClientBoundCommand

@property (nonatomic, retain) SASmsSms *message;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)playAudio;
+ (id)playAudioWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)message;
- (bool)requiresResponse;
- (void)setMessage:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (long long)_afui_usefulUserResultType;

@end

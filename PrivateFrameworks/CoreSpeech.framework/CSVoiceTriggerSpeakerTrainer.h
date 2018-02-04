/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerSpeakerTrainer : NSObject

+ (id)sharedTrainer;

- (bool)_saveUtterance:(id)arg1 meta:(id)arg2 to:(id)arg3;
- (bool)trainUtterance:(id)arg1 languageCode:(id)arg2;

@end
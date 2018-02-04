/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIVoicemailPlayer : AFUIAudioPlayer {
    VMVoicemailManager * _voicemailManager;
    VMVoicemail * _voicemailObject;
}

@property (getter=_voicemailObject, setter=_setVoicemailObject:, nonatomic, retain) VMVoicemail *voicemailObject;

- (void).cxx_destruct;
- (id)_audioCategory;
- (unsigned long long)_audioOptions;
- (id)_audioURL;
- (void)_setVoicemailObject:(id)arg1;
- (void)_updateVoicemailPlayedState:(id)arg1 finished:(bool)arg2;
- (long long)_voicemailID;
- (id)_voicemailManager;
- (id)_voicemailObject;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (void)setPlaybackCommand:(id)arg1;

@end

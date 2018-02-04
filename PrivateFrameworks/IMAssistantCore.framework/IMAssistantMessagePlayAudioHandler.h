/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantMessagePlayAudioHandler : IMAssistantMessageQueryHandler <IMAssistantAudioPlayerDelegate, INPlayAudioMessageIntentHandling> {
    IMAssistantAudioPlayer * _audioPlayer;
    id /* block */  _completionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeAudioPlayer;
- (void)confirmPlayAudioMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)createAudioPlayerWithIdentifier:(id)arg1;
- (void)handlePlayAudioMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)imAssistantAudioPlayer:(id)arg1 didUpdateState:(long long)arg2;
- (void)queryAudioMessageURLForIntent:(id)arg1 completion:(id /* block */)arg2;

@end

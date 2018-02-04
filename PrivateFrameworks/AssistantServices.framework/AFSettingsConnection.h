/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSettingsConnection : NSObject {
    NSXPCConnection * _connection;
    <AFSettingsDelegate> * _delegate;
    AFVoiceInfo * _selectedVoice;
    NSArray * _voices;
    NSObject<OS_dispatch_queue> * _voicesQueue;
}

@property (setter=_setDelegate:, nonatomic) <AFSettingsDelegate> *_delegate;

- (void).cxx_destruct;
- (void)_clearConnection;
- (void)_clearSyncNeededForKey:(id)arg1;
- (id)_connection;
- (id)_delegate;
- (void)_fetchPeerData:(id /* block */)arg1;
- (id)_filterVoices:(id)arg1 forLanguage:(id)arg2;
- (void)_runServiceMaintenance;
- (void)_setDelegate:(id)arg1;
- (void)_setSyncNeededForReason:(id)arg1;
- (void)_setSyncVerificationNeededAndFullReportNeeded:(bool)arg1 shouldPostNotification:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setVoices:(id)arg1;
- (id)_settingsService;
- (id)_settingsServiceWithErrorHandler:(id /* block */)arg1;
- (void)_startDeepSyncVerificationForKeys:(id)arg1;
- (void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(bool)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)_tellDelegatePartialVerificationResult:(id)arg1;
- (void)_tellDelegateServerVerificationReport:(id)arg1;
- (void)_updateVoicesIncludingAssetInfo:(bool)arg1 completion:(id /* block */)arg2;
- (id)_voices;
- (id)accounts;
- (void)barrier;
- (void)createOfflineSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)disableAndDeleteCloudSyncWithCompletion:(id /* block */)arg1;
- (void)disableDESWithCompletion:(id /* block */)arg1;
- (void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchExperimentConfigurationsWithCompletion:(id /* block */)arg1;
- (void)fetchExperimentContextWithCompletion:(id /* block */)arg1;
- (void)fetchSupportedLanguageCodes:(id /* block */)arg1;
- (void)getAvailableVoicesForLanguage:(id)arg1 includeAssetInfo:(bool)arg2 completion:(id /* block */)arg3;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 includeAssetInfo:(bool)arg2 completion:(id /* block */)arg3;
- (void)getAvailableVoicesForSynthesisLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)getOfflineDictationStatusWithCompletion:(id /* block */)arg1;
- (void)getPeerIdentifiers:(id /* block */)arg1;
- (id)init;
- (void)killDaemon;
- (void)purgeAnalyticsStoreWithCompletion:(id /* block */)arg1;
- (void)resetAnalyticsStoreWithCompletion:(id /* block */)arg1;
- (void)runAdaptationRecipeEvaluation:(id)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (void)runLiveAdaptationRecipeEvaluationWithBaseURL:(id)arg1 completion:(id /* block */)arg2;
- (void)saveAccount:(id)arg1 setActive:(bool)arg2;
- (void)sendMetricsToServerWithCompletion:(id /* block */)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setAssistantEnabled:(bool)arg1;
- (void)setDESLotteryWinOverrideEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDESPolicyCDNOverride:(id)arg1 completion:(id /* block */)arg2;
- (void)setDESRecordingAlwaysIsEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDictationEnabled:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLanguage:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(id /* block */)arg2;
- (void)setOutputVoice:(id)arg1;
- (void)setOutputVoice:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)startAudioPlaybackRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(id /* block */)arg3;
- (void)startUIRequest:(id)arg1;
- (void)startUIRequestWithSpeechAudioFileURL:(id)arg1;
- (void)startUIRequestWithText:(id)arg1;
- (void)stopAllAudioPlaybackRequests:(bool)arg1;
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(bool)arg2;
- (void)updateOfflineSpeechProfileWithLanguage:(id)arg1 completion:(id /* block */)arg2;

@end

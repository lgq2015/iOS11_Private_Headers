/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionSession : NSObject {
    NSString * _audioInputPath;
    VSRecognitionAction * _currentAction;
    NSString * _debugDumpPath;
    <VSRecognitionSessionDelegate> * _delegate;
    id  _handlingThread;
    VSKeepAlive * _keepAlive;
    unsigned long long  _keywordPhase;
    NSString * _languageID;
    double  _levelInterval;
    NSString * _modelIdentifier;
    struct { 
        unsigned int delegateWillBegin : 1; 
        unsigned int delegateBegin : 1; 
        unsigned int delegateOpenURL : 1; 
        unsigned int delegateFinishedSpeaking : 1; 
        unsigned int delegateComplete : 1; 
        unsigned int debugDumpEnabled : 1; 
        unsigned int preferredEngine : 2; 
        unsigned int performHandlerActions : 1; 
        unsigned int allowSensitiveActions : 1; 
        unsigned int bluetoothAllowed : 1; 
        unsigned int resetNextAction : 1; 
        unsigned int isSpeaking : 1; 
        unsigned int actionBegan : 1; 
        unsigned int actionBeginning : 1; 
        unsigned int actionBeginDeferred : 1; 
        unsigned int invalid : 1; 
        unsigned int observeKeywordChange : 1; 
    }  _sessionFlags;
    VSSpeechSynthesizer * _synthesizer;
    NSArray * _topLevelKeywords;
}

- (void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3;
- (bool)_actionStarted:(id)arg1;
- (id)_beginSpeakingAttributedString:(id)arg1;
- (id)_beginSpeakingString:(id)arg1 attributedString:(id)arg2;
- (struct __CFDictionary { }*)_createKeywordIndex;
- (id)_createPhaseSortedKeywordsFromArray:(id)arg1;
- (id)_currentRecognizeAction;
- (void)_init;
- (void)_keywordIndexChanged;
- (id)_keywordsForModelIdentifier:(id)arg1;
- (void)_notifyDelegateActionStarted;
- (void)_notifyDelegateFinishedSpeakingWithError:(id)arg1;
- (id)_notifyDelegateOpenURL:(id)arg1;
- (id)_recognitionResultHandlingThread;
- (void)_setAction:(id)arg1;
- (id)_topLevelKeywords;
- (id)beginNextAction;
- (id)beginSpeakingFeedbackString;
- (id)beginSpeakingString:(id)arg1;
- (id)cancel;
- (id)cancelMaintainingKeepAlive:(bool)arg1;
- (void)dealloc;
- (id)debugDumpPath;
- (id)displayResultString;
- (id)displayStatusString;
- (bool)hasDeferredAction;
- (id)init;
- (id)initWithModelIdentifier:(id)arg1;
- (float)inputLevel;
- (float)inputLevelDB;
- (bool)isActivelyRecognizing;
- (bool)isBusy;
- (bool)isFinished;
- (bool)isRecognizing;
- (bool)isValid;
- (id)keywordAtIndex:(long long)arg1;
- (long long)keywordCount;
- (bool)nextActionWillRecognize;
- (bool)nextActionWillTerminateSession;
- (void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3;
- (id)reset;
- (bool)sensitiveActionsEnabled;
- (bool)setBluetoothInputAllowed:(bool)arg1;
- (bool)setDebugDumpEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputLevelUpdateInterval:(double)arg1;
- (void)setKeywordPhase:(unsigned long long)arg1;
- (bool)setNextRecognitionAudioInputPath:(id)arg1;
- (bool)setNextRecognitionRequiresReset:(bool)arg1;
- (void)setPerformRecognitionHandlerActions:(bool)arg1;
- (bool)setPreferredEngine:(int)arg1;
- (void)setSensitiveActionsEnabled:(bool)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(bool)arg2 withError:(id)arg3;
- (id)spokenFeedbackAttributedString;
- (id)spokenFeedbackString;

@end
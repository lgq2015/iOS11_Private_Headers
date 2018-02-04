/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionRecognizeAction : VSRecognitionAction {
    NSString * _audioInputPath;
    NSString * _debugDumpPath;
    NSArray * _keywords;
    double  _levelInterval;
    NSString * _modelIdentifier;
    void * _recognition;
    struct { 
        unsigned int debugDumpEnabled : 1; 
        unsigned int preferredEngine : 2; 
        unsigned int resetEngine : 1; 
        unsigned int bluetoothAllowed : 1; 
        unsigned int hasStarted : 1; 
    }  _recognizeFlags;
    NSArray * _results;
}

- (id)_actionForEmptyResults;
- (void)_configureNewRecognitionInstance;
- (void)_continueAfterDeferredStart;
- (struct __VSRecognition { }*)_createRecognitionInstanceWithCallbacks:(struct { int (*x1)(); int (*x2)(); int (*x3)(); }*)arg1 info:(void*)arg2;
- (id)_debugDumpPath;
- (void)_handleRecognitionCompleted:(struct __VSRecognition { }*)arg1 withResults:(struct __CFArray { }*)arg2 error:(struct __CFError { }*)arg3;
- (void)_handleRecognitionPrepared:(struct __VSRecognition { }*)arg1;
- (void)_handleRecognitionStarted:(struct __VSRecognition { }*)arg1;
- (void)_handledThreadedResults:(id)arg1 nextAction:(id)arg2;
- (bool)_hasDeferredStartCallback;
- (float)_inputLevel;
- (float)_inputLevelDB;
- (bool)_isActivelyRecognizing;
- (bool)_isRecognizing;
- (id)_keywordAtIndex:(long long)arg1;
- (long long)_keywordCount;
- (bool)_keywordIndexChanged;
- (id)_keywords;
- (void)_releaseFromPrepare;
- (void)_reset;
- (bool)_setAudioInputPath:(id)arg1;
- (bool)_setBluetoothInputAllowed:(bool)arg1;
- (bool)_setDebugDumpEnabled:(bool)arg1;
- (bool)_setDebugDumpEnabled:(bool)arg1 dumpPath:(id)arg2;
- (bool)_setDebugDumpPath:(id)arg1;
- (bool)_setEngineResetRequired:(bool)arg1;
- (bool)_setInputLevelUpdateInterval:(double)arg1;
- (bool)_setPreferredEngine:(int)arg1;
- (void)_setResults:(id)arg1;
- (id)cancel;
- (int)completionType;
- (void)dealloc;
- (id)initWithModelIdentifier:(id)arg1;
- (id)modelIdentifier;
- (id)perform;

@end

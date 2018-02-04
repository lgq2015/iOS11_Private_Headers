/* made by EzioChiu
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface SFSpeechRecognitionRequest : NSObject {
    NSArray * _contextualStrings;
    bool  _detectMultipleUtterances;
    bool  _forceOfflineRecognition;
    NSString * _interactionIdentifier;
    double  _maxiumRecognitionDuration;
    NSURL * _modelOverrideURL;
    NSDictionary * _recognitionOverrides;
    _SFSearchRequest * _searchRequest;
    bool  _shouldReportPartialResults;
    long long  _taskHint;
    NSDictionary * _voiceTriggerEventInfo;
}

@property (getter=_forceOfflineRecognition, setter=_setForceOfflineRecognition:, nonatomic) bool _forceOfflineRecognition;
@property (getter=_maximumRecognitionDuration, setter=_setMaximumRecognitionDuration:, nonatomic) double _maxiumRecognitionDuration;
@property (getter=_modelOverrideURL, setter=_setModelOverrideURL:, nonatomic, retain) NSURL *_modelOverrideURL;
@property (getter=_recognitionOverrides, setter=_setRecognitionOverrides:, nonatomic, retain) NSDictionary *_recognitionOverrides;
@property (getter=_searchRequest, setter=_setSearchRequest:, nonatomic, retain) _SFSearchRequest *_searchRequest;
@property (getter=_voiceTriggerEventInfo, setter=_setVoiceTriggerEventInfo:, nonatomic, retain) NSDictionary *_voiceTriggerEventInfo;
@property (nonatomic, copy) NSArray *contextualStrings;
@property (nonatomic) bool detectMultipleUtterances;
@property (nonatomic, copy) NSString *interactionIdentifier;
@property (nonatomic) bool shouldReportPartialResults;
@property (nonatomic) long long taskHint;

- (void).cxx_destruct;
- (id)_dictationOptionsWithTaskHint:(long long)arg1 requestIdentifier:(id)arg2;
- (bool)_forceOfflineRecognition;
- (double)_maximumRecognitionDuration;
- (id)_modelOverrideURL;
- (bool)_powerMeteringAvailable;
- (id)_recognitionOverrides;
- (id)_searchRequest;
- (id)_searchRequests;
- (void)_setForceOfflineRecognition:(bool)arg1;
- (void)_setMaximumRecognitionDuration:(double)arg1;
- (void)_setModelOverrideURL:(id)arg1;
- (void)_setRecognitionOverrides:(id)arg1;
- (void)_setSearchRequest:(id)arg1;
- (void)_setSearchRequests:(id)arg1;
- (void)_setVoiceTriggerEventInfo:(id)arg1;
- (id)_speechRequestOptions;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;
- (id)_voiceTriggerEventInfo;
- (bool)automaticallyEndpoint;
- (id)contextualStrings;
- (bool)detectMultipleUtterances;
- (id)init;
- (id)interactionIdentifier;
- (void)setContextualStrings:(id)arg1;
- (void)setDetectMultipleUtterances:(bool)arg1;
- (void)setInteractionIdentifier:(id)arg1;
- (void)setShouldReportPartialResults:(bool)arg1;
- (void)setTaskHint:(long long)arg1;
- (bool)shouldReportPartialResults;
- (long long)taskHint;

@end

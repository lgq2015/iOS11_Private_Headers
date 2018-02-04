/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeatureTextMessageScanner : IPFeatureScanner {
    NSArray * _contextMessageUnits;
    NSMutableArray * _dataFeaturesExtractedInContextAndMain;
    NSMutableArray * _detectedEventsInContext;
    bool  _followProposal;
}

@property (retain) NSArray *contextMessageUnits;
@property (nonatomic, retain) NSMutableArray *dataFeaturesExtractedInContextAndMain;
@property (retain) NSMutableArray *detectedEventsInContext;
@property bool followProposal;

- (void).cxx_destruct;
- (id)commonComponentsForConfidence;
- (double)confidenceForEvent:(id)arg1 baseConfidence:(double)arg2;
- (void)confidenceForEvents:(id)arg1;
- (id)contextMessageUnits;
- (id)dataDetectorsFeaturesForMessageUnit:(id)arg1 context:(id)arg2;
- (id)dataFeaturesExtractedInContextAndMain;
- (id)detectedEventsInContext;
- (void)doSynchronousScanWithCompletionHandler:(id /* block */)arg1;
- (id)eventSpecificComponentsForConfidence:(id)arg1;
- (double)experimentalConfidenceForEvent:(id)arg1 experimentalBaseConfidence:(double)arg2;
- (void)experimentalConfidenceForEvents:(id)arg1;
- (bool)followProposal;
- (id)keywordFeaturesForMessageUnit:(id)arg1;
- (unsigned long long)mainSentencePolarityFrom:(id)arg1;
- (unsigned long long)mainSentencePolarityFromMessageUnit:(id)arg1 index:(unsigned long long)arg2;
- (id)processScanOfMainMessageUnit:(id)arg1 contextMessageUnits:(id)arg2;
- (void)resetScanState;
- (void)scanEventsInMessageUnits:(id)arg1 contextMessageUnits:(id)arg2 synchronously:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)scanEventsInMessageUnits:(id)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)sentenceFeaturesForMessageUnit:(id)arg1;
- (void)setContextMessageUnits:(id)arg1;
- (void)setDataFeaturesExtractedInContextAndMain:(id)arg1;
- (void)setDetectedEventsInContext:(id)arg1;
- (void)setFollowProposal:(bool)arg1;

@end

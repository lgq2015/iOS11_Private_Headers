/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDetectedAttributeMetrics : NSObject {
    SGMContactDetailExtraction * _petGenClassInstance;
}

@property (nonatomic, retain) SGMContactDetailExtraction *petGenClassInstance;

+ (void)_recordExtractionEventFromSource:(struct SGMDocumentType_ { unsigned long long x1; })arg1 foundInSignature:(bool)arg2 detailType:(struct SGMContactDetailType_ { unsigned long long x1; })arg3 outcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg4 foundInSenderCNContact:(bool)arg5;
+ (void)_recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 detailType:(struct SGMContactDetailType_ { unsigned long long x1; })arg2 fromEntity:(id)arg3 foundInSignature:(bool)arg4 detailType:(unsigned long long)arg5 detailValue:(id)arg6;
+ (id)instance;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 fromEntity:(id)arg2;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 fromEntity:(id)arg2 foundInSignature:(bool)arg3 detection:(id)arg4;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x1; })arg1 fromEntity:(id)arg2 foundInSignature:(bool)arg3 match:(id)arg4;

- (void).cxx_destruct;
- (id)init;
- (id)petGenClassInstance;
- (void)setPetGenClassInstance:(id)arg1;

@end

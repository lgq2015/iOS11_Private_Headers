/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectTextRectanglesRequest : VNImageBasedRequest {
    unsigned long long  _algorithm;
    bool  _detectDiacritics;
    bool  _minimizeFalseDetections;
    unsigned long long  _minimumCharacterPixelHeight;
    bool  _reportCharacterBoxes;
    NSString * _textRecognition;
}

@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) bool detectDiacritics;
@property (nonatomic) bool minimizeFalseDetections;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight;
@property (nonatomic) bool reportCharacterBoxes;
@property (nonatomic, copy) NSString *textRecognition;

+ (void)initialize;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (void).cxx_destruct;
- (bool)_detectCreditCardTextWithRequestPerformingContext:(id)arg1 error:(id*)arg2;
- (bool)_detectTextWithRequestPerformingContext:(id)arg1 error:(id*)arg2;
- (unsigned long long)algorithm;
- (void)applyConfigurationOfRequest:(id)arg1;
- (bool)detectDiacritics;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (bool)minimizeFalseDetections;
- (unsigned long long)minimumCharacterPixelHeight;
- (id)observationsCacheKey;
- (bool)reportCharacterBoxes;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setAlgorithm:(unsigned long long)arg1;
- (void)setDetectDiacritics:(bool)arg1;
- (void)setMinimizeFalseDetections:(bool)arg1;
- (void)setMinimumCharacterPixelHeight:(unsigned long long)arg1;
- (void)setReportCharacterBoxes:(bool)arg1;
- (void)setTextRecognition:(id)arg1;
- (id)textRecognition;

@end

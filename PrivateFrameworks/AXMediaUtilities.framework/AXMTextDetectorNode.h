/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding> {
    bool  _detectDiacritics;
    unsigned long long  _detectionFlavor;
    bool  _minimizeFalsePositives;
    double  _minimumCharacterHeight;
    bool  _returnSubFeatures;
    FKTextDetector * _textDetector;
    AXMTextLayoutManager * _textLayoutManager;
}

@property (nonatomic) bool detectDiacritics;
@property (nonatomic) unsigned long long detectionFlavor;
@property (nonatomic) bool minimizeFalsePositives;
@property (nonatomic) double minimumCharacterHeight;
@property (nonatomic) bool returnSubFeatures;

+ (bool)isSupported;
+ (id)supportedDetectionLanguages;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)_evaluateWithFutharkFlavor:(id)arg1;
- (void)_evaluateWithVisionFlavor:(id)arg1;
- (id)_visionTextDetectionOptionForLangauge:(id)arg1;
- (bool)detectDiacritics;
- (unsigned long long)detectionFlavor;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1;
- (void)freeResources;
- (id)initWithCoder:(id)arg1;
- (bool)minimizeFalsePositives;
- (double)minimumCharacterHeight;
- (void)nodeInitialize;
- (bool)requiresVisionFramework;
- (bool)returnSubFeatures;
- (void)setDetectDiacritics:(bool)arg1;
- (void)setDetectionFlavor:(unsigned long long)arg1;
- (void)setMinimizeFalsePositives:(bool)arg1;
- (void)setMinimumCharacterHeight:(double)arg1;
- (void)setReturnSubFeatures:(bool)arg1;
- (bool)shouldEvaluate:(id)arg1;

@end

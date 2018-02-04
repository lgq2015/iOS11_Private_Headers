/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding> {
    long long  _clientID;
    bool  _correctSpelling;
    bool  _detectFaces;
    bool  _detectHorizon;
    bool  _detectHumans;
    bool  _detectModelClassifications;
    bool  _detectRectangles;
    bool  _detectScenes;
    bool  _detectText;
    bool  _detectTraits;
    bool  _includeImageInResult;
    NSSet * _spellCheckingLanguages;
    AXMLanguage * _textDetectionLanguage;
}

@property (nonatomic) long long clientID;
@property (nonatomic) bool correctSpelling;
@property (nonatomic) bool detectFaces;
@property (nonatomic) bool detectHorizon;
@property (nonatomic) bool detectHumans;
@property (nonatomic) bool detectModelClassifications;
@property (nonatomic) bool detectRectangles;
@property (nonatomic) bool detectScenes;
@property (nonatomic) bool detectText;
@property (nonatomic) bool detectTraits;
@property (nonatomic) bool includeImageInResult;
@property (nonatomic, retain) NSSet *spellCheckingLanguages;
@property (nonatomic, retain) AXMLanguage *textDetectionLanguage;

+ (id)defaultOptions;
+ (bool)supportsSecureCoding;
+ (id)voiceOverOptions;

- (void).cxx_destruct;
- (long long)clientID;
- (bool)correctSpelling;
- (bool)detectFaces;
- (bool)detectHorizon;
- (bool)detectHumans;
- (bool)detectModelClassifications;
- (bool)detectRectangles;
- (bool)detectScenes;
- (bool)detectText;
- (bool)detectTraits;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeImageInResult;
- (id)initWithCoder:(id)arg1;
- (void)setClientID:(long long)arg1;
- (void)setCorrectSpelling:(bool)arg1;
- (void)setDetectFaces:(bool)arg1;
- (void)setDetectHorizon:(bool)arg1;
- (void)setDetectHumans:(bool)arg1;
- (void)setDetectModelClassifications:(bool)arg1;
- (void)setDetectRectangles:(bool)arg1;
- (void)setDetectScenes:(bool)arg1;
- (void)setDetectText:(bool)arg1;
- (void)setDetectTraits:(bool)arg1;
- (void)setIncludeImageInResult:(bool)arg1;
- (void)setSpellCheckingLanguages:(id)arg1;
- (void)setTextDetectionLanguage:(id)arg1;
- (id)spellCheckingLanguages;
- (id)textDetectionLanguage;

@end

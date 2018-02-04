/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManagerConfig : NSObject {
    bool  _allowsSpaceCorrections;
    bool  _completionsShouldSharePrefix;
    NSString * _dynamicResourcePath;
    TIInputMode * _inputMode;
    unsigned long long  _maxWordsPerPrediction;
    NSString * _ngramModelPath;
    NSString * _staticDictionaryPath;
    bool  _testing;
    bool  _usesAdaptation;
    bool  _usesRetrocorrection;
    bool  _usesTextChecker;
    bool  _usesWordNgramModel;
}

@property (nonatomic) bool allowsSpaceCorrections;
@property (nonatomic) bool completionsShouldSharePrefix;
@property (nonatomic, copy) NSString *dynamicResourcePath;
@property (nonatomic, retain) TIInputMode *inputMode;
@property (nonatomic) unsigned long long maxWordsPerPrediction;
@property (nonatomic, copy) NSString *ngramModelPath;
@property (nonatomic, copy) NSString *staticDictionaryPath;
@property (getter=isTesting, nonatomic) bool testing;
@property (nonatomic) bool usesAdaptation;
@property (nonatomic) bool usesRetrocorrection;
@property (nonatomic) bool usesTextChecker;
@property (nonatomic) bool usesWordNgramModel;
@property (nonatomic) bool usesWordNgramModelAdaptation;

+ (id)configurationForInputMode:(id)arg1;

- (bool)allowsSpaceCorrections;
- (bool)completionsShouldSharePrefix;
- (void)dealloc;
- (id)dynamicResourcePath;
- (id)inputMode;
- (bool)isTesting;
- (unsigned long long)maxWordsPerPrediction;
- (id)ngramModelPath;
- (id)propertyList;
- (void)setAllowsSpaceCorrections:(bool)arg1;
- (void)setCompletionsShouldSharePrefix:(bool)arg1;
- (void)setDynamicResourcePath:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setMaxWordsPerPrediction:(unsigned long long)arg1;
- (void)setNgramModelPath:(id)arg1;
- (void)setStaticDictionaryPath:(id)arg1;
- (void)setTesting:(bool)arg1;
- (void)setUsesAdaptation:(bool)arg1;
- (void)setUsesRetrocorrection:(bool)arg1;
- (void)setUsesTextChecker:(bool)arg1;
- (void)setUsesWordNgramModel:(bool)arg1;
- (void)setUsesWordNgramModelAdaptation:(bool)arg1;
- (id)staticDictionaryPath;
- (bool)usesAdaptation;
- (bool)usesRetrocorrection;
- (bool)usesTextChecker;
- (bool)usesWordNgramModel;
- (bool)usesWordNgramModelAdaptation;

@end

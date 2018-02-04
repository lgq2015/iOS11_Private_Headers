/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGModel : NSObject <PMLPlistAndChunksSerializableProtocol> {
    NSString * _locale;
    <PMLRegressionModelProtocol><PMLPlistAndChunksSerializableProtocol> * _model;
    double  _threshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *locale;
@property (readonly) <PMLRegressionModelProtocol><PMLPlistAndChunksSerializableProtocol> *model;
@property (readonly) Class superclass;
@property (readonly) double threshold;

+ (id)featuresOf:(id)arg1 inLanguage:(id)arg2;
+ (id)featuresOf:(id)arg1 inLanguage:(id)arg2 withObjective:(unsigned long long)arg3;
+ (id)featurize:(id)arg1;
+ (Class)modelClassForObjective:(unsigned long long)arg1;
+ (id)modelForEntity:(id)arg1 type:(id)arg2 mode:(unsigned long long)arg3 language:(id)arg4 class:(Class)arg5;
+ (id)modelForName:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3;
+ (id)newTransformerInstanceForLanguage:(id)arg1;
+ (id)temporaryKeyMap;
+ (id)transformerInstanceForLanguage:(id)arg1;

- (void).cxx_destruct;
- (id)featuresOf:(id)arg1;
- (id)initWithModel:(id)arg1 decisionThreshold:(double)arg2 locale:(id)arg3;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)locale;
- (struct SGMFoundInMailModelType_ { unsigned long long x1; })metricsFoundInMailModelType;
- (struct SGMSelfIdModelType_ { unsigned long long x1; })metricsSelfIdModelType;
- (id)model;
- (bool)predict:(id)arg1;
- (double)threshold;
- (id)toPlistWithChunks:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKText : NSObject {
    NSMutableArray * _annotations;
    NSString * _languageID;
    NSString * _processedText;
    NSString * _string;
    bool  _trainVerbatim;
    double  _trainingWeight;
}

@property (retain) NSMutableArray *annotations;
@property (retain) NSString *languageID;
@property (retain) NSString *processedText;
@property (retain) NSString *string;
@property bool trainVerbatim;
@property double trainingWeight;

+ (id)annotationNameFromType:(unsigned long long)arg1;
+ (unsigned long long)annotationTypeFromName:(id)arg1;
+ (bool)canClassifyPolarityForLanguageIdentifier:(id)arg1 withOptions:(unsigned long long)arg2;
+ (bool)canClassifyPolarityForLanguageIdentifier:(id)arg1 withOptions:(unsigned long long)arg2 dataProvider:(id)arg3;
+ (id)defaultDataProvider;
+ (void)initialize;
+ (id)polarityNameFromType:(unsigned long long)arg1;
+ (unsigned long long)polarityTypeFromName:(id)arg1;

- (void).cxx_destruct;
- (void)annotateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 type:(unsigned long long)arg2;
- (void)annotateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 type:(unsigned long long)arg2 machineGenerated:(bool)arg3;
- (unsigned long long)annotatedPolarity;
- (id)annotations;
- (bool)cleanupData;
- (void)enumerateAnnotationsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2;
- (id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2 trainingWeight:(double)arg3 trainVerbatim:(bool)arg4;
- (id)languageID;
- (id)lsmText;
- (unsigned long long)polarityClassificationWithOptions:(unsigned long long)arg1;
- (unsigned long long)polarityClassificationWithOptions:(unsigned long long)arg1 dataProvider:(id)arg2;
- (id)processedText;
- (void)setAnnotations:(id)arg1;
- (void)setLanguageID:(id)arg1;
- (void)setProcessedText:(id)arg1;
- (void)setString:(id)arg1;
- (void)setTrainVerbatim:(bool)arg1;
- (void)setTrainingWeight:(double)arg1;
- (id)string;
- (id)subTextWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)subTextsByPolarity;
- (id)taggedText;
- (bool)trainVerbatim;
- (double)trainingWeight;

@end

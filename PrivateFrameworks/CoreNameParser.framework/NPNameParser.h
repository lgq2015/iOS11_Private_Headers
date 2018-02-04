/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreNameParser.framework/CoreNameParser
 */

@interface NPNameParser : NSObject {
    NPHMMClassifier * _classifier;
    double  _confidenceThreshold;
    NPNameComponentsData * _nameComponentsData;
}

@property (retain) NPHMMClassifier *classifier;

- (void).cxx_destruct;
- (id)classifier;
- (void)dealloc;
- (id)init;
- (bool)isPrefix:(id)arg1;
- (bool)isSuffix:(id)arg1;
- (unsigned long long)namingTraditionForName:(id)arg1;
- (id)normalizeFullname:(id)arg1;
- (id)normalizedAffix:(id)arg1;
- (id)parseChineseName:(id)arg1;
- (id)parseChineseName:(id)arg1 normalize:(bool)arg2;
- (id)parseFullnameWithDefaultHMMClassifier:(id)arg1;
- (id)parseFullnameWithDefaultHMMClassifier:(id)arg1 normalize:(bool)arg2 score:(double*)arg3;
- (id)parseJapaneseName:(id)arg1;
- (id)parseJapaneseName:(id)arg1 normalize:(bool)arg2;
- (id)parseKoreanName:(id)arg1;
- (id)parseKoreanName:(id)arg1 normalize:(bool)arg2;
- (id)parseLatinName:(id)arg1 score:(double*)arg2;
- (id)personNameCompomentsFromPrefix:(id)arg1 suffix:(id)arg2 givenNames:(id)arg3 middleNames:(id)arg4 familyNames:(id)arg5;
- (id)personNameComponentsFromString:(id)arg1;
- (void)setClassifier:(id)arg1;
- (struct _CFBurstTrie { }*)sharedNameFrequencyTrieRef;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingCosineComponents : NSObject {
    NSArray * _InverseDocFrequencies;
    NSArray * _TermFrequencies;
    NSArray * _TermFrequenciesWeighted;
    NSArray * _TermInverseDoc;
    NSArray * _TermInverseDocWeighted;
    unsigned long long  _fieldLength;
}

@property (nonatomic, retain) NSArray *InverseDocFrequencies;
@property (nonatomic, retain) NSArray *TermFrequencies;
@property (nonatomic, retain) NSArray *TermFrequenciesWeighted;
@property (nonatomic, retain) NSArray *TermInverseDoc;
@property (nonatomic, retain) NSArray *TermInverseDocWeighted;
@property (nonatomic) unsigned long long fieldLength;

- (void).cxx_destruct;
- (id)InverseDocFrequencies;
- (id)TermFrequencies;
- (id)TermFrequenciesWeighted;
- (id)TermInverseDoc;
- (id)TermInverseDocWeighted;
- (unsigned long long)fieldLength;
- (void)setFieldLength:(unsigned long long)arg1;
- (void)setInverseDocFrequencies:(id)arg1;
- (void)setTermFrequencies:(id)arg1;
- (void)setTermFrequenciesWeighted:(id)arg1;
- (void)setTermInverseDoc:(id)arg1;
- (void)setTermInverseDocWeighted:(id)arg1;

@end

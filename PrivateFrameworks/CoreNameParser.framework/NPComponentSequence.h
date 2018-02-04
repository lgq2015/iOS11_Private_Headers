/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreNameParser.framework/CoreNameParser
 */

@interface NPComponentSequence : NSObject {
    double  _emissionModelScore;
    bool  _favorite;
    NSArray * _observation;
    NSArray * _oovIndices;
    double  _score;
    NSArray * _sequence;
    double  _stateModelScore;
}

@property double emissionModelScore;
@property (getter=isFavorite) bool favorite;
@property (copy) NSArray *observation;
@property (copy) NSArray *oovIndices;
@property double score;
@property (copy) NSArray *sequence;
@property double stateModelScore;

- (void).cxx_destruct;
- (id)description;
- (double)emissionModelScore;
- (id)initWithObservationSequence:(id)arg1 hiddenSequence:(id)arg2 oovIndices:(id)arg3 emissionModelScore:(double)arg4 stateModelScore:(double)arg5 boost:(double)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToComponentSequence:(id)arg1;
- (bool)isFavorite;
- (id)observation;
- (id)oovIndices;
- (id)oovTokens;
- (double)score;
- (id)sequence;
- (void)setEmissionModelScore:(double)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setObservation:(id)arg1;
- (void)setOovIndices:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSequence:(id)arg1;
- (void)setStateModelScore:(double)arg1;
- (void)setValue:(id)arg1 atSequenceIndex:(unsigned long long)arg2;
- (double)stateModelScore;

@end

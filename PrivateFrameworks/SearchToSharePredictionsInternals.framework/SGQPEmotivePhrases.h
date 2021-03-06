/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPEmotivePhrases : NSObject {
    NSArray * _receivedPhrases;
    NSArray * _sentPhrases;
    double  _timeHalfLife;
    struct NSDictionary { Class x1; } * _weights;
}

- (void).cxx_destruct;
- (id)allPhraseDefsForTesting;
- (id)init;
- (id)initWithWeights:(struct NSDictionary { Class x1; }*)arg1 rawPhrases:(id)arg2;
- (id)phrasesInMessages:(id)arg1;

@end

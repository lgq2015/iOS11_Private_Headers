/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictions.framework/SearchToSharePredictions
 */

@interface SGQPPrediction : NSObject <NSSecureCoding> {
    NSString * _identifier;
    unsigned long long  _phraseId;
    NSString * _query;
    double  _score;
    long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isPhrasePrediction;
@property (nonatomic, readonly) unsigned long long phraseId;
@property (nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 prediction:(id)arg3 score:(double)arg4 phraseId:(unsigned long long)arg5;
- (id)initWithType:(long long)arg1 prediction:(id)arg2 score:(double)arg3;
- (id)initWithType:(long long)arg1 prediction:(id)arg2 score:(double)arg3 phraseId:(unsigned long long)arg4;
- (bool)isPhrasePrediction;
- (unsigned long long)phraseId;
- (id)query;
- (double)score;
- (id)searchSuggestion;
- (long long)type;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPQueryRank : NSObject <NSSecureCoding> {
    id /* block */  _aggregationFunction;
    NSString * _query;
    NSArray * _rankScores;
    double  _score;
}

@property (readonly, copy) NSString *contactID;
@property (readonly) unsigned long long frequency;
@property (readonly, copy) NSString *query;
@property (readonly) NSArray *rankScores;
@property (readonly, copy) NSSet *reasons;
@property (readonly) double score;
@property (readonly, copy) NSSet *suggestionTypes;

+ (id)rankWithQuery:(id)arg1 aggregationFunction:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addRankScore:(id)arg1;
- (id)contactID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frequency;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1 aggregationFunction:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRank:(id)arg1;
- (id)query;
- (id)rankScores;
- (id)reasons;
- (double)score;
- (id)suggestionTypes;

@end

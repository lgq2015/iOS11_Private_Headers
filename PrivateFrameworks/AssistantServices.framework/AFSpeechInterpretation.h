/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechInterpretation : NSObject <NSSecureCoding> {
    NSArray * _tokens;
}

@property (nonatomic, copy) NSArray *tokens;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)averageConfidenceScore;
- (long long)confidenceScore;
- (long long)confidenceScoreAvg;
- (long long)confidenceScoreMax;
- (long long)confidenceScoreMin;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)text;
- (id)tokens;

@end

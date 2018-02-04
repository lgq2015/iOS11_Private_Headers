/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechUtterance : NSObject <NSSecureCoding> {
    long long  _confidenceScore;
    NSArray * _interpretationIndices;
    long long  _source;
}

@property (nonatomic) long long confidenceScore;
@property (nonatomic, copy) NSArray *interpretationIndices;
@property (nonatomic) long long source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)confidenceScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2;
- (id)interpretationIndices;
- (bool)isEqual:(id)arg1;
- (void)setConfidenceScore:(long long)arg1;
- (void)setInterpretationIndices:(id)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

@end

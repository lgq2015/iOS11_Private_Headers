/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechToken : NSObject <NSSecureCoding> {
    long long  _confidenceScore;
    double  _endTime;
    NSString * _phoneSequence;
    bool  _removeSpaceAfter;
    bool  _removeSpaceBefore;
    double  _silenceStartTime;
    double  _startTime;
    NSString * _text;
}

@property (nonatomic) long long confidenceScore;
@property (nonatomic) double endTime;
@property (nonatomic, copy) NSString *phoneSequence;
@property (nonatomic) bool removeSpaceAfter;
@property (nonatomic) bool removeSpaceBefore;
@property (nonatomic) double silenceStartTime;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aceToken;
- (long long)confidenceScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)phoneSequence;
- (bool)removeSpaceAfter;
- (bool)removeSpaceBefore;
- (void)setConfidenceScore:(long long)arg1;
- (void)setEndTime:(double)arg1;
- (void)setPhoneSequence:(id)arg1;
- (void)setRemoveSpaceAfter:(bool)arg1;
- (void)setRemoveSpaceBefore:(bool)arg1;
- (void)setSilenceStartTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setText:(id)arg1;
- (double)silenceStartTime;
- (double)startTime;
- (id)text;

@end

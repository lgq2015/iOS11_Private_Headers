/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechPhrase : NSObject <NSSecureCoding> {
    NSArray * _interpretations;
    bool  _isLowConfidence;
}

@property (nonatomic, copy) NSArray *interpretations;
@property (nonatomic) bool isLowConfidence;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct NSDictionary { Class x1; }*)allInterpretationStringsAndScores;
- (id)bestInterpretation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstInterpretation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretations:(id)arg1 isLowConfidence:(bool)arg2;
- (id)interpretations;
- (bool)isEqual:(id)arg1;
- (bool)isLowConfidence;
- (void)setInterpretations:(id)arg1;
- (void)setIsLowConfidence:(bool)arg1;

@end

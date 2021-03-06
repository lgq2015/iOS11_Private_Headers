/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding> {
    long long  _alternativeSelectionCount;
    long long  _characterModificationCount;
    NSString * _correctedText;
}

@property (nonatomic) long long alternativeSelectionCount;
@property (nonatomic) long long characterModificationCount;
@property (nonatomic, copy) NSString *correctedText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)alternativeSelectionCount;
- (long long)characterModificationCount;
- (id)correctedText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlternativeSelectionCount:(long long)arg1;
- (void)setCharacterModificationCount:(long long)arg1;
- (void)setCorrectedText:(id)arg1;

@end

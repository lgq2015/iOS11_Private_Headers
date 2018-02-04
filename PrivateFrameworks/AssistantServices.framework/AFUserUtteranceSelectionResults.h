/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUserUtteranceSelectionResults : NSObject <NSSecureCoding> {
    NSNumber * _combinedRank;
    NSNumber * _combinedScore;
    NSString * _interactionId;
    NSNumber * _onDeviceUtterancesPresent;
    NSNumber * _originalRank;
    NSNumber * _originalScore;
    NSString * _previousUtterance;
    NSString * _sessionId;
    NSString * _utteranceSource;
}

@property (nonatomic, copy) NSNumber *combinedRank;
@property (nonatomic, copy) NSNumber *combinedScore;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, copy) NSNumber *onDeviceUtterancesPresent;
@property (nonatomic, copy) NSNumber *originalRank;
@property (nonatomic, copy) NSNumber *originalScore;
@property (nonatomic, copy) NSString *previousUtterance;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *utteranceSource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)combinedRank;
- (id)combinedScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interactionId;
- (id)onDeviceUtterancesPresent;
- (id)originalRank;
- (id)originalScore;
- (id)previousUtterance;
- (id)sessionId;
- (void)setCombinedRank:(id)arg1;
- (void)setCombinedScore:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setOnDeviceUtterancesPresent:(id)arg1;
- (void)setOriginalRank:(id)arg1;
- (void)setOriginalScore:(id)arg1;
- (void)setPreviousUtterance:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setUtteranceSource:(id)arg1;
- (id)utteranceSource;

@end

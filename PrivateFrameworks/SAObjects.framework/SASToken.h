/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASToken : AceObject <SAAceSerializable>

@property (nonatomic) bool addSpaceAfter;
@property (nonatomic, copy) NSNumber *confidenceScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *originalText;
@property (nonatomic, copy) NSString *phoneSequence;
@property (nonatomic, copy) NSString *recognitionStability;
@property (nonatomic) bool removeSpaceAfter;
@property (nonatomic) bool removeSpaceBefore;
@property (nonatomic, copy) NSNumber *silenceStartTime;
@property (nonatomic, copy) NSNumber *startTime;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)token;
+ (id)tokenWithDictionary:(id)arg1 context:(id)arg2;

- (bool)addSpaceAfter;
- (id)confidenceScore;
- (id)encodedClassName;
- (id)endTime;
- (id)groupIdentifier;
- (id)originalText;
- (id)phoneSequence;
- (id)recognitionStability;
- (bool)removeSpaceAfter;
- (bool)removeSpaceBefore;
- (void)setAddSpaceAfter:(bool)arg1;
- (void)setConfidenceScore:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setOriginalText:(id)arg1;
- (void)setPhoneSequence:(id)arg1;
- (void)setRecognitionStability:(id)arg1;
- (void)setRemoveSpaceAfter:(bool)arg1;
- (void)setRemoveSpaceBefore:(bool)arg1;
- (void)setSilenceStartTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setText:(id)arg1;
- (id)silenceStartTime;
- (id)startTime;
- (id)text;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_speechToken;

@end

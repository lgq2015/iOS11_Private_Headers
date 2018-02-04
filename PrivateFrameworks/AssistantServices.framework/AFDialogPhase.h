/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDialogPhase : NSObject <NSSecureCoding> {
    long long  _type;
}

@property (nonatomic, readonly) NSString *aceDialogPhaseValue;
@property (getter=isCancelledDialogPhase, nonatomic, readonly) bool cancelledDialogPhase;
@property (getter=isClarificationDialogPhase, nonatomic, readonly) bool clarificationDialogPhase;
@property (getter=isCompletionDialogPhase, nonatomic, readonly) bool completionDialogPhase;
@property (getter=isConfirmationDialogPhase, nonatomic, readonly) bool confirmationDialogPhase;
@property (getter=isConfirmedDialogPhase, nonatomic, readonly) bool confirmedDialogPhase;
@property (getter=isErrorDialogPhase, nonatomic, readonly) bool errorDialogPhase;
@property (getter=isExpository, nonatomic, readonly) bool expository;
@property (getter=isReflectionDialogPhase, nonatomic, readonly) bool reflectionDialogPhase;
@property (getter=isSummaryDialogPhase, nonatomic, readonly) bool summaryDialogPhase;
@property (getter=isTemporary, nonatomic, readonly) bool temporary;
@property (getter=_type, nonatomic, readonly) long long type;
@property (getter=isUserRequestDialogPhase, nonatomic, readonly) bool userRequestDialogPhase;

+ (id)_dialogPhaseWithType:(long long)arg1;
+ (id)acknowledgementDialogPhase;
+ (id)cancelledDialogPhase;
+ (id)clarificationDialogPhase;
+ (id)completionDialogPhase;
+ (id)confirmationDialogPhase;
+ (id)confirmedDialogPhase;
+ (id)dialogPhaseForAceDialogPhase:(id)arg1;
+ (id)errorDialogPhase;
+ (id)reflectionDialogPhase;
+ (id)statusDialogPhase;
+ (id)summaryDialogPhase;
+ (bool)supportsSecureCoding;
+ (id)userRequestDialogPhase;

- (id)_initWithType:(long long)arg1;
- (long long)_type;
- (id)aceDialogPhaseValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isCancelledDialogPhase;
- (bool)isClarificationDialogPhase;
- (bool)isCompletionDialogPhase;
- (bool)isConfirmationDialogPhase;
- (bool)isConfirmedDialogPhase;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDialogPhase:(id)arg1;
- (bool)isErrorDialogPhase;
- (bool)isExpository;
- (bool)isPossiblyPartOfMultiTurnRequest;
- (bool)isReflectionDialogPhase;
- (bool)isSummaryDialogPhase;
- (bool)isTemporary;
- (bool)isUserRequestDialogPhase;
- (bool)replacesPreviousSnippetContents;

@end

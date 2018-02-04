/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFClientFlowRequestCallback : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *applicationContextObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *dictationPromptAbortValues;
@property (nonatomic, copy) NSString *dictationPromptTargetDomain;
@property (nonatomic, copy) NSArray *dictationPromptTargetNodes;
@property (nonatomic, copy) NSArray *disambiguationPromptAbortValues;
@property (nonatomic, copy) NSNumber *disambiguationPromptAmbiguityId;
@property (nonatomic, copy) NSArray *disambiguationPromptResponseTargets;
@property (nonatomic, copy) NSString *disambiguationPromptTargetDomain;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *nlInput;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *weightedPromptAbortValues;
@property (nonatomic, copy) NSArray *weightedPromptResponseTargets;
@property (nonatomic, copy) NSNumber *weightedPromptStrict;
@property (nonatomic, copy) NSString *weightedPromptTargetDomain;

+ (id)clientFlowRequestCallback;
+ (id)clientFlowRequestCallbackWithDictionary:(id)arg1 context:(id)arg2;

- (id)applicationContextObjects;
- (id)dictationPromptAbortValues;
- (id)dictationPromptTargetDomain;
- (id)dictationPromptTargetNodes;
- (id)disambiguationPromptAbortValues;
- (id)disambiguationPromptAmbiguityId;
- (id)disambiguationPromptResponseTargets;
- (id)disambiguationPromptTargetDomain;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nlInput;
- (void)setApplicationContextObjects:(id)arg1;
- (void)setDictationPromptAbortValues:(id)arg1;
- (void)setDictationPromptTargetDomain:(id)arg1;
- (void)setDictationPromptTargetNodes:(id)arg1;
- (void)setDisambiguationPromptAbortValues:(id)arg1;
- (void)setDisambiguationPromptAmbiguityId:(id)arg1;
- (void)setDisambiguationPromptResponseTargets:(id)arg1;
- (void)setDisambiguationPromptTargetDomain:(id)arg1;
- (void)setNlInput:(id)arg1;
- (void)setWeightedPromptAbortValues:(id)arg1;
- (void)setWeightedPromptResponseTargets:(id)arg1;
- (void)setWeightedPromptStrict:(id)arg1;
- (void)setWeightedPromptTargetDomain:(id)arg1;
- (id)weightedPromptAbortValues;
- (id)weightedPromptResponseTargets;
- (id)weightedPromptStrict;
- (id)weightedPromptTargetDomain;

@end

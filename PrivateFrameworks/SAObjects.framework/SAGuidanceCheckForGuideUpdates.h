/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGuidanceCheckForGuideUpdates : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSNumber *currentGuideTag;
@property (nonatomic, copy) NSNumber *currentSuggestedUtterancesTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedFeatures;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)checkForGuideUpdates;
+ (id)checkForGuideUpdatesWithDictionary:(id)arg1 context:(id)arg2;

- (id)currentGuideTag;
- (id)currentSuggestedUtterancesTag;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCurrentGuideTag:(id)arg1;
- (void)setCurrentSuggestedUtterancesTag:(id)arg1;
- (void)setSupportedFeatures:(id)arg1;
- (id)supportedFeatures;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

+ (id)afui_guideCheckSupportedFeatures;

@end

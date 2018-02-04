/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAddViews : SABaseClientBoundCommand <AFAceCommandDialogInfoExtracting, SAConditionallyMutatingClientBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dialogPhase;
@property (nonatomic, copy) NSString *displayTarget;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool mutatingCommand;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, retain) SASendCommands *refreshCommand;
@property (nonatomic) bool requiresResponse;
@property (nonatomic) bool scrollToTop;
@property (readonly) Class superclass;
@property (nonatomic) bool temporary;
@property (nonatomic, copy) NSArray *views;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)addViews;
+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;

- (id)dialogPhase;
- (id)displayTarget;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)refreshCommand;
- (bool)requiresResponse;
- (bool)scrollToTop;
- (void)setDialogPhase:(id)arg1;
- (void)setDisplayTarget:(id)arg1;
- (void)setMutatingCommand:(bool)arg1;
- (void)setRefreshCommand:(id)arg1;
- (void)setRequiresResponse:(bool)arg1;
- (void)setScrollToTop:(bool)arg1;
- (void)setTemporary:(bool)arg1;
- (void)setViews:(id)arg1;
- (bool)temporary;
- (id)views;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)_af_extractDialogInfo:(id /* block */)arg1;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (id)af_dialogPhase;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (long long)_afui_usefulUserResultType;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)viewsWithText:(id)arg1;

- (void)setViewsWithBlock:(id /* block */)arg1;

@end

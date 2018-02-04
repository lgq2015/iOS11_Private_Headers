/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceView : SABaseAceObject <AFAceCommandDialogInfoExtracting, SAAceSerializable>

@property (nonatomic) bool canBeRefreshed;
@property (nonatomic, retain) <SAAceSerializable> *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSNumber *deferredRendering;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *listenAfterSpeaking;
@property (nonatomic, copy) NSDictionary *speakableContextInfo;
@property (nonatomic, copy) NSString *speakableText;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *viewId;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)aceView;
+ (id)aceViewWithDictionary:(id)arg1 context:(id)arg2;

- (bool)canBeRefreshed;
- (id)context;
- (id)deferredRendering;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listenAfterSpeaking;
- (void)setCanBeRefreshed:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDeferredRendering:(id)arg1;
- (void)setListenAfterSpeaking:(id)arg1;
- (void)setSpeakableContextInfo:(id)arg1;
- (void)setSpeakableText:(id)arg1;
- (void)setViewId:(id)arg1;
- (id)speakableContextInfo;
- (id)speakableText;
- (id)viewId;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)_af_dialogIdentifier;
- (id)_af_dialogPhase;
- (void)_af_extractDialogInfo:(id /* block */)arg1;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end

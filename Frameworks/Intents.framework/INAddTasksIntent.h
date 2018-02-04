/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INAddTasksIntent : INIntent <INAddTasksIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpatialEventTrigger *spatialEventTrigger;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INTaskList *targetTaskList;
@property (nonatomic, readonly, copy) NSArray *taskTitles;
@property (nonatomic, readonly, copy) INTemporalEventTrigger *temporalEventTrigger;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setTargetTaskList:(id)arg1;
- (void)setTaskTitles:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)spatialEventTrigger;
- (id)targetTaskList;
- (id)taskTitles;
- (id)temporalEventTrigger;
- (id)verb;

@end

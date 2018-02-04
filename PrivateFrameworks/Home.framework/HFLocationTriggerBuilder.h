/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFLocationTriggerBuilder : HFTriggerBuilder {
    HFEventBuilder<HFLocationEventBuilder> * _eventBuilder;
    NSSet * _stagedEvents;
}

@property (nonatomic, retain) HFEventBuilder<HFLocationEventBuilder> *eventBuilder;
@property (nonatomic, retain) NSSet *stagedEvents;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_allActionSets;
- (id)_performValidation;
- (id)_updateEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)eventBuilder;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (bool)requiresConfirmationToRun;
- (bool)requiresFMFDeviceToRun;
- (bool)requiresLocationServicesAuthorization;
- (bool)secureActionsRequireConfirmationToRun;
- (void)setEventBuilder:(id)arg1;
- (void)setStagedEvents:(id)arg1;
- (id)stagedEvents;
- (bool)supportsConditions;
- (bool)supportsEndEvents;

@end

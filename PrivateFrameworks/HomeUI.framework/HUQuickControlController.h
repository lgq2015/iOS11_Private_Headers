/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlController : NSObject <HUQuickControlInteractionCoordinatorDelegate> {
    HFControlItem * _controlItem;
    <HUQuickControlControllerDelegate> * _delegate;
    bool  _hasWrittenAnyNewValues;
    HMHome * _home;
    unsigned long long  _inFlightWriteCount;
    HUQuickControlInteractionCoordinator * _interactionCoordinator;
    id  _modelValue;
    NAValueThrottler * _valueWriteThrottler;
    bool  _writesInProgressOrPossible;
}

@property (nonatomic, readonly) HFControlItem *controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUQuickControlControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasWrittenAnyNewValues;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) unsigned long long inFlightWriteCount;
@property (nonatomic, readonly) HUQuickControlInteractionCoordinator *interactionCoordinator;
@property (nonatomic, readonly) id modelValue;
@property (nonatomic, readonly, copy) NSString *overrideSecondaryStatusText;
@property (nonatomic, readonly, copy) NSString *overrideStatusText;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NAValueThrottler *valueWriteThrottler;
@property (getter=areWritesInProgressOrPossible, nonatomic) bool writesInProgressOrPossible;

+ (Class)controlItemClass;
+ (bool)matchesControlItem:(id)arg1;

- (void).cxx_destruct;
- (void)_setModelValue:(id)arg1 writeValue:(bool)arg2;
- (void)_updateInteractionState;
- (void)_updateValueFromControlItem;
- (void)_writeModelControlValue:(id)arg1;
- (bool)areWritesInProgressOrPossible;
- (id)controlItem;
- (void)controlItemDidUpdateExternally;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)delegate;
- (bool)hasModelValueChangedForInteractionCoordinator:(id)arg1;
- (bool)hasWrittenAnyNewValues;
- (id)home;
- (unsigned long long)inFlightWriteCount;
- (id)init;
- (id)initWithControlItem:(id)arg1 home:(id)arg2;
- (id)interactionCoordinator;
- (void)interactionCoordinator:(id)arg1 interactionStateDidChange:(bool)arg2;
- (void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2;
- (id)modelValue;
- (void)modelValueDidChange;
- (id)overrideSecondaryStatusText;
- (id)overrideStatusText;
- (void)setDelegate:(id)arg1;
- (void)setHasWrittenAnyNewValues:(bool)arg1;
- (void)setInFlightWriteCount:(unsigned long long)arg1;
- (void)setWritesInProgressOrPossible:(bool)arg1;
- (id)title;
- (id)valueWriteThrottler;
- (id)viewProfile;

@end

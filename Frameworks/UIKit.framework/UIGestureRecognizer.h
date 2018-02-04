/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGestureRecognizer : NSObject <TSDGesture, _UIDraggable, _UIExcludable, _UIForceLevelClassifierDelegate, _UITouchable> {
    NSMutableSet * _activeEvents;
    NSArray * _allowedPressTypes;
    long long  _allowedTouchTypes;
    NSObservationSource * _beganObservable;
    NSMutableArray * _delayedPresses;
    NSMutableArray * _delayedTouches;
    <UIGestureRecognizerDelegate> * _delegate;
    NSMutableSet * _failureDependents;
    NSMutableSet * _failureRequirements;
    double  _firstEventTimestamp;
    _UIForceLevelClassifier * _forceClassifier;
    unsigned long long  _forcePressCount;
    NSMutableArray * _forceTargets;
    UIGestureEnvironment * _gestureEnvironment;
    struct { 
        unsigned int delegateShouldBegin : 1; 
        unsigned int delegateCanPrevent : 1; 
        unsigned int delegateCanBePrevented : 1; 
        unsigned int delegateShouldRecognizeSimultaneously : 1; 
        unsigned int delegateShouldReceiveTouch : 1; 
        unsigned int delegateShouldReceivePress : 1; 
        unsigned int delegateShouldRequireFailure : 1; 
        unsigned int delegateShouldBeRequiredToFail : 1; 
        unsigned int delegateFailed : 1; 
        unsigned int privateDelegateShouldBegin : 1; 
        unsigned int privateDelegateCanPrevent : 1; 
        unsigned int privateDelegateCanBePrevented : 1; 
        unsigned int privateDelegateShouldRecognizeSimultaneously : 1; 
        unsigned int privateDelegateShouldReceiveTouch : 1; 
        unsigned int privateDelegateShouldReceivePress : 1; 
        unsigned int privateDelegateShouldRequireFailure : 1; 
        unsigned int privateDelegateShouldBeRequiredToFail : 1; 
        unsigned int subclassShouldRequireFailure : 1; 
        unsigned int subclassShouldBeRequiredToFail : 1; 
        unsigned int hasSubclassDynamicFailureRequirements : 1; 
        unsigned int hasDelegateDynamicFailureRequirements : 1; 
        unsigned int subclassTouchesEstimatedPropertiesUpdated : 1; 
        unsigned int queriedFailureRequirements : 1; 
        unsigned int cancelsTouchesInView : 1; 
        unsigned int delaysTouchesBegan : 1; 
        unsigned int delaysTouchesEnded : 1; 
        unsigned int disabled : 1; 
        unsigned int dirty : 1; 
        unsigned int delivered : 1; 
        unsigned int deliveredEndedOrCancelled : 1; 
        unsigned int continuous : 1; 
        unsigned int requiresDelayedBegan : 1; 
        unsigned int willBeginAfterSatisfyingFailureRequirements : 1; 
        unsigned int requiresSystemGesturesToFail : 1; 
        unsigned int acceptsFailureRequirements : 1; 
        unsigned int requiresExclusiveTouchType : 1; 
        unsigned int initialTouchTypeIsValid : 1; 
        unsigned int forceRequirementSatisfied : 1; 
        unsigned int wantsDragEvents : 1; 
        unsigned int isDynamicGesture : 1; 
    }  _gestureFlags;
    long long  _initialTouchType;
    NSMutableSet * _internalActiveTouches;
    bool  _keepTouchesOnContinuation;
    double  _lastTouchTimestamp;
    NSString * _name;
    long long  _requiredPreviewForceState;
    long long  _state;
    NSMutableArray * _targets;
    _UITouchForceObservable * _touchForceObservable;
    NSObservation * _touchForceObservableAndClassifierObservation;
    UIView * _view;
}

@property (nonatomic, readonly) NSSet *_failureDependents;
@property (nonatomic, readonly) NSSet *_failureRequirements;
@property (nonatomic, readonly) bool _fb_isTouchGestureRecognizer;
@property (setter=_fb_setRecognitionEvent:, nonatomic) long long _fb_recognitionEvent;
@property (setter=_setKeepTouchesOnContinuation:, nonatomic) bool _keepTouchesOnContinuation;
@property (nonatomic, readonly) NSMutableSet *_pairedGestureIdentifiers;
@property (readonly) unsigned long long akNumberOfTouches;
@property (nonatomic, copy) NSArray *allowedPressTypes;
@property (nonatomic, copy) NSArray *allowedTouchTypes;
@property (nonatomic, retain) <TSDGestureTarget> *cachedGestureTarget;
@property (nonatomic) bool cancelsTouchesInView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool delaysTouchesBegan;
@property (nonatomic) bool delaysTouchesEnded;
@property (nonatomic) <UIGestureRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) <TSDGestureDelegate> *gestureDelegate;
@property (nonatomic) UIGestureEnvironment *gestureEnvironment;
@property (nonatomic, retain) NSString *gestureKind;
@property (nonatomic, readonly) int gestureState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double lastTouchTimestamp;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfTouches;
@property (nonatomic) bool requiresExclusiveTouchType;
@property (getter=_requiresSystemGesturesToFail, setter=_setRequiresSystemGesturesToFail:, nonatomic) bool requiresSystemGesturesToFail;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSDRep *targetRep;
@property (nonatomic, readonly) UIView *view;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (bool)_shouldDefaultToTouches;
+ (bool)_shouldSupportStylusTouches;
+ (bool)_shouldUseLinearForceLevelClassifier;
+ (bool)_supportsTouchContinuation;

- (void).cxx_destruct;
- (bool)_acceptsFailureRequirements;
- (id)_activeTouchesForEvent:(id)arg1;
- (void)_addFailureDependent:(id)arg1;
- (void)_addForceTarget:(id)arg1 action:(SEL)arg2;
- (void)_addTouch:(id)arg1 forEvent:(id)arg2;
- (bool)_affectedByGesture:(id)arg1;
- (id)_allActiveTouches;
- (void)_appendDescription:(id)arg1 forDependencies:(id)arg2 toString:(id)arg3 atLevel:(int)arg4;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 includingDependencies:(bool)arg3;
- (void)_appendSubclassDescription:(id)arg1;
- (id)_beganObservable;
- (id)_briefDescription;
- (bool)_canExcludeOtherExcludables;
- (void)_cancelRecognition;
- (struct CGPoint { double x1; double x2; })_centroidOfTouches:(id)arg1 excludingEnded:(bool)arg2;
- (void)_clearDelayedPresses;
- (void)_clearDelayedTouches;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (long long)_currentForceLevel;
- (id)_defaultAllowedPressTypes;
- (id)_defaultAllowedTouchTypes;
- (void)_delayPress:(id)arg1 forEvent:(id)arg2;
- (void)_delayPressesForEvent:(id)arg1 inPhase:(long long)arg2;
- (void)_delayPressesForEventIfNeeded:(id)arg1;
- (void)_delayTouch:(id)arg1 forEvent:(id)arg2;
- (void)_delayTouchesForEvent:(id)arg1 inPhase:(long long)arg2;
- (void)_delayTouchesForEventIfNeeded:(id)arg1;
- (id)_delayedTouches;
- (bool)_delegateCanBePreventedByGestureRecognizer:(id)arg1;
- (bool)_delegateCanPreventGestureRecognizer:(id)arg1;
- (bool)_delegateShouldReceivePress:(id)arg1;
- (bool)_delegateShouldReceiveTouch:(id)arg1;
- (long long)_depthFirstViewCompare:(id)arg1;
- (void)_detach;
- (double)_distanceBetweenTouches:(id)arg1;
- (void)_draggingEndedWithEvent:(id)arg1;
- (void)_draggingEnteredWithEvent:(id)arg1;
- (void)_draggingExitedWithEvent:(id)arg1;
- (void)_draggingUpdatedWithEvent:(id)arg1;
- (void)_enqueueDelayedPressToSend:(id)arg1;
- (void)_enqueueDelayedPressesToSend;
- (void)_enqueueDelayedTouchToSend:(id)arg1;
- (void)_enqueueDelayedTouchesAndPressesToSend;
- (void)_enqueueDelayedTouchesToSend;
- (void)_ensureForceObservationChain;
- (void)_exclude;
- (long long)_exclusiveDirectionalPressAxis;
- (id)_failureDependents;
- (id)_failureRequirements;
- (id)_forceLevelClassifier;
- (void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2;
- (unsigned long long)_forcePressCount;
- (bool)_forceRequirementSatisfied;
- (void)_ignoreActiveEvents;
- (bool)_inForceCapableEnvironment;
- (void)_invalidateInitialTouchType;
- (bool)_isActive;
- (bool)_isDirty;
- (bool)_isExcludedByExcludable:(id)arg1;
- (bool)_isRecognized;
- (bool)_keepTouchesOnContinuation;
- (bool)_needsDynamicDependentRequirementForGestureRecognizer:(id)arg1;
- (bool)_needsDynamicFailureRequirementForGestureRecognizer:(id)arg1;
- (id)_pairedGestureIdentifiers;
- (id)_pairedGestureIdentifiersAndCreate:(bool)arg1;
- (void)_pressWasCancelled:(id)arg1;
- (void)_pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_rawBriefDescription;
- (void)_registerTouches:(id)arg1 forEstimationUpdatesWithEvent:(id)arg2;
- (void)_removeFailureDependent:(id)arg1;
- (void)_removeForceTarget:(id)arg1 action:(SEL)arg2;
- (void)_removeTouch:(id)arg1 forEvent:(id)arg2;
- (void)_removeTouch:(id)arg1 forEvent:(id)arg2 byCancellingTouches:(bool)arg3;
- (long long)_requiredForceLevel;
- (void)_requiredGestureRecognizerCompleted:(id)arg1;
- (bool)_requiredPreviewForceStateSatisfiedByForceLevel:(long long)arg1;
- (bool)_requiresGestureRecognizerToFail:(id)arg1;
- (bool)_requiresSystemGesturesToFail;
- (void)_resetGestureRecognizer;
- (void)_setAcceptsFailureRequiments:(bool)arg1;
- (void)_setDirty;
- (void)_setForceLevelClassifier:(id)arg1;
- (void)_setInitialTouchType:(long long)arg1;
- (void)_setKeepTouchesOnContinuation:(bool)arg1;
- (void)_setRequiredForceLevel:(long long)arg1;
- (void)_setRequiresSystemGesturesToFail:(bool)arg1;
- (void)_setWantsDragEvents:(bool)arg1;
- (bool)_shouldBegin;
- (bool)_shouldDelayUntilForceLevelRequirementIsMet;
- (bool)_shouldReceiveDragEvent:(id)arg1;
- (bool)_shouldReceivePress:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 recognizerView:(id)arg2 touchView:(id)arg3;
- (id)_touchForceObservable;
- (bool)_touchTypeIsAllowed:(id)arg1;
- (void)_touchWasCancelled:(id)arg1;
- (void)_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_updateForceClassifierWithEvent:(id)arg1;
- (void)_updateGestureWithEvent:(id)arg1 buttonEvent:(id)arg2;
- (bool)_wantsDragEvents;
- (bool)_wantsPartialTouchSequences;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)addTouchesFromGestureRecognizer:(id)arg1;
- (id)allowedPressTypes;
- (id)allowedTouchTypes;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (bool)cancelsTouchesInView;
- (long long)currentPreviewForceState;
- (void)dealloc;
- (bool)delaysTouchesBegan;
- (bool)delaysTouchesEnded;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gestureEnvironment;
- (void)ignorePress:(id)arg1 forEvent:(id)arg2;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isEnabled;
- (double)lastTouchTimestamp;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (id)name;
- (unsigned long long)numberOfTouches;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removeFailureRequirement:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (long long)requiredPreviewForceState;
- (bool)requiresExclusiveTouchType;
- (void)reset;
- (void)setAllowedPressTypes:(id)arg1;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setCancelsTouchesInView:(bool)arg1;
- (void)setDelaysTouchesBegan:(bool)arg1;
- (void)setDelaysTouchesEnded:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGestureEnvironment:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRequiredPreviewForceState:(long long)arg1;
- (void)setRequiresExclusiveTouchType:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setView:(id)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (long long)state;
- (id)stringValue;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)transferTouchesFromGestureRecognizer:(id)arg1;
- (id)view;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)pu_cancel;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (struct CGPoint { double x1; double x2; })akLocationInWindow;
- (unsigned long long)akNumberOfTouches;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (bool)_fb_isTouchGestureRecognizer;
- (long long)_fb_recognitionEvent;
- (void)_fb_setRecognitionEvent:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (struct CGPoint { double x1; double x2; })hu_locationInGlobalCoordinateSpace;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)_automationName;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)px_cancel;
- (bool)px_isPanGestureRecognizerOfScrollView:(id*)arg1;
- (struct CGPoint { double x1; double x2; })px_locationInCoordinateSpace:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (void)cancel;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (void)cancel;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (struct CGPoint { double x1; double x2; })boundsLocationForICC:(id)arg1;
- (id)cachedGestureTarget;
- (id)gestureDelegate;
- (id)gestureKind;
- (int)gestureState;
- (id)initWithGestureDispatcher:(id)arg1 gestureKind:(id)arg2;
- (bool)isDone;
- (struct CGPoint { double x1; double x2; })naturalLocationForRep:(id)arg1;
- (void)setCachedGestureTarget:(id)arg1;
- (void)setGestureDelegate:(id)arg1;
- (void)setGestureKind:(id)arg1;
- (void)setTargetRep:(id)arg1;
- (id)targetRep;
- (struct CGPoint { double x1; double x2; })unscaledLocationForICC:(id)arg1;

@end

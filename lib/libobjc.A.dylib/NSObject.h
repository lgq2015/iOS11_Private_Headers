/* made by EzioChiu
   Image: /usr/lib/libobjc.A.dylib
 */

@interface NSObject <CAAnimatableValue, CARenderValue, CKLParsedObject, CRCardSection, NSObject, PQLResultSetInitializer, _DKProtobufConverting> {
    Class  isa;
}

@property (nonatomic, readonly) NSString *_atvaccessibilityITMLAccessibilityContent;
@property (setter=_px_setReuseIdentifier:, nonatomic) long long _px_reuseIdentifier;
@property (nonatomic, readonly) UIDescriptionBuilder *_ui_descriptionBuilder;
@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;
@property (nonatomic, copy) NSAttributedString *accessibilityAttributedHint;
@property (nonatomic, copy) NSAttributedString *accessibilityAttributedLabel;
@property (nonatomic, copy) NSAttributedString *accessibilityAttributedValue;
@property (nonatomic) long long accessibilityContainerType;
@property (nonatomic, retain) NSArray *accessibilityCustomActions;
@property (nonatomic, retain) NSArray *accessibilityCustomRotors;
@property (nonatomic, retain) NSArray *accessibilityElements;
@property (nonatomic) bool accessibilityElementsHidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;
@property (nonatomic, copy) NSArray *accessibilityHeaderElements;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) NSString *accessibilityLanguage;
@property (nonatomic, readonly) NSString *accessibilityLocalizedStringKey;
@property (nonatomic) long long accessibilityNavigationStyle;
@property (nonatomic, copy) UIBezierPath *accessibilityPath;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) bool accessibilityViewIsModal;
@property (nonatomic, readonly) NSArray *actionCommands;
@property (readonly) unsigned long long akToolbarButtonItemType;
@property (readonly, retain) id autoContentAccessingProxy;
@property (nonatomic, readonly) <SFCardSection> *backingCardSection;
@property (readonly) Class classForKeyedArchiver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSString *fm_logID;
@property (nonatomic, readonly) bool hasNextCard;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hashValue;
@property (getter=_hf_briefDescription, nonatomic, readonly, copy) NSString *hf_briefDescription;
@property (nonatomic, readonly, copy) NSString *hf_prettyDescription;
@property (getter=_hf_stateDumpDescription, nonatomic, readonly, copy) NSString *hf_stateDumpDescription;
@property (nonatomic) bool isAccessibilityElement;
@property (nonatomic, readonly, retain) NSString *logID;
@property void*observationInfo;
@property (nonatomic) bool shouldGroupAccessibilityChildren;
@property (readonly) Class superclass;
@property (getter=_traitStorageList, setter=_setTraitStorageList:, retain) _UITraitStorageList *traitStorageList;

// Image: /usr/lib/libobjc.A.dylib

+ (bool)_isDeallocating;
+ (bool)_tryRetain;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)allowsWeakReference;
+ (id)autorelease;
+ (Class)class;
+ (bool)conformsToProtocol:(id)arg1;
+ (id)copy;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (void)dealloc;
+ (id)debugDescription;
+ (id)description;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (unsigned long long)hash;
+ (id)init;
+ (void)initialize;
+ (int (*)instanceMethodForSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (bool)isAncestorOfObject:(id)arg1;
+ (bool)isEqual:(id)arg1;
+ (bool)isFault;
+ (bool)isKindOfClass:(Class)arg1;
+ (bool)isMemberOfClass:(Class)arg1;
+ (bool)isProxy;
+ (bool)isSubclassOfClass:(Class)arg1;
+ (void)load;
+ (int (*)methodForSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (id)mutableCopy;
+ (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
+ (id)new;
+ (id)performSelector:(SEL)arg1;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (oneway void)release;
+ (bool)resolveClassMethod:(SEL)arg1;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)respondsToSelector:(SEL)arg1;
+ (id)retain;
+ (unsigned long long)retainCount;
+ (bool)retainWeakReference;
+ (id)self;
+ (Class)superclass;
+ (struct _NSZone { }*)zone;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (bool)allowsWeakReference;
- (id)autorelease;
- (Class)class;
- (bool)conformsToProtocol:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isFault;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)isProxy;
- (int (*)methodForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)mutableCopy;
- (id)performSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (oneway void)release;
- (bool)respondsToSelector:(SEL)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;
- (id)self;
- (Class)superclass;
- (struct _NSZone { }*)zone;

// Image: /Developer/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (bool)xr_object:(id)arg1 isEqual:(id)arg2;

- (id)xr_clipsStringRepresentation;
- (bool)xr_isCLIPSSymbol;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKSQLiteClassName;

- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKDescription;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKPropertiesDescription;
- (id)CKPropertiesDescriptionStringFromProperties:(id)arg1;
- (id)CKStatusReport;
- (id)hashedDescription;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)cn_updateDictionaryForKey:(id)arg1 withChanges:(id)arg2;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)__allocWithZone_OA:(struct _NSZone { }*)arg1;
+ (id)_copyDescription;
+ (void)dealloc;
+ (id)description;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (id)init;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)load;
+ (id)methodSignatureForSelector:(SEL)arg1;

- (bool)___tryRetain_OA;
- (id)__autorelease_OA;
- (void)__dealloc_zombie;
- (oneway void)__release_OA;
- (id)__retain_OA;
- (unsigned long long)_cfTypeID;
- (id)_copyDescription;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (bool)isNSArray__;
- (bool)isNSCFConstantString__;
- (bool)isNSData__;
- (bool)isNSDate__;
- (bool)isNSDictionary__;
- (bool)isNSNumber__;
- (bool)isNSObject__;
- (bool)isNSOrderedSet__;
- (bool)isNSSet__;
- (bool)isNSString__;
- (bool)isNSTimeZone__;
- (bool)isNSValue__;
- (id)methodSignatureForSelector:(SEL)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (void)_accessibilityCalDetailStringForEvent:(id)arg1 inLine1:(id*)arg2 inLine2:(id*)arg3 inLine3:(id*)arg4 inLine4:(id*)arg5;
+ (void)_accessibilityCalGetHourDesignatorsForAM:(id*)arg1 andPM:(id*)arg2;
+ (bool)_accessibilityCalHourDesignatorsAreBeforeHour;
+ (bool)_accessibilityCalShow24Hours;
+ (bool)_accessibilityCalSpaceBetweenDesignatorsAndHour;
+ (id)_accessibilityStringForDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
+ (id)_accessibilityStringForDayOfWeek:(int)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_keysForValuesAffectingValueForKey:(id)arg1;
+ (bool)_shouldAddObservationForwardersForKey:(id)arg1;
+ (bool)accessInstanceVariablesDirectly;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;
+ (bool)implementsSelector:(SEL)arg1;
+ (bool)instancesImplementSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)load;
+ (id)replacementObjectForPortCoder:(id)arg1;
+ (void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2;
+ (void)setVersion:(long long)arg1;
+ (long long)version;

- (void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (bool)_allowsDirectEncoding;
- (void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)_changeValueForKey:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_changeValueForKeys:(id*)arg1 count:(unsigned long long)arg2 maybeOldValuesDict:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)_didChangeValuesForKeys:(id)arg1;
- (id)_implicitObservationInfo;
- (bool)_isKVOA;
- (bool)_isToManyChangeInformation;
- (void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (id*)_observerStorage;
- (id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(bool)arg2;
- (void)_receiveBox:(id)arg1;
- (void)_removeObserver:(id)arg1 forProperty:(id)arg2;
- (void)_willChangeValuesForKeys:(id)arg1;
- (id)addChainedObservers:(id)arg1;
- (id)addObservationTransformer:(id /* block */)arg1;
- (id)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)addObserver:(id)arg1 forObservableKeyPath:(id)arg2;
- (id)addObserverBlock:(id /* block */)arg1;
- (id)autoContentAccessingProxy;
- (id)awakeAfterUsingCoder:(id)arg1;
- (Class)classForArchiver;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (Class)classForPortCoder;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;
- (void)finishObserving;
- (bool)implementsSelector:(SEL)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableArrayValueForKeyPath:(id)arg1;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (id)mutableOrderedSetValueForKeyPath:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)mutableSetValueForKeyPath:(id)arg1;
- (void*)observationInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(bool)arg4;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(bool)arg4 modes:(id)arg5;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(bool)arg3;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(bool)arg3 modes:(id)arg4;
- (void)receiveObservedError:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(id)arg1;
- (void)removeObservation:(id)arg1 forObservableKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (id)replacementObjectForArchiver:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservation:(id)arg1 forObservingKeyPath:(id)arg2;
- (void)setObservationInfo:(void*)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (bool)validateValue:(inout id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)validateValue:(inout id*)arg1 forKeyPath:(id)arg2 error:(out id*)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_safeArrayForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeDictionaryForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeNumberForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeStringForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeURLForKeyPath:(id)arg1 error:(id*)arg2;
- (id)hk_safeValueForKeyPath:(id)arg1 class:(Class)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)descriptionAtIndent:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (bool)_isMKClusterAnnotation;
- (bool)_mapkit_internalAnnotationAllowsCustomView;
- (bool)_mapkit_isInternalAnnotation;
- (bool)_mapkit_isInternalAnnotationView;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)MPMediaLibraryDataProviderSystemML3CoercedString;
- (id)MP_shortDescription;
- (void)__crossedTimeMarkerNotification:(id)arg1;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (void)registerForTimeMarkerNotificationsIfNecessaryForPlayer:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (void)unregisterForTimeMarkerNotifications;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_objectWithHighest:(id /* block */)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)CA_CAMLPropertyForKey:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (int (*)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;

- (id)CAMLType;
- (id)CAMLTypeForKey:(id)arg1;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (unsigned long long)CA_copyNumericValue:(double)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (void)CA_prepareRenderValue;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (id)SCN_setupDisplayLinkWithQueue:(id)arg1;

// Image: /System/Library/Frameworks/Security.framework/Security

+ (id)SFSQLiteClassName;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (long long)__accessibilityGuidedAccessRestrictionStateForIdentifier:(id)arg1;
+ (bool)__accessibilityGuidedAccessStateEnabled;
+ (void)__accessibilityRequestGuidedAccessSession:(bool)arg1 completion:(id /* block */)arg2;
+ (void)_installAppearanceSwizzlesForSetter:(id)arg1;

- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSDataValue:(id)arg1 error:(id*)arg2;
- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSURLValue:(id)arg1 error:(id*)arg2;
- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;
- (id)__ivarDescriptionForClass:(Class)arg1;
- (id)__methodDescriptionForClass:(Class)arg1;
- (id)__propertyDescriptionForClass:(Class)arg1;
- (id)__ui_performAsyncSelector:(SEL)arg1 completionHandler:(id /* block */)arg2;
- (void)_accessibilityFinalize;
- (void)_applyTraitStorageRecordsForTraitCollection:(id)arg1;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (id)_internalAccessibilityAttributedHint;
- (id)_internalAccessibilityAttributedLabel;
- (id)_internalAccessibilityAttributedValue;
- (void)_internalSetAccessibilityAttributedHint:(id)arg1;
- (void)_internalSetAccessibilityAttributedLabel:(id)arg1;
- (void)_internalSetAccessibilityAttributedValue:(id)arg1;
- (id)_ivarDescription;
- (id)_methodDescription;
- (id)_propertyDescription;
- (void)_setTraitStorageList:(id)arg1;
- (id)_shortMethodDescription;
- (id)_traitStorageList;
- (id)_ui_descriptionBuilder;
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;
- (id)_uikit_valueForTraitCollection:(id)arg1;
- (bool)_uikit_variesByTraitCollections;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityAssistiveTechnologyFocusedIdentifiers;
- (id)accessibilityAttributedHint;
- (id)accessibilityAttributedLabel;
- (id)accessibilityAttributedValue;
- (id)accessibilityContainer;
- (long long)accessibilityContainerType;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomRotors;
- (void)accessibilityDecrement;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (bool)accessibilityElementIsFocused;
- (id)accessibilityElements;
- (bool)accessibilityElementsHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHeaderElements;
- (id)accessibilityHint;
- (id)accessibilityIdentification;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityLocalizedStringKey;
- (long long)accessibilityNavigationStyle;
- (id)accessibilityPath;
- (bool)accessibilityPerformEscape;
- (bool)accessibilityPerformMagicTap;
- (bool)accessibilityScroll:(long long)arg1;
- (void)accessibilitySetIdentification:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)accessibilityViewIsModal;
- (void)awakeFromNib;
- (id)className;
- (unsigned long long)defaultAccessibilityTraits;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (bool)isAccessibilityElement;
- (bool)isAccessibilityElementByDefault;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)prepareForInterfaceBuilder;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccessibilityAttributedHint:(id)arg1;
- (void)setAccessibilityAttributedLabel:(id)arg1;
- (void)setAccessibilityAttributedValue:(id)arg1;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setAccessibilityContainerType:(long long)arg1;
- (void)setAccessibilityCustomActions:(id)arg1;
- (void)setAccessibilityCustomRotors:(id)arg1;
- (void)setAccessibilityDragSourceDescriptors:(id)arg1;
- (void)setAccessibilityDropPointDescriptors:(id)arg1;
- (void)setAccessibilityElements:(id)arg1;
- (void)setAccessibilityElementsHidden:(bool)arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityHeaderElements:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityLanguage:(id)arg1;
- (void)setAccessibilityNavigationStyle:(long long)arg1;
- (void)setAccessibilityPath:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityViewIsModal:(bool)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)setShouldGroupAccessibilityChildren:(bool)arg1;
- (bool)shouldGroupAccessibilityChildren;
- (id)storedAccessibilityActivationPoint;
- (id)storedAccessibilityContainerType;
- (id)storedAccessibilityElementsHidden;
- (id)storedAccessibilityFrame;
- (id)storedAccessibilityNavigationStyle;
- (id)storedAccessibilityTraits;
- (id)storedAccessibilityViewIsModal;
- (id)storedIsAccessibilityElement;
- (id)storedShouldGroupAccessibilityChildren;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (bool)un_safeBoolValue;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (void)vs_bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)vs_binderCreatingIfNeeded:(bool)arg1;
- (void)vs_setValue:(id)arg1 forBinding:(id)arg2;
- (void)vs_unbind:(id)arg1;
- (id)vs_unbinderCreatingIfNeeded:(bool)arg1;
- (id)vs_valueForBinding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_accessibilityAttributedLocalizedString;
- (void)_setAccessibilityAttributedLocalizedString:(id)arg1;
- (bool)isAXAttributedString;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities

- (id)_accessibilityBadgeTextForTextElement:(id)arg1;
- (id)_atvAccessibilityITMLAccessibilityContentWithElement:(id)arg1;
- (id)_atvaccessibilityAncestorHasAXID:(id)arg1;
- (id)_atvaccessibilityClosestElementAbove:(id)arg1;
- (id)_atvaccessibilityGeometricNearestHeader;
- (id)_atvaccessibilityITMLAccessibilityContent;
- (id)_atvaccessibilityITMLClass;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (void)_accessibilityPerformValidations:(id)arg1;

- (id)__axValueForKey:(id)arg1;
- (bool)_accessibilityBoolValueForKey:(id)arg1;
- (long long)_accessibilityIntegerValueForKey:(id)arg1;
- (bool)_accessibilityIsSpeakThisTemporarilyDisabled;
- (void)_accessibilityPerformSafeValueKeyBlock:(id /* block */)arg1 withKey:(id)arg2 onClass:(Class)arg3;
- (void)_accessibilityRemoveValueForKey:(id)arg1;
- (void)_accessibilitySetAssignedValue:(id)arg1 forKey:(id)arg2;
- (void)_accessibilitySetBoolValue:(bool)arg1 forKey:(id)arg2;
- (void)_accessibilitySetIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)_accessibilitySetRetainedValue:(id)arg1 forKey:(id)arg2;
- (void)_accessibilitySetSpeakThisTemporarilyDisabled:(bool)arg1;
- (void)_accessibilitySetUnsignedIntegerValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_accessibilitySetValue:(id)arg1 forKey:(id)arg2 storageMode:(int)arg3;
- (unsigned long long)_accessibilityUnsignedIntegerValueForKey:(id)arg1;
- (id)_accessibilityValueForKey:(id)arg1;
- (void)_ax_appendPrettyDescriptionToString:(id)arg1 indentationString:(id)arg2 visitedCollections:(id)arg3;
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 expectedTypeEncoding:(const char *)arg3;
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 possibleExpectedTypeEncodings:(const char *)arg3;
- (id)axSuperTrampoline;
- (id)axTrampolineForClass:(Class)arg1;
- (id)ax_prettyDescription;
- (void)handleFailoversForClassNamed:(id)arg1;
- (id)safeArrayForKey:(id)arg1;
- (bool)safeBoolForKey:(id)arg1;
- (double)safeCGFloatForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })safeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeCGRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })safeCGSizeForKey:(id)arg1;
- (id)safeDictionaryForKey:(id)arg1;
- (double)safeDoubleForKey:(id)arg1;
- (float)safeFloatForKey:(id)arg1;
- (int)safeIntForKey:(id)arg1;
- (long long)safeIntegerForIvarKey:(id)arg1 onClass:(Class)arg2;
- (long long)safeIntegerForKey:(id)arg1;
- (void*)safeIvarForKey:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })safeRangeForKey:(id)arg1;
- (id)safeStringForKey:(id)arg1;
- (double)safeTimeIntervalForKey:(id)arg1;
- (id)safeUIViewForKey:(id)arg1;
- (unsigned int)safeUnsignedIntForKey:(id)arg1;
- (unsigned long long)safeUnsignedIntegerForKey:(id)arg1;
- (id)safeValueForKey:(id)arg1;
- (id)safeValueForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice

- (id)deepMutableObject;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (unsigned long long)akToolbarButtonItemType;

// Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport

- (id)pep_afterDelay:(double)arg1;
- (id)pep_getInvocation:(id*)arg1;
- (id)pep_onDetachedThread;
- (id)pep_onMainThread;
- (id)pep_onMainThreadIfNecessary;
- (id)pep_onOperationQueue:(id)arg1;
- (id)pep_onOperationQueue:(id)arg1 priority:(long long)arg2;
- (id)pep_onThread:(id)arg1;
- (id)pep_onThread:(id)arg1 immediateForMatchingThread:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_dataFromObject:(id)arg1;
+ (id)bs_decodedFromData:(id)arg1;
+ (id)bs_objectFromData:(id)arg1;
+ (id)bs_secureDataFromObject:(id)arg1;
+ (id)bs_secureDecodedFromData:(id)arg1;
+ (id)bs_secureDecodedFromData:(id)arg1 withAdditionalClasses:(id)arg2;
+ (id)bs_secureObjectFromData:(id)arg1 ofClass:(Class)arg2;
+ (id)bs_secureObjectFromData:(id)arg1 ofClasses:(id)arg2;
+ (bool)bs_synchronousWrapper:(id /* block */)arg1 timeout:(double)arg2;

- (id)bs_encoded;
- (bool)bs_isPlistableType;
- (bool)bs_performSynchronously:(id /* block */)arg1;
- (bool)bs_performSynchronously:(id /* block */)arg1 timeout:(double)arg2;
- (id)bs_secureEncoded;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (id)bb_objectCache;

- (id)bb_objectCache;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (id)objectSentinelNull;
- (id)objectWithNSNulls:(id)arg1;
- (id)objectWithNoNSNulls:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (bool)isNull;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)CalClassName;
- (bool)isNull;
- (void)performBlockOnMainThreadSynchronously:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

+ (id)crk_interactiveBehaviorPrecedenceOrder;

- (int)_crk_leadingCardSectionSeparatorStyle;
- (int)_crk_trailingCardSectionSeparatorStyle;
- (id)crk_backingPunchout;
- (unsigned long long)crk_intrinsicInteractiveBehavior;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)actionCommands;
- (id)backingCardSection;
- (bool)hasNextCard;
- (id)parametersForInteraction:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial

- (void)allowSafePerformSelector;
- (void)disallowSafePerformSelector;
- (void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (bool)okToNotifyFromThisThread;
- (void)postNotificationWithDescription:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI

+ (void)NPHRequestIdleTimeNotification;
+ (void)_NPHIdleTimeNotification:(id)arg1;
+ (void)performBlockAtIdle:(id /* block */)arg1;

- (void)nph_debounce:(SEL)arg1 delay:(double)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (bool)__ck_isKindOfClass:(Class)arg1;

- (struct CGSize { double x1; double x2; })ck_constrainedSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithNavigationController:(id)arg1;
- (void)smsComposeControllerAppeared:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (bool)brc_swizzleClassMethod:(SEL)arg1 with:(SEL)arg2;
+ (bool)brc_swizzleInstanceMethod:(SEL)arg1 with:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)CKLogToFileHandle:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

+ (void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1;
+ (id)_cplPropertyAttributeMap;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (id)cplAllPropertyNames;
+ (void)cplDumpProperties;
+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (bool)cplShouldIgnorePropertyForEquality:(id)arg1;

- (void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2 withCopyBlock:(id /* block */)arg3;
- (void)cplCopyProperties:(id)arg1 fromObject:(id)arg2 withCopyBlock:(id /* block */)arg3;
- (void)cplCopyPropertiesFromObject:(id)arg1 withCopyBlock:(id /* block */)arg2;
- (void)cplDecodePropertiesFromCoder:(id)arg1;
- (id)cplDeepCopy;
- (void)cplEncodePropertiesWithCoder:(id)arg1;
- (id)cplFullDescription;
- (unsigned long long)cplHash;
- (bool)cplIsEqual:(id)arg1;
- (bool)cplIsEqual:(id)arg1 withEqualityBlock:(id /* block */)arg2;
- (bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 differingProperty:(id*)arg3 withEqualityBlock:(id /* block */)arg4;
- (bool)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 withEqualityBlock:(id /* block */)arg3;
- (unsigned long long)cplSpecialHash;
- (bool)cplSpecialIsEqual:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)storedClassNameForCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI

+ (void)_accessibilityConvertDecimalDegreeToDMS:(double)arg1 degreesPtr:(long long*)arg2 minutesPtr:(long long*)arg3 secondsPtr:(double*)arg4;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (bool)__becomeACNZombie;
- (bool)__canBecomeCNZombie;
- (void)__gatherCNZombieRRStack;
- (void)__saveCNZombieRRStacks;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

+ (id)fromPBCodable:(id)arg1;

- (id)toPBCodable;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

- (bool)boolValueSafe;
- (bool)boolValueSafe:(int*)arg1;
- (double)doubleValueSafe;
- (double)doubleValueSafe:(int*)arg1;
- (long long)int64ValueSafe;
- (long long)int64ValueSafe:(int*)arg1;
- (id)stringValueSafe;
- (id)stringValueSafe:(int*)arg1;
- (const char *)utf8ValueSafe;
- (const char *)utf8ValueSafe:(int*)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (void)da_addNullRunLoopSourceAndPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)da_performSelectorThatDoesntAffectRetainCount:(SEL)arg1 withObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

- (id)_fides_objectByReplacingValue:(id)arg1 withValue:(id)arg2;

// Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore

- (id)addKVOBlockForKeyPath:(id)arg1 options:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)addOneShotKVOBlockForKeyPath:(id)arg1 options:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)allKVOObservers;
- (void)removeKVOBlockForToken:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

- (void)_fm_addNotificationObserverProxy:(id)arg1;
- (void)_fm_removeNotificationObserverProxy:(id)arg1;
- (id)fm_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)fm_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)fm_associatedObjectForDescriptor:(const struct { char *x1; unsigned long long x2; }*)arg1;
- (id)fm_logID;
- (id)fm_nullToNil;
- (void)fm_removeNotificationBlockObserver:(id)arg1;
- (void)fm_setAssociatedObject:(id)arg1 assocatedObjectDescriptor:(const struct { char *x1; unsigned long long x2; }*)arg2;
- (id)logID;
- (id)nullToNil;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkDefaultKeymap;

- (id)_gkAddObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (id)_gkDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)_gkPopulateWithObject:(id)arg1 keymap:(id)arg2;
- (id)_gkRecursiveDescription;
- (void)_gkRemoveObserverWithBlockToken:(id)arg1;
- (id)_gkViewDebuggingChildKeys;
- (id)_gkViewDebuggingChildren;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (id)_gkAuthenticatedPlayerID;
- (void)_gkRefreshPhotoForPlayer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_gkSetupAccountWithParamaters:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)fetchDetailedReportWithHealthStore:(id)arg1 reportDataBlock:(id /* block */)arg2;
- (bool)hasAssociatedReport;
- (bool)hasBeatToBeatData;
- (bool)hk_animatable;
- (id)hk_defaultDistanceQuantityType;
- (id)hk_localizedStringForAssociatedDistanceQuantity:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)_hf_briefDescription;
- (id)_hf_prettyDescriptionOfType:(unsigned long long)arg1 baseDescription:(id)arg2 extraDescription:(id)arg3;
- (id)_hf_stateDumpDescription;
- (id)hf_prettyDescription;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)__im_afterDelay:(double)arg1;
- (id)__im_afterDelay:(double)arg1 modes:(id)arg2;
- (id)__im_getInvocation:(id*)arg1;
- (id)__im_onDetachedThread;
- (id)__im_onMainThread;
- (id)__im_onMainThreadIfNecessary;
- (id)__im_onThread:(id)arg1;
- (id)__im_onThread:(id)arg1 immediateForMatchingThread:(bool)arg2;
- (bool)isNull;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ignoreMenuTracking:(bool)arg4;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)className;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)_createSingleton__im;
+ (bool)isSingleton;
+ (bool)isSingletonOverridden;
+ (id)overriddenSingleton;
+ (void)overrideSingletonWithObject:(id)arg1;
+ (void)removeSingletonOverride;
+ (void)replaceSingletonWithObject:(id)arg1;
+ (bool)replaceSingletonWithSubclass:(id)arg1;
+ (id)singletonOverride;

- (void)__im_performAsynchronousTest:(id /* block */)arg1 name:(id)arg2 timeout:(double)arg3 finalizer:(id /* block */)arg4;
- (bool)__isSingletonProxy__im;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (void)mf_clearLocks;

- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)arg1;
- (void)_mf_checkToAllowLock:(id)arg1;
- (void)_mf_checkToAllowOrderingWithLock:(id)arg1;
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)arg1;
- (void)_mf_dumpLockCallStacks:(unsigned long long)arg1 ordering:(id)arg2;
- (id)_mf_lockOrderingForType:(int)arg1;
- (bool)_mf_ntsIsLocked;
- (id)mf_exclusiveLocks;
- (void)mf_lock;
- (id)mf_lockOrdering;
- (void)mf_lockWithPriority;
- (id)mf_observeKeyPath:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)mf_strictLockOrdering;
- (bool)mf_tryLock;
- (bool)mf_tryLockWithPriority;
- (void)mf_unlock;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (id)mutableDeepCopy;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (void)mf_performOnewaySelectorInMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (bool)ml_matchesValue:(id)arg1 usingComparison:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (void)npkFakeArcRetain;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (void)_na_addNotificationObserverProxy:(id)arg1;
- (void)_na_removeNotificationObserverProxy:(id)arg1;
- (id)na_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)na_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)na_associatedObjectForDescriptor:(const struct { char *x1; unsigned long long x2; }*)arg1;
- (void)na_removeNotificationBlockObserver:(id)arg1;
- (void)na_setAssociatedObject:(id)arg1 assocatedObjectDescriptor:(const struct { char *x1; unsigned long long x2; }*)arg2;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2;
- (id)nu_unwrapJSValue;
- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (void)replaceClassSelector:(SEL)arg1 withSelector:(SEL)arg2;
+ (void)replaceInstanceSelector:(SEL)arg1 withSelector:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation

+ (long long)nf_compareObject:(id)arg1 toObject:(id)arg2;
+ (bool)nf_object:(id)arg1 isEqualToObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)ic_loggingDescriptionFromLoggable:(id)arg1 isPretty:(bool)arg2;

- (id)ic_loggingDescription;
- (id)ic_loggingIdentifier;
- (id)ic_prettyLoggingDescription;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (bool)icaxRespondsToSelector:(SEL)arg1 fromExtrasProtocol:(id)arg2;
- (id)icaxValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (bool)tsu_object:(id)arg1 isEqualToObject:(id)arg2;
+ (bool)tsu_overridesClassSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
+ (bool)tsu_overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;

- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)tsu_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)tsu_performSelector:(SEL)arg1 withValue:(id)arg2;
- (void)tsu_removeObserverForToken:(id)arg1;
- (void)tsu_runBlock;

// Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit

- (bool)pkaxRespondsToSelector:(SEL)arg1 fromExtrasProtocol:(id)arg2;
- (id)pkaxValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport

- (void)setValuesForKeysToNil:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_prettyDescription;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)pl_briefDescription;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)px_enumeratePropertiesUsingBlock:(id /* block */)arg1;
+ (void)px_performOnceForFirstAncestorClassSubclassOf:(Class)arg1 context:(void*)arg2 block:(id /* block */)arg3;
+ (void)px_swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;

- (long long)_px_reuseIdentifier;
- (void)_px_setReuseIdentifier:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;

- (id)_getRetainedValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copy:(bool)arg4;
- (id)_getRetainedValueForKeyPathOnMainThread:(id)arg1 copy:(bool)arg2;
- (void)_scr_safeGetValueForBlock:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForKeyPath:(id)arg1;
- (void)_scr_safeGetValueForKeyPath:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForSelector:(id)arg1 lock:(id)arg2;
- (void)_scr_safePerformBlock:(id)arg1 lock:(id)arg2;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)copyValueForKeyPathOnMainThread:(id)arg1;
- (void)performAsyncBlock:(id /* block */)arg1 forThreadKey:(id)arg2;
- (id)performSelector:(SEL)arg1 withObjectsAsArray:(id)arg2;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;
- (id)threadDescription;
- (id)valueForBlock:(id /* block */)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)valueForKeyPathOnMainThread:(id)arg1;
- (id)valueForSelector:(SEL)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copyValue:(bool)arg4 withObjects:(id)arg5;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (bool)isEmpty:(id)arg1;
+ (bool)isNotEmpty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (void)_siriui_applyUserInfoDictionary:(id)arg1;
- (id)_siriui_protobufTypeName;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (id)hashString;
- (void)performBlock:(id /* block */)arg1 usingQueue:(id)arg2;
- (void)performBlock:(id /* block */)arg1 withAnimationDuration:(double)arg2;
- (void)performBlockAndWait:(id /* block */)arg1 usingQueue:(id)arg2;
- (void)performBlockAndWaitOnMainThread:(id /* block */)arg1;
- (void)performBlockAndWakeUpMainThread:(id /* block */)arg1;
- (void)performBlockOnMainThread:(id /* block */)arg1;
- (void)performBlockWithoutAnimations:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (id)sbs_dataFromObject:(id)arg1;
+ (id)sbs_dataWithValue:(id)arg1;
+ (id)sbs_objectFromData:(id)arg1;
+ (id)sbs_valueFromData:(id)arg1 ofType:(const char *)arg2;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (bool)__isSKUIDynamicGridSizeCacheKey;

// Image: /System/Library/PrivateFrameworks/Swift/libswiftFoundation.dylib

+ (bool)_old_unswizzled_automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)_old_unswizzled_keyPathsForValuesAffectingValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Swift/libswiftObjectiveC.dylib

- (long long)hashValue;

// Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator

- (id)clipsStringRepresentation;
- (bool)isCLIPSSymbol;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (void)operation:(id)arg1 connection:(id)arg2 didCancelAuthenticationChallenge:(id)arg3;
- (void)operation:(id)arg1 connection:(id)arg2 didFailWithError:(id)arg3;
- (void)operation:(id)arg1 connection:(id)arg2 didReceiveData:(id)arg3;
- (void)operation:(id)arg1 connection:(id)arg2 didReceiveResponse:(id)arg3;
- (void)operation:(id)arg1 connection:(id)arg2 didSendBodyData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (double)operation:(id)arg1 connection:(id)arg2 restartDelayForError:(id)arg3;
- (bool)operation:(id)arg1 connection:(id)arg2 shouldRestartForError:(id)arg3;
- (id)operation:(id)arg1 connection:(id)arg2 willCacheResponse:(id)arg3;
- (void)operation:(id)arg1 connectionDidFinishLoading:(id)arg2;
- (void)operation:(id)arg1 didStartRequest:(id)arg2 withConnection:(id)arg3;
- (void)operation:(id)arg1 parser:(id)arg2 didEndElement:(id)arg3 namespaceURI:(id)arg4 qualifiedName:(id)arg5;
- (void)operation:(id)arg1 parser:(id)arg2 didEndMappingPrefix:(id)arg3;
- (void)operation:(id)arg1 parser:(id)arg2 didStartElement:(id)arg3 namespaceURI:(id)arg4 qualifiedName:(id)arg5 attributes:(id)arg6;
- (void)operation:(id)arg1 parser:(id)arg2 didStartMappingPrefix:(id)arg3 toURI:(id)arg4;
- (void)operation:(id)arg1 parser:(id)arg2 foundAttributeDeclarationWithName:(id)arg3 forElement:(id)arg4 type:(id)arg5 defaultValue:(id)arg6;
- (void)operation:(id)arg1 parser:(id)arg2 foundCDATA:(id)arg3;
- (void)operation:(id)arg1 parser:(id)arg2 foundCharacters:(id)arg3;
- (void)operation:(id)arg1 parser:(id)arg2 foundComment:(id)arg3;
- (void)operation:(id)arg1 parser:(id)arg2 foundElementDeclarationWithName:(id)arg3 model:(id)arg4;
- (void)operation:(id)arg1 parser:(id)arg2 foundExternalEntityDeclarationWithName:(id)arg3 publicID:(id)arg4 systemID:(id)arg5;
- (void)operation:(id)arg1 parser:(id)arg2 foundIgnorableWhitespace:(id)arg3;
- (void)operation:(id)arg1 parser:(id)arg2 foundInternalEntityDeclarationWithName:(id)arg3 value:(id)arg4;
- (void)operation:(id)arg1 parser:(id)arg2 foundNotationDeclarationWithName:(id)arg3 publicID:(id)arg4 systemID:(id)arg5;
- (void)operation:(id)arg1 parser:(id)arg2 foundProcessingInstructionWithTarget:(id)arg3 data:(id)arg4;
- (void)operation:(id)arg1 parser:(id)arg2 foundUnparsedEntityDeclarationWithName:(id)arg3 publicID:(id)arg4 systemID:(id)arg5 notationName:(id)arg6;
- (void)operation:(id)arg1 parser:(id)arg2 parseErrorOccurred:(id)arg3;
- (id)operation:(id)arg1 parser:(id)arg2 resolveExternalEntityName:(id)arg3 systemID:(id)arg4;
- (void)operation:(id)arg1 parser:(id)arg2 validationErrorOccurred:(id)arg3;
- (void)operation:(id)arg1 parserDidEndDocument:(id)arg2;
- (void)operation:(id)arg1 parserDidStartDocument:(id)arg2;
- (void)operation:(id)arg1 willStartRequest:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)operationQueue:(id)arg1 dequeuedOperation:(id)arg2;
- (void)operationQueue:(id)arg1 didStartOperation:(id)arg2;
- (void)requestQueue:(id)arg1 dequeuedRequest:(id)arg2;
- (void)requestQueue:(id)arg1 didCompleteRequest:(id)arg2;
- (void)requestQueue:(id)arg1 didStartRequest:(id)arg2 withConnection:(id)arg3;
- (void)requestQueue:(id)arg1 willStartRequest:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (bool)tsu_object:(id)arg1 isEqualToObject:(id)arg2;
+ (bool)tsu_overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;

- (void)appendJsonStringToString:(id)arg1;
- (void)tsu_performSelector:(SEL)arg1 withValue:(id)arg2;
- (void)tsu_runBlock;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_associatedIKViewElement;
- (void)tv_setAssociatedIKViewElement:(id)arg1;
- (bool)tv_superOfClass:(Class)arg1 respondsToSelector:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC

+ (void)NPHRequestIdleTimeNotification;
+ (void)_NPHIdleTimeNotification:(id)arg1;
+ (void)performBlockAtIdle:(id /* block */)arg1;

- (void)nph_debounce:(SEL)arg1 delay:(double)arg2;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

+ (void)_accessibilityClearProcessedClasses:(id)arg1;
+ (bool)_accessibilityHasUnitTestingOrientation;
+ (void)_accessibilitySetUnitTestingOrientation:(long long)arg1;
+ (id)_accessibilityTextChecker;
+ (void)_accessibilityUndoAttributedDecisionCaching:(id)arg1;
+ (long long)_accessibilityUnitTestingOrientation;
+ (void)_accessibilityUnsetUnitTestingOrientation;
+ (void)_accessibilityUpdateOpaqueFocusStateForTechnology:(id)arg1 oldElement:(id)arg2 newElement:(id)arg3;
+ (id)accessibilityBundles;
+ (void)accessibilityInitializeBundle;

- (bool)__accessibilityReadAllOnFocus;
- (id)__accessibilityRetrieveFrameOrPathDelegate;
- (bool)__accessibilitySupportsActivateAction;
- (bool)__accessibilitySupportsSecondaryActivateAction;
- (void)__accessibilityUnregister:(void*)arg1 shouldRelease:(bool)arg2;
- (struct CGPoint { double x1; double x2; })__accessibilityVisibleScrollArea:(bool)arg1;
- (id)_accessibilityAXAttributedHint;
- (id)_accessibilityAXAttributedLabel;
- (id)_accessibilityAXAttributedValue;
- (id)_accessibilityAbsoluteValue;
- (id)_accessibilityAccessibleAncestor;
- (id)_accessibilityAccessibleDescendants;
- (void)_accessibilityActionBlock:(id /* block */*)arg1 andValue:(id*)arg2 forKey:(unsigned int)arg3;
- (bool)_accessibilityActivateDragWithDescriptorDictionary:(id)arg1 forAssistiveTechnology:(id)arg2;
- (float)_accessibilityActivationDelay;
- (id)_accessibilityActiveKeyboard;
- (id)_accessibilityActiveURL;
- (void)_accessibilityAddMispellingsToAttributedString:(id)arg1;
- (void)_accessibilityAddRecentlyActivatedBundleIdFromSwitcher:(id)arg1;
- (id)_accessibilityAddToDragSessionCustomAction;
- (void)_accessibilityAddTrait:(unsigned long long)arg1;
- (id)_accessibilityAllContextDescriptors;
- (id)_accessibilityAllDragSourceDescriptors;
- (id)_accessibilityAllDropPointDescriptors;
- (bool)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)_accessibilityAllowedGeometryOverlap;
- (double)_accessibilityAllowedGeometryOverlapX;
- (bool)_accessibilityAllowsAlternativeCharacterActivation;
- (bool)_accessibilityAlternateActionForURL:(id)arg1;
- (bool)_accessibilityAlwaysNo;
- (bool)_accessibilityAlwaysOrderedFirst;
- (bool)_accessibilityAlwaysSpeakTableHeaders;
- (bool)_accessibilityAlwaysYes;
- (id)_accessibilityAncestorFocusParcel;
- (id)_accessibilityAncestorForSiblingsWithType:(unsigned long long)arg1;
- (id)_accessibilityAncestorIsAccessibilityElementsHidden;
- (id)_accessibilityAncestorIsKindOf:(Class)arg1;
- (id)_accessibilityAncestry;
- (bool)_accessibilityAnimationsInProgress;
- (void)_accessibilityAnnouncementComplete:(id)arg1;
- (id)_accessibilityAppSwitcherApps;
- (bool)_accessibilityAppendOrderedChildLeafDescendantsToArray:(id)arg1 count:(unsigned long long)arg2 shouldStopAtRemoteElement:(bool)arg3 options:(id)arg4 treeLogger:(id)arg5;
- (id)_accessibilityApplication;
- (bool)_accessibilityApplicationHandleButtonAction:(int)arg1;
- (bool)_accessibilityApplicationIsRTL;
- (int)_accessibilityApplicationOrientation;
- (id)_accessibilityApplicationSemanticContext;
- (id /* block */)_accessibilityAttributeMatcher:(long long)arg1;
- (id)_accessibilityAttributedTextRetrieval;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)_accessibilityAuditIssuesWithOptions:(id)arg1;
- (id)_accessibilityAutomaticIdentifier;
- (void)_accessibilityAutoscrollInDirection:(unsigned long long)arg1;
- (void)_accessibilityAutoscrollScrollToBottom;
- (void)_accessibilityAutoscrollScrollToTop;
- (id)_accessibilityAutoscrollTarget;
- (unsigned long long)_accessibilityAvailableAutoscrollDirections;
- (id)_accessibilityAwayAlertElements;
- (bool)_accessibilityBackingElementIsValid;
- (bool)_accessibilityBannerIsSticky;
- (id)_accessibilityBaseHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)_accessibilityBasePerformOrbGesture:(long long)arg1;
- (bool)_accessibilityBaseScrollToVisible;
- (id /* block */)_accessibilityBoldTextMatch;
- (bool)_accessibilityBookShowsDualPages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityBriefLabel;
- (id)_accessibilityBundleIdentifier;
- (bool)_accessibilityCameraIrisOpen;
- (bool)_accessibilityCanBeConsideredAsMainWindow;
- (bool)_accessibilityCanBeFirstResponder;
- (bool)_accessibilityCanBeFirstResponderWhenNotAnElement;
- (bool)_accessibilityCanBecomeNativeFocused;
- (bool)_accessibilityCanDeleteTableViewCell;
- (bool)_accessibilityCanDismissPopoverController:(id)arg1;
- (bool)_accessibilityCanDisplayMultipleControllers;
- (bool)_accessibilityCanPerformAction:(int)arg1;
- (bool)_accessibilityCanPerformEscapeAction;
- (bool)_accessibilityCanScrollInAtLeastOneDirection;
- (void)_accessibilityChangeToKeyplane:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityChildrenUnionContentFrame;
- (id)_accessibilityCirclePathBasedOnBoundsWidth;
- (void)_accessibilityCleanupContainerElementReferences;
- (id)_accessibilityCollectionViewCellContentSubviews;
- (long long)_accessibilityCollectionViewItemsPerRow;
- (id /* block */)_accessibilityColorChangeMatch;
- (unsigned long long)_accessibilityColumnCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityColumnRange;
- (id)_accessibilityCommonStylingRotors;
- (long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityCompareFrameForScrollParent:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4;
- (long long)_accessibilityCompareGeometryForViewOrDictionary:(id)arg1;
- (bool)_accessibilityContainedByTableLogicIsEnabledOutsideOfWebContext;
- (id)_accessibilityContainerForAccumulatingCustomRotorItems;
- (id)_accessibilityContainerInDirection:(bool)arg1;
- (id)_accessibilityContainerTypes;
- (id)_accessibilityContainingParentForOrdering;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityContentFrame;
- (struct CGPoint { double x1; double x2; })_accessibilityContentOffset;
- (id)_accessibilityContextDescriptors;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityControlDescendantWithAction:(SEL)arg1;
- (id)_accessibilityControlDescendantWithTarget:(id)arg1;
- (struct CGPoint { double x1; double x2; })_accessibilityConvertPointToViewSpace:(struct CGPoint { double x1; double x2; })arg1;
- (void)_accessibilityConvertStyleAttributesToAccessibility:(id)arg1;
- (id)_accessibilityConvertSystemBoundedPathToContextSpace:(id)arg1;
- (struct CGPoint { double x1; double x2; })_accessibilityConvertSystemBoundedScreenPointToContextSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityConvertSystemBoundedScreenRectToContextSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_accessibilityCurrentStatus;
- (id)_accessibilityCurrentlyFocusedElementForTechnology:(id)arg1;
- (id)_accessibilityCustomActionGroupIdentifier;
- (id)_accessibilityCustomActionNamesAndIdentifiers;
- (id)_accessibilityCustomActions;
- (id)_accessibilityCustomRotorResultHelper:(id)arg1 array:(id)arg2;
- (long long)_accessibilityCustomRotorTypeForString:(id)arg1;
- (void)_accessibilityCut;
- (id)_accessibilityDOMAttributes;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_accessibilityDatePickerComponentType;
- (id)_accessibilityDateTimePickerValues;
- (void)_accessibilityDecreaseAutoscrollSpeed;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (void)_accessibilityDelete;
- (bool)_accessibilityDescendantElementAtIndexPathIsValid:(id)arg1;
- (id)_accessibilityDescendantOfType:(Class)arg1;
- (void)_accessibilityDetectAnimationsNonActive;
- (bool)_accessibilityDidDeleteTableViewCell;
- (void)_accessibilityDidFocusOnOpaqueElement:(id)arg1 technology:(id)arg2;
- (void)_accessibilityDidReuseOpaqueElementView:(id)arg1;
- (bool)_accessibilityDidSetOpaqueElementProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityDirectInteractionFrame;
- (bool)_accessibilityDismissAlternativeKeyPicker;
- (bool)_accessibilityDispatchKeyboardAction:(id)arg1;
- (unsigned int)_accessibilityDisplayId;
- (id)_accessibilityDisplayPathForScreenPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })_accessibilityDisplayPointForSceneReferencePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityDisplayRectForSceneReferenceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)_accessibilityDistance:(struct CGPoint { double x1; double x2; })arg1 forAngle:(float)arg2 toRoad:(id)arg3;
- (float)_accessibilityDistanceFromEndOfRoad:(struct CGPoint { double x1; double x2; })arg1 forAngle:(float)arg2;
- (id)_accessibilityDragSourceDescriptorDictionaryRepresentations;
- (id)_accessibilityDropPointDescriptorDictionaryRepresentations;
- (id)_accessibilityElementCommunityIdentifier;
- (bool)_accessibilityElementShouldBeInvalid;
- (id)_accessibilityElementStoredUserLabel;
- (bool)_accessibilityElementVisibilityAffectsLayout;
- (id)_accessibilityElements;
- (void)_accessibilityElementsDescriptionProcess:(id)arg1 tabCount:(long long)arg2;
- (id)_accessibilityElementsForSearchParameter:(id)arg1;
- (id)_accessibilityElementsInDirectionWithCount:(unsigned long long)arg1 options:(id)arg2;
- (id)_accessibilityElementsWithSemanticContext:(id)arg1;
- (void)_accessibilityEnumerateSiblingsFromOrderedChildrenContainer:(id)arg1 fromChildAtIndex:(long long)arg2 headerIndex:(long long)arg3 footerIndex:(long long)arg4 isMovingForward:(bool)arg5 usingBlock:(id /* block */)arg6;
- (void)_accessibilityEnumerateSiblingsWithParent:(id*)arg1 options:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)_accessibilityEquivalenceTag;
- (long long)_accessibilityExpandedStatus;
- (unsigned long long)_accessibilityExplorerElementReadPriority;
- (id)_accessibilityExplorerElements;
- (id)_accessibilityExtendedLabelForFocusParcelWithLabel:(id)arg1;
- (bool)_accessibilityFauxCollectionViewCellsDisabled;
- (id)_accessibilityFilenameForAttachmentCID:(id)arg1;
- (id)_accessibilityFilterInteractionLocationDescriptorsForVisible:(id)arg1;
- (id)_accessibilityFindAXDescendants:(id /* block */)arg1 byAddingElements:(id /* block */)arg2;
- (id)_accessibilityFindAncestor:(id /* block */)arg1 startWithSelf:(bool)arg2;
- (id)_accessibilityFindAnyAXDescendant:(id /* block */)arg1 byAddingElements:(id /* block */)arg2;
- (id)_accessibilityFindDescendant:(id /* block */)arg1;
- (id)_accessibilityFindElementInDirection:(long long)arg1 searchType:(long long)arg2 allowOutOfBoundsChild:(bool)arg3;
- (void)_accessibilityFindSearchResult:(bool)arg1 withString:(id)arg2;
- (id)_accessibilityFindSubviewDescendant:(id /* block */)arg1;
- (id)_accessibilityFindSubviewDescendantsPassingTest:(id /* block */)arg1;
- (id)_accessibilityFindUnsortedSubviewDescendantsPassingTest:(id /* block */)arg1;
- (id)_accessibilityFindViewAncestor:(id /* block */)arg1 startWithSelf:(bool)arg2;
- (id)_accessibilityFirstElementForFocus;
- (id)_accessibilityFirstOpaqueElement;
- (id)_accessibilityFirstOpaqueElementForFocus;
- (id)_accessibilityFirstResponderForKeyWindow;
- (id)_accessibilityFirstResponderForWindow:(id)arg1;
- (id)_accessibilityFirstVisibleItem;
- (id)_accessibilityFocusAbsoluteFirstOpaqueElementForTechnology:(id)arg1;
- (id)_accessibilityFocusAbsoluteLastOpaqueElementForTechnology:(id)arg1;
- (unsigned long long)_accessibilityFocusParcelChildrenCount:(unsigned long long)arg1;
- (id)_accessibilityFocusStatePerTechnology;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityFocusableFrameForZoom;
- (id /* block */)_accessibilityFontChangeMatch;
- (double)_accessibilityFontSize;
- (id)_accessibilityFrameDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityFrameForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityFrameForSorting;
- (bool)_accessibilityFullscreenVideoViewIsVisible;
- (id)_accessibilityFuzzyHitTestElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityGesturePracticeRegion;
- (void*)_accessibilityGetBlockForAttribute:(long long)arg1;
- (id)_accessibilityGuideElementHeaderText;
- (id)_accessibilityGuideElementInDirection:(bool)arg1;
- (void)_accessibilityHandleATFocused:(bool)arg1 assistiveTech:(id)arg2;
- (bool)_accessibilityHandleMagicTap;
- (bool)_accessibilityHandleMagicTapForPronunciation;
- (bool)_accessibilityHandlePublicScroll:(long long)arg1;
- (bool)_accessibilityHandwritingActivateKeyboardDeleteKey;
- (bool)_accessibilityHandwritingActivateKeyboardReturnKey;
- (id)_accessibilityHandwritingAncestor;
- (bool)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (bool)_accessibilityHandwritingAttributeAcceptsRawInput;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSetsForKeyboardType:(long long)arg1;
- (bool)_accessibilityHandwritingAttributeCanDeleteCharacter;
- (id)_accessibilityHandwritingAttributeLanguage;
- (int)_accessibilityHandwritingAttributePreferredCharacterSet;
- (int)_accessibilityHandwritingAttributePreferredCharacterSetForKeyboardType:(long long)arg1;
- (bool)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (bool)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (id)_accessibilityHandwritingAttributes;
- (bool)_accessibilityHasActionBlockForKey:(unsigned int)arg1;
- (bool)_accessibilityHasBadge;
- (bool)_accessibilityHasDescendantOfType:(Class)arg1;
- (bool)_accessibilityHasDragDestinations;
- (bool)_accessibilityHasDragSources;
- (bool)_accessibilityHasNativeFocus;
- (bool)_accessibilityHasOrderedChildren;
- (bool)_accessibilityHasTextOperations;
- (bool)_accessibilityHasVariantKeys;
- (bool)_accessibilityHasVisibleFrame;
- (id)_accessibilityHeaderElement;
- (id)_accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)_accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)_accessibilityHitTestReverseOrder;
- (bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityHitTestSupplementaryViews:(struct CGPoint { double x1; double x2; })arg1 event:(id)arg2;
- (id)_accessibilityHitTestSupplementaryViews:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (id)_accessibilityHitTestingObscuredScreenAllowedViews;
- (bool)_accessibilityHitTestsStatusBar;
- (long long)_accessibilityHorizontalSizeClass;
- (bool)_accessibilityIgnoreDelegate;
- (void)_accessibilityIgnoreNextNotification:(unsigned int)arg1;
- (void)_accessibilityIgnoreNextPostPasteboardTextOperation:(id)arg1;
- (bool)_accessibilityIncludeDuringContentReading;
- (void)_accessibilityIncreaseAutoscrollSpeed;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (long long)_accessibilityIndexForPickerString:(id)arg1;
- (id)_accessibilityIndexPath;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityIndexPathAsRange;
- (unsigned long long)_accessibilityInheritedTraits;
- (id)_accessibilityInputIdentifierForKeyboard;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (long long)_accessibilityInterfaceOrientationForScreenCoordinates;
- (bool)_accessibilityInternalHandleStartStopToggle;
- (id)_accessibilityInternalTextLinkCustomRotors;
- (id)_accessibilityInternalTextLinks;
- (bool)_accessibilityIsAccessibilityUIServer;
- (bool)_accessibilityIsAlertContainer;
- (bool)_accessibilityIsAutoscrolling;
- (bool)_accessibilityIsAwayAlertElement;
- (bool)_accessibilityIsAwayAlertElementNew;
- (bool)_accessibilityIsContainedByPreferredNativeFocusElement;
- (bool)_accessibilityIsContainedByVideoElement;
- (bool)_accessibilityIsDescendantOfElement:(id)arg1;
- (bool)_accessibilityIsDictating;
- (bool)_accessibilityIsDraggableElementAttribute;
- (bool)_accessibilityIsEscapable;
- (bool)_accessibilityIsFirstElementForFocus;
- (bool)_accessibilityIsFirstSibling;
- (bool)_accessibilityIsFirstSiblingForType:(unsigned long long)arg1;
- (bool)_accessibilityIsFocusParcel;
- (bool)_accessibilityIsFrameOutOfBounds;
- (bool)_accessibilityIsFrameOutOfBoundsConsideringScrollParents:(bool)arg1;
- (bool)_accessibilityIsGuideElement;
- (bool)_accessibilityIsInAppSwitcher;
- (bool)_accessibilityIsInFolder;
- (bool)_accessibilityIsInTabBar;
- (bool)_accessibilityIsInTableCell;
- (bool)_accessibilityIsInternationalKeyboardKey;
- (bool)_accessibilityIsIsolatedWindow;
- (bool)_accessibilityIsLastSibling;
- (bool)_accessibilityIsLastSiblingForType:(unsigned long long)arg1;
- (bool)_accessibilityIsMainWindow;
- (bool)_accessibilityIsMap;
- (bool)_accessibilityIsMathTouchExplorationView;
- (bool)_accessibilityIsNotFirstElement;
- (bool)_accessibilityIsPressed;
- (bool)_accessibilityIsRTL;
- (bool)_accessibilityIsRemoteElement;
- (bool)_accessibilityIsScannerElement;
- (bool)_accessibilityIsScannerGroup;
- (bool)_accessibilityIsScrollAncestor;
- (bool)_accessibilityIsScrollable;
- (bool)_accessibilityIsSoftwareKeyboardMimic;
- (bool)_accessibilityIsSortPriorityContainer;
- (bool)_accessibilityIsSpeakThisElement;
- (bool)_accessibilityIsStarkElement;
- (bool)_accessibilityIsTableCell;
- (bool)_accessibilityIsTitleElement;
- (bool)_accessibilityIsTouchContainer;
- (bool)_accessibilityIsTourGuideRunning;
- (bool)_accessibilityIsUserInteractionEnabled;
- (bool)_accessibilityIsUsingRemoteParentActivateAction;
- (bool)_accessibilityIsViewDescendantOfElement:(id)arg1;
- (bool)_accessibilityIsVisibleByCompleteHitTest;
- (bool)_accessibilityIsWebDocumentView;
- (id /* block */)_accessibilityItalicTextMatch;
- (bool)_accessibilityIterateParentsForTestBlock:(id /* block */)arg1;
- (void)_accessibilityIterateScrollParentsUsingBlock:(id /* block */)arg1;
- (void)_accessibilityIterateScrollParentsUsingBlock:(id /* block */)arg1 includeSelf:(bool)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_accessibilityJailTransform;
- (void)_accessibilityJumpToTableIndex:(id)arg1;
- (bool)_accessibilityKeyboardKeyAllowsTouchTyping;
- (id)_accessibilityKeyboardKeyEnteredString;
- (id)_accessibilityKeyboardKeyForString:(id)arg1;
- (bool)_accessibilityKeyboardKeyHasSignificantAlternateActions;
- (bool)_accessibilityKeyboardSupportsGestureMode;
- (bool)_accessibilityLanguageOverriddesUser;
- (id)_accessibilityLastElementsUpdatedWithContainerElementReferences;
- (bool)_accessibilityLastHitTestNearBorder;
- (id)_accessibilityLastOpaqueElement;
- (id)_accessibilityLaunchableApps;
- (id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 options:(id)arg2;
- (id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 shouldStopAtRemoteElement:(bool)arg2 options:(id)arg3;
- (id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 shouldStopAtRemoteElement:(bool)arg2 options:(id)arg3 treeLogger:(id)arg4;
- (id)_accessibilityLeafDescendantsWithOptions:(id)arg1;
- (double)_accessibilityLeftOpaqueScrollViewContentOffsetLimit;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (long long)_accessibilityLineEndPosition;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (long long)_accessibilityLineStartPosition;
- (id)_accessibilityLinkedUIElements;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityLoadAccessibilityInformationSupplementaryItems;
- (bool)_accessibilityLoadURL:(id)arg1;
- (id)_accessibilityMapDetailedInfoAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)_accessibilityMapFeatureType;
- (id)_accessibilityMarkerForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibilityMarkerLineEndsForMarkers:(id)arg1;
- (id)_accessibilityMarkersForPoints:(id)arg1;
- (id)_accessibilityMarkersForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGPoint { double x1; double x2; })_accessibilityMaxScrubberPosition;
- (double)_accessibilityMaxValue;
- (bool)_accessibilityMimicsTextInputResponder;
- (struct CGPoint { double x1; double x2; })_accessibilityMinScrubberPosition;
- (double)_accessibilityMinValue;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityMisspelledWordIn:(id)arg1 searchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 next:(bool)arg3;
- (id)_accessibilityMoveFocusToNextOpaqueElementForTechnology:(id)arg1 direction:(long long)arg2 searchType:(long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (id)_accessibilityNativeFocusAncestor;
- (id)_accessibilityNativeFocusElement;
- (id)_accessibilityNativeFocusPreferredElement;
- (bool)_accessibilityNativeFocusPreferredElementIsValid;
- (id)_accessibilityNativeFocusableElements:(id)arg1;
- (unsigned long long)_accessibilityNativeTraits;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityNextTextRangeUsingTextStyling:(id)arg1 attributeMatch:(id /* block */)arg2;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)_accessibilityObscuredScreenAllowedViews;
- (id)_accessibilityObscuredScreenAllowedWindows;
- (struct CGPoint { double x1; double x2; })_accessibilityOffsetForOpaqueElementDirection:(long long)arg1;
- (bool)_accessibilityOnlyComparesByXAxis;
- (id)_accessibilityOpaqueElementParent;
- (bool)_accessibilityOpaqueElementProvider;
- (void)_accessibilityOpaqueElementScrollCleanup;
- (void)_accessibilityOpaqueElementScrollToDirection:(long long)arg1;
- (bool)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)_accessibilityOpaqueHeaderElementInDirection:(long long)arg1 childElement:(id)arg2;
- (bool)_accessibilityOpaqueScrollViewSupportsLastResortScrollBeyondBounds;
- (id)_accessibilityOrderedChildrenContainer;
- (bool)_accessibilityOverridesInstructionsHint;
- (bool)_accessibilityOverridesInvalidFrames;
- (bool)_accessibilityOverridesInvisibility;
- (bool)_accessibilityOverridesLabelValueHintSelector:(SEL)arg1;
- (id)_accessibilityPageContent;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (id)_accessibilityPageTextMarkerRange;
- (id)_accessibilityParentForFindingScrollParent;
- (id)_accessibilityParentFromOrderedChildrenContainer:(id)arg1;
- (id)_accessibilityParentTableView;
- (id)_accessibilityParentView;
- (void)_accessibilityPaste;
- (void)_accessibilityPauseAutoscrolling;
- (bool)_accessibilityPerformCustomActionWithIdentifier:(id)arg1;
- (bool)_accessibilityPerformEscape;
- (bool)_accessibilityPerformLegacyCustomAction:(id)arg1;
- (bool)_accessibilityPerformOrbGesture:(long long)arg1;
- (id)_accessibilityPerformPublicCustomRotorSearch:(id)arg1 searchDirection:(long long)arg2 currentItem:(id)arg3;
- (bool)_accessibilityPerformUserTestingAction:(id)arg1;
- (id)_accessibilityPhotoDescription;
- (long long)_accessibilityPickerType;
- (id /* block */)_accessibilityPlainTextMatch;
- (void)_accessibilityPlayKeyboardClickSound;
- (void)_accessibilityPlaySystemSound:(int)arg1;
- (void)_accessibilityPostAnnouncement:(id)arg1;
- (void)_accessibilityPostNotificationHelper:(id)arg1;
- (void)_accessibilityPostPasteboardTextForOperation:(id)arg1;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString { }*)arg1;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString { }*)arg1 insertedText:(id)arg2;
- (void)_accessibilityPostValueChangedNotificationWithInsertedText:(id)arg1;
- (SEL)_accessibilityPotentiallyAttributedSelectorForNonAttributedSelector:(SEL)arg1 attributedSelector:(SEL)arg2;
- (id)_accessibilityPotentiallyAttributedValueForNonAttributedSelector:(SEL)arg1 attributedSelector:(SEL)arg2;
- (id)_accessibilityPreferredScrollActions;
- (bool)_accessibilityPrefersNonAttributedAttributeWithOverrideSelector:(SEL)arg1 nonAttributedSelector:(SEL)arg2 attributedSelector:(SEL)arg3;
- (bool)_accessibilityPrefersNonAttributedHint;
- (bool)_accessibilityPrefersNonAttributedLabel;
- (bool)_accessibilityPrefersNonAttributedValue;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (void)_accessibilityProcessScannerGroupElementPieces:(id)arg1;
- (id)_accessibilityProxyView;
- (id)_accessibilityProxyViewAncestorWhenMissingWindow;
- (id)_accessibilityPublicCustomRotorIdForSystemType:(id)arg1;
- (id)_accessibilityPublicCustomRotorName:(id)arg1;
- (bool)_accessibilityPublicCustomRotorVisibleInTouchRotor:(id)arg1;
- (id)_accessibilityPublicCustomRotors;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForLineNumber:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForTextMarker:(id)arg1;
- (id)_accessibilityRawIsSpeakThisElement;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRawRangeForUITextRange:(id)arg1;
- (void)_accessibilityRawSetIsSpeakThisElement:(id)arg1;
- (bool)_accessibilityReadAllContinuesWithScroll;
- (bool)_accessibilityReadAllOnFocus;
- (id)_accessibilityRecentlyActivatedApplicationBundleIdentifiers;
- (void)_accessibilityRegisterForDictationLifecycleNotifications;
- (long long)_accessibilityReinterpretVoiceOverCommand:(long long)arg1;
- (id)_accessibilityRemoteApplication;
- (id)_accessibilityRemoteParent;
- (void)_accessibilityRemoveActionBlockForKey:(unsigned int)arg1;
- (void)_accessibilityRemoveAllActionBlocks;
- (void)_accessibilityRemoveRecentlyActivatedBundleIdFromSwitcher:(id)arg1;
- (void)_accessibilityRemoveTrait:(unsigned long long)arg1;
- (void)_accessibilityReplace;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (bool)_accessibilityRepresentsInfiniteCollection;
- (void)_accessibilityResetContainerElements;
- (bool)_accessibilityRespectsTableScrollEnabledFlag;
- (id)_accessibilityResponderChainForKeyWindow;
- (id)_accessibilityResponderChainForWindow:(id)arg1;
- (id)_accessibilityResponderElement;
- (bool)_accessibilityRetainsCustomRotorActionSetting;
- (id)_accessibilityRetieveHeaderElementText;
- (id)_accessibilityRetrieveHeaderElements;
- (id)_accessibilityRetrieveImagePathLabel:(id)arg1;
- (id)_accessibilityRetrieveLinkedUIElementsFromContainerChain;
- (id)_accessibilityRetrieveLocalizationBundleID;
- (id)_accessibilityRetrieveLocalizationBundlePath;
- (id)_accessibilityRetrieveLocalizedStringKey;
- (id)_accessibilityRetrieveLocalizedStringTableName;
- (id)_accessibilityReusableViewForOpaqueElement:(id)arg1;
- (double)_accessibilityRightOpaqueScrollViewContentOffsetLimit;
- (bool)_accessibilityRoadContainsTrackingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibilityRoleDescription;
- (id)_accessibilityRotorTypeStringForCustomRotor:(long long)arg1;
- (unsigned long long)_accessibilityRowCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRowRange;
- (bool)_accessibilitySavePhotoLabel:(id)arg1;
- (long long)_accessibilityScannerActivateBehavior;
- (id)_accessibilityScannerElementsGrouped:(bool)arg1 shouldIncludeNonScannerElements:(bool)arg2;
- (id)_accessibilityScannerGroupElements;
- (unsigned long long)_accessibilityScannerGroupTraits;
- (bool)_accessibilityScannerShouldUseActivateInPointMode;
- (unsigned long long)_accessibilityScanningBehaviorTraits;
- (struct CGPoint { double x1; double x2; })_accessibilityScreenPointForSceneReferencePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityScreenRectForSceneReferenceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_accessibilityScrollAcrossPageBoundaries;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1 alwaysAllowRefreshAction:(bool)arg2;
- (bool)_accessibilityScrollDownPage;
- (bool)_accessibilityScrollLeftPage;
- (bool)_accessibilityScrollNextPage;
- (void)_accessibilityScrollOpaqueElementIntoView:(long long)arg1 previousScroller:(id)arg2;
- (bool)_accessibilityScrollPageInDirection:(long long)arg1 shouldSendScrollFailed:(bool)arg2;
- (id)_accessibilityScrollParent;
- (id)_accessibilityScrollParentForComparingByXAxis;
- (bool)_accessibilityScrollPreviousPage;
- (struct CGPoint { double x1; double x2; })_accessibilityScrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_accessibilityScrollRightPage;
- (SEL)_accessibilityScrollSelectorForDirection:(long long)arg1;
- (id)_accessibilityScrollStatus;
- (bool)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forView:(id)arg2;
- (void)_accessibilityScrollToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_accessibilityScrollToVisible;
- (bool)_accessibilityScrollToVisibleForNextElementRetrieval:(long long)arg1;
- (bool)_accessibilityScrollUpPage;
- (bool)_accessibilityScrollingEnabled;
- (id)_accessibilitySearchSubtreesAfterChildElement:(id)arg1 direction:(long long)arg2 searchType:(long long)arg3 allowOutOfBoundsChild:(bool)arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (bool)_accessibilitySecondaryActivate;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilitySelectedNSRangeForObject;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilitySelectedTextRange;
- (bool)_accessibilitySelfFoundByHitTesting;
- (id)_accessibilitySemanticContext;
- (id)_accessibilitySemanticContextForElement:(id)arg1;
- (void)_accessibilitySendPageScrollFailedIfNecessary;
- (bool)_accessibilityServesAsContainingParentForOrdering;
- (bool)_accessibilityServesAsFirstElement;
- (bool)_accessibilityServesAsFirstResponder;
- (void)_accessibilitySetActionBlock:(id /* block */)arg1 withValue:(id)arg2 forKey:(unsigned int)arg3;
- (void)_accessibilitySetAllowedGeometryOverlap:(double)arg1;
- (void)_accessibilitySetAnimationsInProgress:(bool)arg1;
- (void)_accessibilitySetApplicationOrientation:(int)arg1;
- (void)_accessibilitySetAuditIssueForType:(unsigned long long)arg1;
- (void)_accessibilitySetAutoscrollTarget:(id)arg1;
- (void)_accessibilitySetBlock:(void*)arg1 forAttribute:(long long)arg2;
- (void)_accessibilitySetCameraIrisOpen:(bool)arg1;
- (void)_accessibilitySetContextDescriptors:(id)arg1;
- (void)_accessibilitySetCurrentGesture:(id)arg1;
- (void)_accessibilitySetCurrentWordInPageContext:(id)arg1;
- (void)_accessibilitySetIgnoreDelegate:(bool)arg1;
- (void)_accessibilitySetIsScannerElement:(bool)arg1;
- (void)_accessibilitySetIsScannerGroup:(bool)arg1;
- (void)_accessibilitySetIsSortPriorityContainer:(bool)arg1;
- (void)_accessibilitySetIsSpeakThisElement:(bool)arg1;
- (void)_accessibilitySetIsTourGuideRunning:(bool)arg1;
- (void)_accessibilitySetLastElementsUpdatedWithContainerElementReferences:(id)arg1;
- (bool)_accessibilitySetNativeFocus;
- (void)_accessibilitySetNavigationControllerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_accessibilitySetObscuredScreenAllowedWindows:(id)arg1;
- (void)_accessibilitySetOpaqueElementScrollsContentIntoView:(bool)arg1;
- (void)_accessibilitySetOverridesInvisibility:(bool)arg1;
- (void)_accessibilitySetRoleDescription:(id)arg1;
- (void)_accessibilitySetRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_accessibilitySetScannerActivateBehavior:(long long)arg1;
- (void)_accessibilitySetScannerGroupTraits:(unsigned long long)arg1;
- (void)_accessibilitySetScrollAcrossPageBoundaries:(bool)arg1;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_accessibilitySetShouldHitTestFallBackToNearestChild:(bool)arg1;
- (void)_accessibilitySetShouldPreventOpaqueScrolling:(bool)arg1;
- (void)_accessibilitySetSortPriority:(long long)arg1;
- (void)_accessibilitySetSupportsMediaAnalysis:(bool)arg1;
- (void)_accessibilitySetUserDefinedIsGuideElement:(bool)arg1;
- (void)_accessibilitySetUserTestingIsCancelButton:(bool)arg1;
- (void)_accessibilitySetUserTestingIsDefaultButton:(bool)arg1;
- (void)_accessibilitySetUserTestingIsDestructiveButton:(bool)arg1;
- (void)_accessibilitySetUserTestingIsPreferredButton:(bool)arg1;
- (void)_accessibilitySetUsesScrollParentForOrdering:(bool)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (void)_accessibilitySetVisibleContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_accessibilitySetWantsOpaqueElementProviders:(bool)arg1;
- (bool)_accessibilityShouldAnnounceFontInfo;
- (bool)_accessibilityShouldAttemptScrollToFrameOnParentView;
- (bool)_accessibilityShouldAvoidAnnouncing;
- (bool)_accessibilityShouldAvoidScrollingCollectionViewCells;
- (bool)_accessibilityShouldBeExplorerElementWithoutSystemFocus;
- (bool)_accessibilityShouldBeProcessed:(id)arg1;
- (bool)_accessibilityShouldBeScannedIfAncestorCanScroll;
- (bool)_accessibilityShouldIgnoreSoundForFailedMoveAttempt;
- (bool)_accessibilityShouldIncludeRowRangeInElementDescription;
- (bool)_accessibilityShouldInheritTraits;
- (bool)_accessibilityShouldPerformIncrementOrDecrement;
- (bool)_accessibilityShouldPreventOpaqueScrolling;
- (bool)_accessibilityShouldReleaseAfterUnregistration;
- (bool)_accessibilityShouldScrollRemoteParent;
- (bool)_accessibilityShouldSetNativeFocusWhenATVFocused;
- (bool)_accessibilityShouldSpeakExplorerElementsAfterFocus;
- (bool)_accessibilityShouldSpeakMathEquationTrait;
- (bool)_accessibilityShouldSpeakScrollStatusOnEntry;
- (bool)_accessibilityShouldSuppressCustomActionsHint;
- (bool)_accessibilityShouldUseSupplementaryViews;
- (bool)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
- (bool)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(bool)arg2 isLast:(bool)arg3;
- (bool)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(bool)arg2 isLast:(bool)arg3 sawAXElement:(bool*)arg4;
- (id)_accessibilitySiriContentElementsWithSemanticContext;
- (id)_accessibilitySiriContentNativeFocusableElements;
- (id)_accessibilitySoftwareMimicKeyboard;
- (bool)_accessibilitySortCollectionViewLogically;
- (id)_accessibilitySortExplorerElements:(id)arg1;
- (long long)_accessibilitySortPriority;
- (id)_accessibilitySortPriorityContainer;
- (long long)_accessibilitySortPriorityWithReturningView:(id*)arg1;
- (id)_accessibilitySortedElementsWithin;
- (bool)_accessibilitySpeakThisCanBeHighlighted;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (bool)_accessibilitySpeakThisIgnoresAccessibilityElementStatus;
- (unsigned long long)_accessibilitySpeakThisMaximumNumberOfElements;
- (id)_accessibilitySpeakThisPreferredHighlightColor;
- (id)_accessibilitySpeakThisPreferredUnderlineColor;
- (bool)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
- (bool)_accessibilitySpeakThisShouldScrollTextRects;
- (id)_accessibilitySpeakThisString;
- (id)_accessibilitySpeakThisStringValue;
- (id)_accessibilityStatusBar;
- (id)_accessibilityString:(id)arg1 withSpeechHint:(id)arg2;
- (id)_accessibilityStringForLabelKeyValues:(id)arg1;
- (id /* block */)_accessibilityStyleChangeMatch;
- (id)_accessibilitySubviews;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViewAtIndexPath:(id)arg1;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilitySupportGesturesAttributes;
- (id)_accessibilitySupportedLanguages;
- (bool)_accessibilitySupportsActivateAction;
- (bool)_accessibilitySupportsContentSizeCategory:(id)arg1;
- (bool)_accessibilitySupportsDirectioOrbManipulation;
- (bool)_accessibilitySupportsFrameForRange;
- (bool)_accessibilitySupportsHandwriting;
- (bool)_accessibilitySupportsMediaAnalysis;
- (bool)_accessibilitySupportsMultipleCustomRotorTitles;
- (bool)_accessibilitySupportsPressedState;
- (bool)_accessibilitySupportsRangeForLineNumber;
- (bool)_accessibilitySupportsSemanticContext;
- (id)_accessibilitySwipeIsland;
- (id)_accessibilitySwipeIslandIdentifier;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (id)_accessibilityTabBarAncestor;
- (bool)_accessibilityTableCellUsesDetailTextAsValue;
- (id)_accessibilityTableViewCellContentSubviews;
- (id)_accessibilityTableViewCellWithRowIndex:(long long)arg1 column:(long long)arg2 tableView:(id)arg3;
- (id)_accessibilityTextChecker;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityTextCursorFrame;
- (id)_accessibilityTextFieldText;
- (id)_accessibilityTextForSubhierarchyIncludingHeaders:(bool)arg1 focusableItems:(bool)arg2 exclusions:(id)arg3;
- (id)_accessibilityTextInputElement;
- (id)_accessibilityTextInputElementRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityTextInputElementRangeAsNSRange;
- (id)_accessibilityTextMarkerForPosition:(long long)arg1;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityTextMarkerRangeForSelection;
- (bool)_accessibilityTextOperationAction:(id)arg1;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextRangeFromNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityTextRectsForRange:(id)arg1 singleTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 string:(id)arg2;
- (id)_accessibilityTextStylingCustomRotor:(long long)arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityTouchContainer;
- (bool)_accessibilityTouchContainerShouldOutputBraille;
- (id)_accessibilityTraitsAsHumanReadableStrings:(unsigned long long)arg1;
- (id)_accessibilityTraitsInspectorHumanReadable;
- (void)_accessibilityTraverseTreeWithLogger:(id)arg1 options:(id)arg2;
- (void)_accessibilityTraverseTreeWithLogger:(id)arg1 shouldStopAtRemoteElement:(bool)arg2 options:(id)arg3;
- (bool)_accessibilityTreatCollectionViewRowsAsScannerGroups;
- (id)_accessibilityTreeAsString;
- (id)_accessibilityTreeAsStringWithOptions:(id)arg1;
- (bool)_accessibilityTriggerDictationFromPath:(id)arg1;
- (bool)_accessibilityTryScrollWithSelector:(SEL)arg1 shouldSendScrollFailed:(bool)arg2;
- (id /* block */)_accessibilityUnderlineTextMatch;
- (id)_accessibilityUnignoredDescendant;
- (void)_accessibilityUnregister;
- (id)_accessibilityUpcomingRoadsForPoint:(struct CGPoint { double x1; double x2; })arg1 forAngle:(float)arg2;
- (void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg1;
- (void)_accessibilityUpdateFocusState:(id)arg1 forFocusedElement:(id)arg2;
- (bool)_accessibilityUpdatesOnActivationAfterDelay;
- (bool)_accessibilityUseContextlessPassthroughForDrag;
- (bool)_accessibilityUseWindowBoundsForOutOfBoundsChecking;
- (id)_accessibilityUserDefinedGuideElementHeaderText;
- (bool)_accessibilityUserDefinedIsGuideElement;
- (id)_accessibilityUserDefinedLinkedUIElements;
- (id)_accessibilityUserTestingActionIdentifiers;
- (id)_accessibilityUserTestingActions;
- (id)_accessibilityUserTestingChildren;
- (long long)_accessibilityUserTestingChildrenCount;
- (id)_accessibilityUserTestingChildrenWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityUserTestingElementAttributes;
- (id)_accessibilityUserTestingElementBaseType;
- (id)_accessibilityUserTestingElementType;
- (bool)_accessibilityUserTestingIsBackNavButton;
- (bool)_accessibilityUserTestingIsCancelButton;
- (bool)_accessibilityUserTestingIsContinuityButton;
- (bool)_accessibilityUserTestingIsDefaultButton;
- (bool)_accessibilityUserTestingIsDestructiveButton;
- (bool)_accessibilityUserTestingIsElementClassAcceptable;
- (bool)_accessibilityUserTestingIsPreferredButton;
- (bool)_accessibilityUserTestingIsRightNavButton;
- (id)_accessibilityUserTestingParent;
- (id)_accessibilityUserTestingSnapshot;
- (id)_accessibilityUserTestingSnapshotAncestorsWithAttributes:(id)arg1 maxDepth:(unsigned long long)arg2 maxChildren:(unsigned long long)arg3 maxArrayCount:(unsigned long long)arg4;
- (id)_accessibilityUserTestingSnapshotDescendantsWithAttributes:(id)arg1 maxDepth:(unsigned long long)arg2 maxChildren:(unsigned long long)arg3 maxArrayCount:(unsigned long long)arg4;
- (id)_accessibilityUserTestingSnapshotWithOptions:(id)arg1;
- (id)_accessibilityUserTestingSupplementaryViews:(bool)arg1;
- (id)_accessibilityUserTestingVisibleAncestor;
- (id)_accessibilityUserTestingVisibleCells;
- (id)_accessibilityUserTestingVisibleSections;
- (bool)_accessibilityUsesChildrenFramesForSorting;
- (bool)_accessibilityUsesScrollParentForOrdering;
- (bool)_accessibilityUsesSpecialKeyboardDismiss;
- (id)_accessibilityValueForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)_accessibilityVariantKeys;
- (long long)_accessibilityVerticalSizeClass;
- (double)_accessibilityViewAlpha;
- (id)_accessibilityViewAncestorIsKindOf:(Class)arg1;
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;
- (id)_accessibilityViewController;
- (bool)_accessibilityViewHierarchyHasNativeFocus;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_accessibilityVisibleContentInset;
- (id)_accessibilityVisibleElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityVisibleFrame;
- (double)_accessibilityVisibleItemDenominator;
- (id)_accessibilityVisibleItemInList;
- (id)_accessibilityVisibleOpaqueElements;
- (struct CGPoint { double x1; double x2; })_accessibilityVisiblePoint;
- (struct CGPoint { double x1; double x2; })_accessibilityVisiblePointHitTestingAnyElement:(bool)arg1;
- (bool)_accessibilityVisiblePointHonorsScreenBounds;
- (struct CGPoint { double x1; double x2; })_accessibilityVisibleScrollArea:(bool)arg1;
- (unsigned long long)_accessibilityVisionDetectionOptions;
- (bool)_accessibilityWantsOpaqueElementProviders;
- (void)_accessibilityWarmPrefersNonAttributedLabelValueHintCache;
- (id)_accessibilityWatchAutoSpeakElements;
- (id)_accessibilityWebAreaURL;
- (bool)_accessibilityWebSearchResultsActive;
- (bool)_accessibilityWebViewIsLoading;
- (id)_accessibilityWindow;
- (bool)_accessibilityWindowVisible;
- (double)_accessibilityZoomScale;
- (id)_accessibiltyAvailableKeyplanes;
- (void)_addPublicRotorsToArray:(id)arg1 forElement:(id)arg2;
- (bool)_allowCustomActionHintSpeakOverride;
- (bool)_animateScrollViewWithMachPort:(unsigned int)arg1 amount:(double)arg2;
- (id)_axAncestorTypes;
- (id)_axCachedHasTabBarAncestor;
- (id)_axDebugTraits;
- (id)_axElementsDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_axFrameForBoundsCheck:(bool)arg1;
- (id)_axOutermostScrollParent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_axScreenBoundsForBoundsCheck;
- (void)_axSetCachedHasTabBarAncestor:(id)arg1;
- (id)_axSuperviews;
- (void)_cleanupRotorCache;
- (id)_getAccessibilityAttributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_handleRotatingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (void)_handleSupplementaryViewIfNeededWithOrderedChildrenContainer:(id*)arg1 childOfOrderedChildrenContainer:(id*)arg2 headerIndex:(unsigned long long*)arg3 footerIndex:(unsigned long long*)arg4;
- (bool)_isAccessibilityExplorerElement;
- (id)_privateAccessibilityCustomActions;
- (id)_retrieveCustomActions;
- (void)_setAccessibilityActivateBlock:(id /* block */)arg1;
- (void)_setAccessibilityActivationPointBlock:(id /* block */)arg1;
- (void)_setAccessibilityElementsHiddenBlock:(id /* block */)arg1;
- (void)_setAccessibilityFauxCollectionViewCellsDisabled:(bool)arg1;
- (void)_setAccessibilityFrameBlock:(id /* block */)arg1;
- (void)_setAccessibilityGuideElementHeaderText:(id)arg1;
- (void)_setAccessibilityGuideElementHeaderTextBlock:(id /* block */)arg1;
- (void)_setAccessibilityHeaderElementsBlock:(id /* block */)arg1;
- (void)_setAccessibilityHintBlock:(id /* block */)arg1;
- (void)_setAccessibilityIdentifierBlock:(id /* block */)arg1;
- (void)_setAccessibilityIsMainWindow:(bool)arg1;
- (void)_setAccessibilityIsNotFirstElement:(bool)arg1;
- (void)_setAccessibilityLabelBlock:(id /* block */)arg1;
- (void)_setAccessibilityLanguageBlock:(id /* block */)arg1;
- (void)_setAccessibilityLinkedUIElements:(id)arg1;
- (void)_setAccessibilityLinkedUIElementsBlock:(id /* block */)arg1;
- (void)_setAccessibilityNavigationStyleBlock:(id /* block */)arg1;
- (void)_setAccessibilityPathBlock:(id /* block */)arg1;
- (void)_setAccessibilityPhotoDescription:(id)arg1;
- (void)_setAccessibilityServesAsFirstElement:(bool)arg1;
- (void)_setAccessibilityTableCellUsesDetailTextAsValue:(bool)arg1;
- (void)_setAccessibilityTraitsBlock:(id /* block */)arg1;
- (void)_setAccessibilityUpdatesOnActivationAfterDelay:(bool)arg1;
- (void)_setAccessibilityValueBlock:(id /* block */)arg1;
- (void)_setAccessibilityViewIsModalBlock:(id /* block */)arg1;
- (void)_setAccessibilityWindowVisible:(bool)arg1;
- (void)_setIsAccessibilityElementBlock:(id /* block */)arg1;
- (void)_setShouldGroupAccessibilityChildrenBlock:(id /* block */)arg1;
- (unsigned long long)accessibilityARIAColumnCount;
- (unsigned long long)accessibilityARIAColumnIndex;
- (unsigned long long)accessibilityARIARowCount;
- (unsigned long long)accessibilityARIARowIndex;
- (bool)accessibilityActivate;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityAssistiveTechnologyFocusedIdentifiers;
- (id)accessibilityAttributeValue:(long long)arg1;
- (id)accessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;
- (unsigned long long)accessibilityBlockquoteLevel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityBoundsForTextMarkers:(id)arg1;
- (unsigned long long)accessibilityColumnCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityColumnRange;
- (long long)accessibilityCompareGeometry:(id)arg1;
- (id)accessibilityContainerElements;
- (id)accessibilityContentForLineNumber:(long long)arg1;
- (id)accessibilityDataTableCellElementForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)accessibilityDatetimeValue;
- (void)accessibilityDecreaseTrackingDetail;
- (void)accessibilityDecrement;
- (bool)accessibilityEditOperationAction:(id)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityElementForRow:(unsigned long long)arg1 andColumn:(unsigned long long)arg2;
- (bool)accessibilityElementIsFocused;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityElementRect;
- (void)accessibilityEnumerateAncestorsUsingBlock:(id /* block */)arg1;
- (void)accessibilityEnumerateContainerElementsUsingBlock:(id /* block */)arg1;
- (void)accessibilityEnumerateContainerElementsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)accessibilityExpandMathEquation:(id)arg1;
- (id)accessibilityExpandedTextValue;
- (id)accessibilityFlowToElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameForLineNumber:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrameForScrolling;
- (id)accessibilityHeaderElements;
- (id)accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (void)accessibilityIncreaseTrackingDetail;
- (void)accessibilityIncrement;
- (id)accessibilityInvalidStatus;
- (bool)accessibilityIsAttachmentElement;
- (bool)accessibilityIsComboBox;
- (bool)accessibilityIsWindow;
- (id)accessibilityLabelForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityLinkedElement;
- (id)accessibilityMathEquation;
- (id)accessibilityMathMLSource;
- (id)accessibilityMenuActions;
- (id)accessibilityNextTextNavigationElement;
- (id)accessibilityPageContent;
- (bool)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (bool)accessibilityPerformCustomAction:(long long)arg1;
- (id)accessibilityPlaceholderValue;
- (void)accessibilityPostNotification:(unsigned int)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (id)accessibilityPreviousTextNavigationElement;
- (bool)accessibilityRequired;
- (unsigned long long)accessibilityRowCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityRowRange;
- (bool)accessibilityScrollDownPage;
- (bool)accessibilityScrollDownPageSupported;
- (bool)accessibilityScrollLeftPage;
- (bool)accessibilityScrollLeftPageSupported;
- (bool)accessibilityScrollRightPage;
- (bool)accessibilityScrollRightPageSupported;
- (bool)accessibilityScrollToTopSupported;
- (bool)accessibilityScrollUpPage;
- (bool)accessibilityScrollUpPageSupported;
- (id)accessibilitySecondaryLabel;
- (void)accessibilitySetUserDefinedOpaqueElementScrollsContentIntoView:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(long long)arg2;
- (bool)accessibilityShouldEnumerateContainerElementsArrayDirectly;
- (id)accessibilitySortDirection;
- (id)accessibilitySpeechHint;
- (bool)accessibilityStartStopToggle;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (id)accessibilityTitleElement;
- (id)accessibilityURL;
- (id)accessibilityUserDefinedIsMainWindow;
- (id)accessibilityUserDefinedNotFirstElement;
- (id)accessibilityUserDefinedOpaqueElementScrollsContentIntoView;
- (id)accessibilityUserDefinedServesAsFirstElement;
- (id)accessibilityUserDefinedSize;
- (id)accessibilityUserDefinedWindowVisible;
- (id)accessibilityViewWithIdentifier:(id)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)axContainerTypeFromUIKitContainerType:(long long)arg1;
- (id)dragDescriptorMatchingDictionary:(id)arg1;
- (int (*)impOrNullForSelector:(SEL)arg1;
- (bool)isAccessibilityOpaqueElementProvider;
- (id)isAccessibilityUserDefinedScrollAncestor;
- (id)isAccessibilityUserDefinedWindow;
- (void)setAccessibilitySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsAccessibilityOpaqueElementProvider:(bool)arg1;
- (void)setIsAccessibilityScrollAncestor:(bool)arg1;
- (void)setIsAccessibilityWindow:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

- (id)_web_description;
- (void)releaseOnMainThread;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_webkit_invokeOnMainThread;
+ (bool)isKeyExcludedFromWebScript:(const char *)arg1;
+ (bool)isSelectorExcludedFromWebScript:(SEL)arg1;

- (id)_webkit_invokeOnMainThread;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (id)_ICSStringWithOptions:(unsigned long long)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)blockingMainThreadProxy;
- (id)delayedProxy:(double)arg1;
- (id)mainThreadProxy;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (id)responderChainProxy:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (bool)tsu_object:(id)arg1 isEqualToObject:(id)arg2;
+ (bool)tsu_overridesClassSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
+ (bool)tsu_overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;

- (void)sfu_appendJsonStringToString:(id)arg1;
- (void)tp_performSelector:(SEL)arg1 withIndexesFromSet:(id)arg2;
- (id)tsu_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)tsu_performSelector:(SEL)arg1 withValue:(id)arg2;
- (void)tsu_removeObserverForToken:(id)arg1;
- (void)tsu_runBlock;

// Image: /usr/lib/libprequelite.dylib

- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationController : NSObject {
    bool  _active;
    long long  _animationMode;
    long long  _cachingMode;
    NTKComplication * _complication;
    long long  _complicationFamily;
    NSMutableArray * _displayWrappers;
    NSMapTable * _displayWrappersToDataMode;
    long long  _effectiveFaceDataMode;
    bool  _faceZooming;
    bool  _hasGoneLive;
    id /* block */  _invalidationHandler;
    <NTKComplicationDisplay> * _legacyDisplayDEPRECATED;
    NSDate * _pauseDate;
    bool  _showsLockedUI;
    long long  _updatingMode;
}

@property (nonatomic, readonly) long long animationMode;
@property (nonatomic, readonly) long long cachingMode;
@property (nonatomic, readonly) NTKComplication *complication;
@property (nonatomic, readonly) long long complicationFamily;
@property (nonatomic, readonly) long long effectiveFaceDataMode;
@property (getter=isFaceZooming, nonatomic) bool faceZooming;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) <NTKComplicationDisplay> *legacyDisplay;
@property (nonatomic, retain) NSDate *pauseDate;
@property (nonatomic) bool showsLockedUI;
@property (nonatomic, readonly) long long updatingMode;

+ (id)DEPRECATEDControllerForComplication:(id)arg1 withLegacyDisplay:(id)arg2;
+ (bool)_acceptsComplicationType:(unsigned long long)arg1;
+ (bool)_acceptsComplicationType:(unsigned long long)arg1 family:(long long)arg2;
+ (bool)_isLegacy;
+ (Class)controllerClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2;
+ (id)controllerForComplication:(id)arg1 withRequestedFamily:(long long)arg2 face:(id)arg3 slot:(id)arg4;

- (void).cxx_destruct;
- (void)DEPRECATEDInvalidate;
- (void)_activate;
- (void)_applyAnimationMode;
- (void)_applyCachingMode;
- (void)_applyUpdatingMode;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (id)_initWithComplication:(id)arg1 legacyDisplay:(id)arg2;
- (void)_openApp:(id)arg1 withURL:(id)arg2 result:(id /* block */)arg3;
- (void)_openAppWithURL:(id)arg1;
- (void)_updateEffectiveAnimationMode;
- (void)_updateEffectiveCachingMode;
- (void)_updateEffectiveFaceDataMode;
- (void)_updateEffectiveUpdatingMode;
- (void)_updateInternalModes:(bool)arg1;
- (void)_updateIsComplicationActive:(bool)arg1;
- (void)activate;
- (void)addDisplayWrapper:(id)arg1;
- (long long)animationMode;
- (long long)cachingMode;
- (id)complication;
- (id)complicationApplicationIdentifier;
- (long long)complicationFamily;
- (void)deactivate;
- (void)dealloc;
- (void)didTouchDown;
- (void)didTouchUpInside;
- (long long)effectiveFaceDataMode;
- (void)enumerateDisplayWrappersWithBlock:(id /* block */)arg1;
- (void)handleFaceDefaultsChanged;
- (bool)hasTapAction;
- (id)initWithComplication:(id)arg1 family:(long long)arg2;
- (id /* block */)invalidationHandler;
- (bool)isFaceZooming;
- (id)legacyDisplay;
- (id)pauseDate;
- (void)performBackgroundDataRefresh;
- (void)performTapAction;
- (void)removeDisplayWrapper:(id)arg1;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setFaceZooming:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPauseDate:(id)arg1;
- (void)setShowsLockedUI:(bool)arg1;
- (bool)showsLockedUI;
- (long long)updatingMode;
- (bool)wantsLegacyDisplay;

@end

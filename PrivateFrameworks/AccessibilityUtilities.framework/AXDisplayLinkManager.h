/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDisplayLinkManager : NSObject {
    NSMutableSet * _activeTargetActions;
    bool  _handlingDisplayRefresh;
    bool  _hasUpdatedTargetActions;
    CADisplayLink * _storedDisplayLink;
    NSMutableSet * _updatedTargetActions;
    unsigned long long  _warmUpModeRequirementsCount;
}

@property (nonatomic, retain) NSMutableSet *activeTargetActions;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, readonly) double duration;
@property (getter=isHandlingDisplayRefresh, nonatomic) bool handlingDisplayRefresh;
@property (nonatomic) bool hasUpdatedTargetActions;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (nonatomic, retain) CADisplayLink *storedDisplayLink;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, retain) NSMutableSet *updatedTargetActions;
@property (getter=isWarmUpModeEnabled, nonatomic, readonly) bool warmUpModeEnabled;
@property (nonatomic) unsigned long long warmUpModeRequirementsCount;

+ (void)_releaseCurrentDisplayLinkManager;
+ (id)currentDisplayLinkManager;

- (void).cxx_destruct;
- (void)_didAddFirstTargetAction;
- (void)_didRemoveLastTargetAction;
- (void)_displayDidRefresh:(id)arg1;
- (id)_prepareUpdatedTargetActionsForModification;
- (id)activeTargetActions;
- (void)addTarget:(id)arg1 selector:(SEL)arg2;
- (void)beginRequiringWarmUpMode;
- (id)displayLink;
- (double)duration;
- (void)endRequiringWarmUpMode;
- (bool)hasUpdatedTargetActions;
- (id)init;
- (bool)isHandlingDisplayRefresh;
- (bool)isPaused;
- (bool)isWarmUpModeEnabled;
- (void)removeTarget:(id)arg1 selector:(SEL)arg2;
- (void)setActiveTargetActions:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setHandlingDisplayRefresh:(bool)arg1;
- (void)setHasUpdatedTargetActions:(bool)arg1;
- (void)setStoredDisplayLink:(id)arg1;
- (void)setUpdatedTargetActions:(id)arg1;
- (void)setWarmUpModeRequirementsCount:(unsigned long long)arg1;
- (id)storedDisplayLink;
- (double)timestamp;
- (id)updatedTargetActions;
- (unsigned long long)warmUpModeRequirementsCount;

@end

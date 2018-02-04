/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventProcessor : NSObject {
    unsigned long long  _HIDEventFilterMask;
    id /* block */  _HIDEventHandler;
    NSThread * _HIDEventReceiveThread;
    NSString * _HIDEventTapIdentifier;
    int  _HIDEventTapPriority;
    bool  _handlingHIDEvents;
    bool  _handlingSystemEvents;
    NSMutableArray * _hidActualEventTapEnabledReasons;
    bool  _ignoreAllSystemEvents;
    bool  _shouldNotifyUserEventOccurred;
    bool  _shouldRunHIDReceiveThreadRunloop;
    NSMutableArray * _systemActualEventTapEnabledReasons;
    id /* block */  _systemEventHandler;
    NSString * _systemEventTapIdentifier;
    int  _systemEventTapPriority;
}

@property (nonatomic) unsigned long long HIDEventFilterMask;
@property (nonatomic, copy) id /* block */ HIDEventHandler;
@property (nonatomic, retain) NSThread *HIDEventReceiveThread;
@property (nonatomic, retain) NSString *HIDEventTapIdentifier;
@property (nonatomic) int HIDEventTapPriority;
@property (getter=isHandlingHIDEvents, nonatomic) bool handlingHIDEvents;
@property (getter=isHandlingSystemEvents, nonatomic) bool handlingSystemEvents;
@property (nonatomic, retain) NSMutableArray *hidActualEventTapEnabledReasons;
@property (nonatomic, readonly) NSArray *hidEventTapEnabledReasons;
@property (nonatomic) bool ignoreAllSystemEvents;
@property (nonatomic) bool shouldNotifyUserEventOccurred;
@property (nonatomic, retain) NSMutableArray *systemActualEventTapEnabledReasons;
@property (nonatomic, copy) id /* block */ systemEventHandler;
@property (nonatomic, readonly) NSArray *systemEventTapEnabledReasons;
@property (nonatomic, retain) NSString *systemEventTapIdentifier;
@property (nonatomic) int systemEventTapPriority;

- (void).cxx_destruct;
- (unsigned long long)HIDEventFilterMask;
- (id /* block */)HIDEventHandler;
- (id)HIDEventReceiveThread;
- (id)HIDEventTapIdentifier;
- (int)HIDEventTapPriority;
- (void)_installHIDEventFilter;
- (void)_installSystemEventFilter;
- (void)_runHIDEventReceiveThread;
- (void)_uninstallHIDEventFilter;
- (void)_uninstallSystemEventFilter;
- (void)beginHandlingHIDEventsForReason:(id)arg1;
- (void)beginHandlingSystemEventsForReason:(id)arg1;
- (void)endHandlingHIDEventsForReason:(id)arg1;
- (void)endHandlingSystemEventsForReason:(id)arg1;
- (id)hidActualEventTapEnabledReasons;
- (id)hidEventTapEnabledReasons;
- (bool)ignoreAllSystemEvents;
- (id)init;
- (id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4;
- (bool)isHandlingHIDEvents;
- (bool)isHandlingSystemEvents;
- (void)raiseHIDEventTapPriorityToMaximum;
- (void)raiseSystemEventTapPriorityToMaximum;
- (void)restoreHIDEventTapPriorityToDefault;
- (void)restoreSystemEventTapPriorityToDefault;
- (void)setHIDEventFilterMask:(unsigned long long)arg1;
- (void)setHIDEventHandler:(id /* block */)arg1;
- (void)setHIDEventReceiveThread:(id)arg1;
- (void)setHIDEventTapIdentifier:(id)arg1;
- (void)setHIDEventTapPriority:(int)arg1;
- (void)setHandlingHIDEvents:(bool)arg1;
- (void)setHandlingSystemEvents:(bool)arg1;
- (void)setHidActualEventTapEnabledReasons:(id)arg1;
- (void)setIgnoreAllSystemEvents:(bool)arg1;
- (void)setShouldNotifyUserEventOccurred:(bool)arg1;
- (void)setSystemActualEventTapEnabledReasons:(id)arg1;
- (void)setSystemEventHandler:(id /* block */)arg1;
- (void)setSystemEventTapIdentifier:(id)arg1;
- (void)setSystemEventTapPriority:(int)arg1;
- (bool)shouldNotifyUserEventOccurred;
- (id)systemActualEventTapEnabledReasons;
- (id /* block */)systemEventHandler;
- (id)systemEventTapEnabledReasons;
- (id)systemEventTapIdentifier;
- (int)systemEventTapPriority;

@end

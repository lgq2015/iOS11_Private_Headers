/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFSoundBehaviorOverridesMonitor : NSObject {
    int  _condition;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) MFFuture *behaviorOverrideTypes;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activeOverrideTypesChanged:(id)arg1;
- (void)_beginGeneratingActiveOverrideTypeChanges;
- (id)behaviorOverrideTypes;
- (id)init;

@end

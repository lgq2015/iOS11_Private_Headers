/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityInformationLoader : NSObject {
    NSTimer * _coalesceTimer;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_coalesceTimerFired:(id)arg1;
- (id)_init;
- (void)_loadAccessibilityInformationOnMainThread:(bool)arg1;
- (void)_setNeedsLoadAccessibilityInformationOnMainThread;
- (void)loadAccessibilityInformation;
- (void)setNeedsLoadAccessibilityInformation;

@end

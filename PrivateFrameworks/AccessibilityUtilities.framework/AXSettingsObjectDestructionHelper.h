/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSettingsObjectDestructionHelper : NSObject {
    void * _listenerAddress;
    NSMutableArray * _selectorKeys;
}

- (void).cxx_destruct;
- (void)addSelectorKey:(SEL)arg1;
- (void)dealloc;
- (id)initWithListenerAddress:(void*)arg1;

@end

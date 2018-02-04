/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKKeyboardMonitor : NSObject {
    NSMutableArray * _completionBlocks;
    <TSKKeyboardObserver> * _exclusiveKeyboardObserver;
    double  _keyboardAnimationDuration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    bool  _keyboardIsAnimatingInOrDocking;
    bool  _keyboardIsAnimatingOutOrUndocking;
    bool  _keyboardIsVisibleAndDocked;
    struct __CFArray { } * _keyboardObservers;
    bool  _lastHideWasFake;
    double  _onScreenHeight;
    UIWindow * _rootWindow;
    bool  _suppressDidHide;
    bool  _weAreFakingAHideEvent;
}

@property (readonly) double keyboardAnimationDuration;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (readonly) bool keyboardIsAnimating;
@property (readonly) bool keyboardIsAnimatingInOrDocking;
@property (readonly) bool keyboardIsAnimatingOutOrUndocking;
@property (readonly) bool keyboardIsVisibleAndDocked;
@property (readonly) double onScreenHeight;
@property (nonatomic) UIWindow *rootWindow;

+ (id)_singletonAlloc;
+ (void)addKeyboardObserver:(id)arg1;
+ (void)afterKeyboardAnimationPerformBlock:(id /* block */)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)keyboardIsAnimating;
+ (bool)keyboardIsAnimatingInOrDocking;
+ (bool)keyboardIsAnimatingOutOrUndocking;
+ (bool)keyboardIsVisibleAndDocked;
+ (void)removeKeyboardObserver:(id)arg1;
+ (void)setKeyboardHiddenByModalObserver:(id)arg1;
+ (void)setModalKeyboardObserver:(id)arg1;
+ (id)sharedKeyboardMonitor;

- (void)addKeyboardObserver:(id)arg1;
- (void)afterKeyboardAnimationPerformBlock:(id /* block */)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (double)keyboardAnimationDuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrame;
- (double)keyboardHeightInView:(id)arg1;
- (bool)keyboardIsAnimating;
- (bool)keyboardIsAnimatingInOrDocking;
- (bool)keyboardIsAnimatingOutOrUndocking;
- (bool)keyboardIsVisibleAndDocked;
- (double)onScreenHeight;
- (void)p_KeyboardDidChangeFrame:(id)arg1;
- (void)p_KeyboardWillChangeFrame:(id)arg1;
- (void)p_enumerateObserversUsingBlock:(id /* block */)arg1;
- (void)p_installKeyboardNotifications;
- (void)p_keyboardDidHideOrUndock:(id)arg1;
- (void)p_keyboardDidShowOrDock:(id)arg1;
- (id)p_keyboardFrameView;
- (void)p_keyboardWillHideOrUndock:(id)arg1;
- (void)p_keyboardWillShowOrDock:(id)arg1;
- (void)p_performAnimationCompletionBlocksWithVisible:(bool)arg1;
- (void)p_removeKeyboardNotifications;
- (void)p_updateKeyboardInfoFromNotification:(id)arg1;
- (oneway void)release;
- (void)removeKeyboardObserver:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (id)rootWindow;
- (void)setKeyboardHiddenByModalObserver:(id)arg1;
- (void)setModalKeyboardObserver:(id)arg1;
- (void)setRootWindow:(id)arg1;

@end

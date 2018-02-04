/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface BLModalPresenter : UIWindow <UIKeyInput> {
    NSMutableArray * _controllers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboard;
    bool  _keyboardVisible;
    long long  _lockCount;
    BLModalPresenterRootViewController * _rootViewController;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;

+ (id)presenter;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (void)configureForOffscreen:(id)arg1 orientation:(long long)arg2;
- (void)configureForOncreen:(id)arg1 orientation:(long long)arg2;
- (void)dealloc;
- (void)deleteBackward;
- (struct CGSize { double x1; double x2; })formSheetSizeForController:(id)arg1 withOrientation:(long long)arg2;
- (bool)hasText;
- (id)hidden;
- (void)hideController:(id)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)init;
- (void)insertText:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (bool)keyboardVisible;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutForOrientation:(long long)arg1;
- (void)lockKeyboard;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)orientationDidChange:(id)arg1;
- (void)orientationWillChange:(id)arg1;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)unlockKeyboard;

@end

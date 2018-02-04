/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNQuickFaceTimeAction : CNQuickPropertyAction {
    bool  _audioOnly;
}

@property (nonatomic) bool audioOnly;

+ (id)defaultFaceTimeAudioTitle;
+ (id)defaultFaceTimeTitle;

- (id)_coreDuetInteractionMechanisms;
- (id)_coreDuetValue;
- (bool)audioOnly;
- (id)category;
- (id)identifier;
- (void)performWithCompletionBlock:(id /* block */)arg1;
- (unsigned long long)score;
- (void)setAudioOnly:(bool)arg1;
- (id)subtitleForContext:(long long)arg1;
- (id)titleForContext:(long long)arg1;

@end

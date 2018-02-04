/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNQuickAction : NSObject {
    bool  _cached;
    NSString * _category;
    bool  _dismissesWithAnimation;
    bool  _enabled;
    NSString * _identifier;
    UIImage * _image;
    UIColor * _imageTintColor;
    bool  _isLongPress;
    CNQuickActionsManager * _manager;
    id /* block */  _performBlock;
    CNContactStyle * _previousStyle;
    unsigned long long  _score;
    UIView * _sourceView;
    NSString * _title;
    bool  _useDuetIfAvailable;
}

@property (getter=isBackAction, nonatomic) bool backAction;
@property (nonatomic) bool cached;
@property (nonatomic, retain) NSString *category;
@property (nonatomic) bool dismissesWithAnimation;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) NSString *globalIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *imageTintColor;
@property (nonatomic) bool isLongPress;
@property (nonatomic) CNQuickActionsManager *manager;
@property (nonatomic, copy) id /* block */ performBlock;
@property (nonatomic, retain) CNContactStyle *previousStyle;
@property (nonatomic) unsigned long long score;
@property (nonatomic) UIView *sourceView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool useDuetIfAvailable;

+ (id)actionWithTitle:(id)arg1 image:(id)arg2 block:(id /* block */)arg3;
+ (id)defaultTitleForActionInCategory:(id)arg1 context:(long long)arg2;
+ (id)possibleTitlesForActionsInCategories:(id)arg1 context:(long long)arg2;
+ (bool)reallyPerform;

- (void).cxx_destruct;
- (id)_coreDuetInteractionMechanisms;
- (id)_coreDuetValue;
- (bool)cached;
- (void)cancel;
- (id)category;
- (id)coloredImage;
- (id)defaultTitleForContext:(long long)arg1;
- (id)description;
- (bool)dismissesWithAnimation;
- (bool)enabled;
- (id)globalIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)imageForContext:(long long)arg1;
- (id)imageTintColor;
- (id)init;
- (bool)isBackAction;
- (bool)isEqual:(id)arg1;
- (bool)isLongPress;
- (id)manager;
- (bool)matchesDuetInteraction:(id)arg1;
- (void)perform;
- (id /* block */)performBlock;
- (void)performWithCompletionBlock:(id /* block */)arg1;
- (id)previousStyle;
- (unsigned long long)score;
- (void)setBackAction:(bool)arg1;
- (void)setCached:(bool)arg1;
- (void)setCategory:(id)arg1;
- (void)setDismissesWithAnimation:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageTintColor:(id)arg1;
- (void)setIsLongPress:(bool)arg1;
- (void)setManager:(id)arg1;
- (void)setPerformBlock:(id /* block */)arg1;
- (void)setPreviousStyle:(id)arg1;
- (void)setScore:(unsigned long long)arg1;
- (void)setSourceView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseDuetIfAvailable:(bool)arg1;
- (id)sourceView;
- (id)subtitleForContext:(long long)arg1;
- (id)title;
- (id)titleForContext:(long long)arg1;
- (bool)useDuetIfAvailable;
- (id)userActionType;

@end

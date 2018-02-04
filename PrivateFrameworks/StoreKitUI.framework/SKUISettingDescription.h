/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISettingDescription : NSObject {
    bool  _editsValid;
    SKUISettingsGroupDescription * _parent;
    SKUIViewElement * _viewElement;
}

@property (nonatomic, readonly) bool allowsSelection;
@property (nonatomic, readonly) bool editsValid;
@property (nonatomic) SKUISettingsGroupDescription *parent;
@property (nonatomic, retain) SKUIViewElement *viewElement;

+ (Class)_viewClassForSettingDescription:(id)arg1;
+ (bool)allowsEdit;
+ (Class)viewClassForSettingDescription:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteSetting;
- (void)_dismissViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_dispatchUpdate:(id)arg1;
- (void)_hideSetting;
- (bool)_initiallyHidden;
- (bool)_isHidden;
- (void)_presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_reloadSetting;
- (void)_revealSetting;
- (void)_setEditsValid:(bool)arg1;
- (bool)allowsSelection;
- (void)beginEditing;
- (void)cancelEdits;
- (bool)commitEdits:(id /* block */)arg1;
- (void)discardEdits;
- (bool)editsValid;
- (void)handleSelectionOnCompletion:(id /* block */)arg1;
- (id)indexPath;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (id)parent;
- (void)reloadData;
- (void)reloadWithViewElement:(id)arg1 parent:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setViewElement:(id)arg1;
- (id)viewElement;

@end

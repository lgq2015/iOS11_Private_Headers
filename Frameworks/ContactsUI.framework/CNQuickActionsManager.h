/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNQuickActionsManager : NSObject <CNQuickContactActionDelegate> {
    NSOrderedSet * _actions;
    NSMutableDictionary * _actionsByCategories;
    bool  _bypassActionValidation;
    NSArray * _categories;
    NSArray * _contacts;
    <CNQuickActionsManagerDelegate> * _delegate;
    unsigned long long  _desiredNumberOfActions;
    CNQuickFaceTimeAction * _faceTimeAudioAction;
    CNQuickFaceTimeAction * _faceTimeVideoAction;
    NSDictionary * _groups;
    NSMutableSet * _requests;
    NSArray * _subManagers;
    NSMutableArray * _updateBlocks;
    CNQuickActionsUsageManager * _usageManager;
    bool  _useDuetIfAvailable;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic) bool bypassActionValidation;
@property (nonatomic, copy) NSArray *categories;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNQuickActionsManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long desiredNumberOfActions;
@property (nonatomic, retain) CNQuickFaceTimeAction *faceTimeAudioAction;
@property (nonatomic, retain) CNQuickFaceTimeAction *faceTimeVideoAction;
@property (nonatomic, retain) NSDictionary *groups;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool sortsWithDuet;
@property (nonatomic, retain) NSArray *subManagers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *updateBlocks;
@property (nonatomic, retain) CNQuickActionsUsageManager *usageManager;
@property (nonatomic) bool useDuetIfAvailable;

+ (id)actionsManagerForContacts:(id)arg1;
+ (id)defaultCategories;
+ (id)descriptorForRequiredKeys;
+ (bool)hasActionsForContact:(id)arg1;

- (void).cxx_destruct;
- (void)_actionsUpdated;
- (void)_addAction:(id)arg1;
- (id)_addActionForPropertyItem:(id)arg1 category:(id)arg2 propertyActionClass:(Class)arg3;
- (void)_createGroupsForPropertyKeys:(id)arg1;
- (id)_expandedActionsFromOrderedActionsByCategories:(id)arg1 totalNumberOfActions:(unsigned long long)arg2;
- (id)_groupedActionsFromOrderedActionsByCategories:(id)arg1;
- (id)_hierarchicalActionsForCategory:(id)arg1 fromActions:(id)arg2 askDelegate:(bool)arg3;
- (id)_hybridActionsFromOrderedActionsByCategories:(id)arg1 totalNumberOfActions:(unsigned long long)arg2;
- (id)_ignoredLabels;
- (void)_openURL:(id)arg1;
- (id)_orderedLabels;
- (id)_propertyItemsForKey:(id)arg1;
- (bool)_shouldGroupActionsInCategory:(id)arg1;
- (void)_updateActionsForPropertyItems:(id)arg1 category:(id)arg2 propertyActionClass:(Class)arg3;
- (void)_updateIDSActionsForPropertyItems:(id)arg1 category:(id)arg2 serviceName:(id)arg3 propertyActionClass:(Class)arg4;
- (void)_updateMultiContactActions;
- (void)_updateSingleContactActions;
- (void)actionPerformed:(id)arg1;
- (id)actions;
- (bool)bypassActionValidation;
- (id)categories;
- (id)contact;
- (void)contactAction:(id)arg1 presentViewController:(id)arg2;
- (void)contactActionDidUpdate:(id)arg1;
- (id)contacts;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)desiredNumberOfActions;
- (id)faceTimeAudioAction;
- (id)faceTimeVideoAction;
- (id)groups;
- (id)initWithContacts:(id)arg1;
- (id)quickActions;
- (void)refreshActions;
- (void)refreshActionsAndForceSendUpdate:(bool)arg1;
- (void)setBypassActionValidation:(bool)arg1;
- (void)setCategories:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredNumberOfActions:(unsigned long long)arg1;
- (void)setFaceTimeAudioAction:(id)arg1;
- (void)setFaceTimeVideoAction:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setSortsWithDuet:(bool)arg1;
- (void)setSubManagers:(id)arg1;
- (void)setUpdateBlocks:(id)arg1;
- (void)setUsageManager:(id)arg1;
- (void)setUseDuetIfAvailable:(bool)arg1;
- (bool)sortsWithDuet;
- (void)stopUpdatingActions;
- (id)subManagers;
- (void)updateActionsWithBlock:(id /* block */)arg1;
- (id)updateBlocks;
- (id)usageManager;
- (bool)useDuetIfAvailable;

@end

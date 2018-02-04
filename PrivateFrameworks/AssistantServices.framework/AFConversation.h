/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFConversation : NSObject {
    NSMutableDictionary * _additionalInterpretationsForRefId;
    <AFConversationDelegate> * _delegate;
    NSUUID * _identifier;
    NSString * _languageCode;
    <AFConversationStorable> * _lastRestoredItem;
    AFTreeNode * _rootNode;
    bool  _synchronizedWithServer;
    NSMutableDictionary * _updatedUserUtteranceForRefId;
}

@property (nonatomic) <AFConversationDelegate> *delegate;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (setter=_setLastRestoredItem:, nonatomic, retain) <AFConversationStorable> *lastRestoredItem;
@property (getter=_rootNode, setter=_setRootNode:, nonatomic, retain) AFTreeNode *rootNode;
@property (getter=isSynchronizedWithServer, nonatomic) bool synchronizedWithServer;

- (void).cxx_destruct;
- (void)_addItemsForAceObjects:(id)arg1 type:(long long)arg2 aceCommandIdentifier:(id)arg3 dialogPhase:(id)arg4 asChildrenOfItemWithIdentifier:(id)arg5;
- (void)_changePresentationStateForNodes:(id)arg1;
- (id)_childOfNode:(id)arg1 withItemWhichCanBeUpdatedWithAceObject:(id)arg2 inDialogPhase:(id)arg3;
- (void)_didChangePresentationStateForItemAtIndexPaths:(id)arg1;
- (void)_enumerateItemsUsingBlock:(id /* block */)arg1;
- (id)_indexPathForItemWithIdentifier:(id)arg1 ignoreNonExistent:(bool)arg2;
- (id)_indexPathsForAddingItemsWithCount:(long long)arg1 asChildrenOfItemWithIdentifier:(id)arg2;
- (id)_itemAtIndexPath:(id)arg1;
- (id)_nodeAtIndexPath:(id)arg1;
- (bool)_nodeContainsProvisionalItems:(id)arg1;
- (void)_processInsertions:(id)arg1 inDialogPhase:(id)arg2;
- (void)_removeNodes:(id)arg1;
- (id)_rootNode;
- (void)_setLastRestoredItem:(id)arg1;
- (void)_setRootNode:(id)arg1;
- (id)aceCommandIdentifierForItemAtIndexPath:(id)arg1;
- (id)aceObjectForItemAtIndexPath:(id)arg1;
- (void)addAdditionalSpeechInterpretation:(id)arg1 refId:(id)arg2;
- (void)addItemForMusicStartSessionCommand:(id)arg1;
- (void)addItemForPartialResultCommand:(id)arg1;
- (void)addItemForSpeechRecognizedCommand:(id)arg1;
- (void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemWithIdentifier:(id)arg4;
- (void)addItemsForAceViews:(id)arg1 withDialogPhase:(id)arg2 asChildrenOfItemWithIdentifier:(id)arg3;
- (void)addItemsForAddViewsCommand:(id)arg1;
- (void)addItemsForShowHelpCommand:(id)arg1;
- (void)addRecognitionUpdateWithPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;
- (void)addSelectionResponse:(id)arg1;
- (id)additionalSpeechInterpretationsForRefId:(id)arg1;
- (void)cancelItemWithIdentifier:(id)arg1;
- (bool)containsItemForAceViewWithIdentifier:(id)arg1;
- (bool)containsItemWithIdentifier:(id)arg1;
- (id)delegate;
- (id)dialogPhaseForItemAtIndexPath:(id)arg1;
- (bool)hasItemWithIdentifier:(id)arg1;
- (id)identifier;
- (id)identifierOfItemAtIndexPath:(id)arg1;
- (id)indexPathForItemWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 languageCode:(id)arg2;
- (id)initWithIdentifier:(id)arg1 languageCode:(id)arg2 rootNode:(id)arg3;
- (id)initWithLanguageCode:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (void)insertItemsForAceViews:(id)arg1 withDialogPhase:(id)arg2 atIndexPaths:(id)arg3;
- (bool)isSynchronizedWithServer;
- (id)itemAtIndexPath:(id)arg1;
- (bool)itemAtIndexPathIsVirgin:(id)arg1;
- (id)itemWithIdentifier:(id)arg1;
- (id)languageCode;
- (id)lastItem;
- (id)lastRestoredItem;
- (long long)numberOfChildrenForItemAtIndexPath:(id)arg1;
- (long long)numberOfChildrenForItemWithIdentifier:(id)arg1;
- (id)parentOfItemWithIdentifier:(id)arg1;
- (long long)presentationStateForItemAtIndexPath:(id)arg1;
- (id)propertyListRepresentation;
- (void)removeItemsAtIndexPaths:(id)arg1;
- (void)removeItemsFollowingItemAtIndexPath:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSynchronizedWithServer:(bool)arg1;
- (long long)typeForItemAtIndexPath:(id)arg1;
- (void)updateWithUpdateViewsCommand:(id)arg1;
- (id)updatedUserUtteranceForRefId:(id)arg1;

@end

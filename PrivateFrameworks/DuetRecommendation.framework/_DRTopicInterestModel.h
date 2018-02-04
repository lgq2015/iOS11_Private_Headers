/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
 */

@interface _DRTopicInterestModel : NSObject <FRDualInterest, FRInterestQuerying, FRInterestRecording, _DRTopicInterestModeling> {
    _DKKnowledgeStorage * _storage;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) _DKKnowledgeStorage *storage;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *syncQueue;

// Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation

+ (id)newsStorageDirectory;
+ (id)predicateForTopicInteractionsAfter:(id)arg1;
+ (id)predicateForTopicInteractionsBefore:(id)arg1;
+ (id)predicateForTopicsWithPrefix:(id)arg1;
+ (id)topicActionCategoryType;
+ (id)topicPresentedCategory;
+ (id)topicSelectedCategory;

- (void).cxx_destruct;
- (id)computeSummaryWithFilter:(id)arg1;
- (void)enumerateTopicCountsWithFilter:(id)arg1 block:(id /* block */)arg2;
- (id)init;
- (id)initWithStorageDirectory:(id)arg1;
- (id)initWithStorageDirectory:(id)arg1 localOnly:(bool)arg2;
- (void)purgeEntriesEarlierThanDate:(id)arg1;
- (void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2;
- (void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2;
- (void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2;
- (void)setStorage:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (id)storage;
- (id)syncQueue;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

+ (long long)concreteDualInterestTypeForIndex:(unsigned long long)arg1;
+ (id)identifierFromIndexedIdentifier:(id)arg1;
+ (unsigned long long)indexFromIndexedIdentifier:(id)arg1;
+ (id)indexedIdentifierWithIdentifier:(id)arg1 attributeIndex:(unsigned long long)arg2;
+ (id)postfixForAttributeIndex:(unsigned long long)arg1;
+ (id)predicateForIdentifiers:(id)arg1 attributeIndex:(unsigned long long)arg2;
+ (id)predicateForIdentifiers:(id)arg1 attributeIndex:(unsigned long long)arg2 after:(id)arg3;
+ (id)predicateForIdentifiersAfter:(id)arg1;
+ (id)predicateForIdentifiersWithPrefix:(id)arg1;
+ (id)predicateForIdentifiersWithPrefixes:(id)arg1;
+ (id)predicateForIdentifiersWithPrefixes:(id)arg1 afterDate:(id)arg2;

- (void)enumerateIdentifierCountsWithPrefix:(id)arg1 block:(id /* block */)arg2;
- (void)enumerateIndentifierCountsForIdentifiers:(id)arg1 after:(id)arg2 attributeIndex:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)enumerateIndentifierCountsForIdentifiers:(id)arg1 block:(id /* block */)arg2;
- (void)enumerateIndentifierCountsWithPrefix:(id)arg1 attributeIndex:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)enumerateIndentifierDualCountsWithFilter:(id)arg1 block:(id /* block */)arg2;
- (void)enumerateIndentifierDualCountsWithPrefix:(id)arg1 after:(id)arg2 block:(id /* block */)arg3;
- (void)enumerateIndentifierDualCountsWithPrefix:(id)arg1 block:(id /* block */)arg2;
- (void)recordOccurrenceOf:(id)arg1 attributeIndex:(unsigned long long)arg2 onDate:(id)arg3;
- (void)recordOccurrenceOf:(id)arg1 concreteType:(long long)arg2 onDate:(id)arg3;
- (void)recordOccurrenceOf:(id)arg1 type:(long long)arg2 onDate:(id)arg3;

@end

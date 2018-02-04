/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFGraphDataStore : IFDataStore

+ (id)migrationPlan;
+ (id)sharedInstance;

- (id)_childrenForTopic:(id)arg1;
- (id)_indicationFromStatement:(struct sqlite3_stmt { }*)arg1;
- (id)_indicationsForTopic:(id)arg1;
- (void)_insertRoot;
- (id)_parentForTopic:(id)arg1;
- (id)_topicFromStatement:(struct sqlite3_stmt { }*)arg1;
- (void)clear;
- (id)initWithPath:(id)arg1;
- (bool)insertIndication:(id)arg1 topic:(id)arg2;
- (bool)insertTopicWithName:(id)arg1 label:(id)arg2 identifier:(id)arg3 parent:(id)arg4;
- (id)selectTopicsForQuery:(id)arg1;
- (id)topicWithName:(id)arg1 label:(id)arg2 identifier:(id)arg3;

@end

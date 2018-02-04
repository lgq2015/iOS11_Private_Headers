/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKPersistentStoreHandler : NSObject {
    void connection;
}

@property (nonatomic, retain) _TtC13CoreKnowledge15CKSQLConnection *connection;

+ (id)inMemoryHandler;

- (id /* block */).cxx_destruct;
- (id)_valuesForKeys:(id)arg1 error:(id*)arg2;
- (id)connection;
- (void)dealloc;
- (long long)decreaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3;
- (bool)decreaseWeightsWithBetween:(id)arg1 and:(id)arg2 error:(id*)arg3;
- (bool)dropLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 error:(id*)arg4;
- (bool)dropLinksBetween:(id)arg1 and:(id)arg2 error:(id*)arg3;
- (bool)dropLinksWithLabel:(id)arg1 from:(id)arg2 error:(id*)arg3;
- (long long)increaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)keysAndReturnError:(id*)arg1;
- (id)keysAndValuesAndReturnError:(id*)arg1;
- (id)keysAndValuesForKeysMatching:(id)arg1 error:(id*)arg2;
- (id)keysMatching:(id)arg1 error:(id*)arg2;
- (bool)removeAllValuesAndReturnError:(id*)arg1;
- (bool)removeValueForKey:(id)arg1 error:(id*)arg2;
- (bool)removeValuesForKeys:(id)arg1 error:(id*)arg2;
- (bool)removeValuesMatching:(id)arg1 error:(id*)arg2;
- (bool)saveKeysAndValues:(id)arg1 error:(id*)arg2;
- (void)setConnection:(id)arg1;
- (bool)setWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 toValue:(long long)arg4 error:(id*)arg5;
- (id)tripleComponentsMatching:(id)arg1 error:(id*)arg2;
- (id)valuesAndReturnError:(id*)arg1;
- (id)valuesForKeysMatching:(id)arg1 error:(id*)arg2;

@end

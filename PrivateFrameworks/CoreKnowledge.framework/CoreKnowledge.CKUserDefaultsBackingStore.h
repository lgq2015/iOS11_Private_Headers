/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKUserDefaultsBackingStore : CKAbstractBackingStore {
    void kv;
}

@property (nonatomic, copy) NSString *name;

- (id /* block */).cxx_destruct;
- (void)decreaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)dictionaryRepresentationAndReturnError:(id*)arg1;
- (id)dictionaryRepresentationForKeysMatching:(id)arg1 error:(id*)arg2;
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(id /* block */)arg1;
- (void)dropLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dropLinksWithBetween:(id)arg1 and:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dropLinksWithLabel:(id)arg1 from:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)increaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)keysAndReturnError:(id*)arg1;
- (id)keysMatching:(id)arg1 error:(id*)arg2;
- (id)name;
- (bool)removeAllValuesAndReturnError:(id*)arg1;
- (bool)removeValueForKey:(id)arg1 error:(id*)arg2;
- (bool)removeValuesForKeys:(id)arg1 error:(id*)arg2;
- (bool)removeValuesMatching:(id)arg1 error:(id*)arg2;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 toValue:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)synchronize;
- (id)triplesComponentsMatching:(id)arg1 error:(id*)arg2;
- (id)valuesAndReturnError:(id*)arg1;
- (id)valuesForKeysMatching:(id)arg1 error:(id*)arg2;
- (id)writeBatch;

@end

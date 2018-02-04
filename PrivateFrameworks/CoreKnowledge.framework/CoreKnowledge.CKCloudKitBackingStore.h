/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKCloudKitBackingStore : CoreKnowledge.CKSQLBackingStore

@property (nonatomic, copy) NSString *name;

+ (id)mainInstance;

- (void)decreaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(id /* block */)arg1;
- (void)dropLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dropLinksWithBetween:(id)arg1 and:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dropLinksWithLabel:(id)arg1 from:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)increaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)removeAllValuesWithCompletionHandler:(id /* block */)arg1;
- (void)removeValueForKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeValuesForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeValuesMatching:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 toValue:(long long)arg4 completionHandler:(id /* block */)arg5;
- (id)triplesComponentsMatching:(id)arg1 error:(id*)arg2;
- (id)writeBatch;

@end

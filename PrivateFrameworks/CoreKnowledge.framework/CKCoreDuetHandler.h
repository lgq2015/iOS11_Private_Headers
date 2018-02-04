/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKCoreDuetHandler : NSObject

+ (void)duetEventsWithIdentifier:(id)arg1 inStreamNamed:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
+ (id)duetKnowledgeStore;
+ (void)removeAllFromStreamNamed:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)saveEvents:(id)arg1 toStreamNamed:(id)arg2 completionHandler:(id /* block */)arg3;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCDraftCoverStoriesGroupEmitter : FCDraftsFeedGroupEmitter

- (bool)emitsSingletonGroups;
- (id)groupEmitterIdentifier;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (bool)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;

@end

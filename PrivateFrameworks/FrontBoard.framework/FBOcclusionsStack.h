/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBOcclusionsStack : NSObject {
    NSMutableSet * _dirtyKeys;
    NSMutableDictionary * _keyToEntry;
    NSMutableDictionary * _levelToCompositeOcclusions;
    NSCountedSet * _levels;
    NSMutableArray * _orderedEntries;
}

- (void)_adjustEntry:(id)arg1 forLevel:(double)arg2 occlusions:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dirtyKeys;
- (void)enumerateKeysByLevelWithBlock:(id /* block */)arg1;
- (id)init;
- (bool)isDirty;
- (bool)isEmpty;
- (id)occlusionsAppliedToKey:(id)arg1;
- (void)removeKey:(id)arg1;
- (void)setKey:(id)arg1 toLevel:(double)arg2 withOcclusions:(id)arg3;

@end

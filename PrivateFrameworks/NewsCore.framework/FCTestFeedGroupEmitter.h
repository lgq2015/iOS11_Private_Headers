/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTestFeedGroupEmitter : FCSingleTagFeedGroupEmitter {
    bool  _disableFiltering;
    bool  _disableGroupMerging;
    bool  _enableSingletonGroups;
}

@property (nonatomic) bool disableFiltering;
@property (nonatomic) bool disableGroupMerging;
@property (nonatomic) bool enableSingletonGroups;

- (bool)canMergeGroupsUnconditionally;
- (Class)classForGroupEmittingOperation;
- (bool)disableFiltering;
- (bool)disableGroupMerging;
- (bool)emitsSingletonGroups;
- (bool)enableSingletonGroups;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (void)setDisableFiltering:(bool)arg1;
- (void)setDisableGroupMerging:(bool)arg1;
- (void)setEnableSingletonGroups:(bool)arg1;

@end

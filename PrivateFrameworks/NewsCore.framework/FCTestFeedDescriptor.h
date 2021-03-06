/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTestFeedDescriptor : FCSingleTagFeedDescriptor {
    bool  _disableFiltering;
    bool  _disableGroupMerging;
    bool  _enableSingletonGroups;
}

@property (nonatomic) bool disableFiltering;
@property (nonatomic) bool disableGroupMerging;
@property (nonatomic) bool enableSingletonGroups;

- (bool)disableFiltering;
- (bool)disableGroupMerging;
- (bool)enableSingletonGroups;
- (id)feedGroupEmitters;
- (id)initWithContext:(id)arg1 identifier:(id)arg2 tag:(id)arg3;
- (void)setDisableFiltering:(bool)arg1;
- (void)setDisableGroupMerging:(bool)arg1;
- (void)setEnableSingletonGroups:(bool)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface NAMutableTreeNode : NATreeNode

@property (nonatomic, retain) id representedObject;

- (void)addChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)removeChildrenPassingTest:(id /* block */)arg1;

@end

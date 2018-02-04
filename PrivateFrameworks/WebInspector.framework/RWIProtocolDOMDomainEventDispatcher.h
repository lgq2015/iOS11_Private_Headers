/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDOMDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

- (void)attributeModifiedWithNodeId:(int)arg1 name:(id)arg2 value:(id)arg3;
- (void)attributeRemovedWithNodeId:(int)arg1 name:(id)arg2;
- (void)characterDataModifiedWithNodeId:(int)arg1 characterData:(id)arg2;
- (void)childNodeCountUpdatedWithNodeId:(int)arg1 childNodeCount:(int)arg2;
- (void)childNodeInsertedWithParentNodeId:(int)arg1 previousNodeId:(int)arg2 node:(id)arg3;
- (void)childNodeRemovedWithParentNodeId:(int)arg1 nodeId:(int)arg2;
- (void)customElementStateChangedWithNodeId:(int)arg1 customElementState:(long long)arg2;
- (void)documentUpdated;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (void)inlineStyleInvalidatedWithNodeIds:(id)arg1;
- (void)pseudoElementAddedWithParentId:(int)arg1 pseudoElement:(id)arg2;
- (void)pseudoElementRemovedWithParentId:(int)arg1 pseudoElementId:(int)arg2;
- (void)setChildNodesWithParentId:(int)arg1 nodes:(id)arg2;
- (void)shadowRootPoppedWithHostId:(int)arg1 rootId:(int)arg2;
- (void)shadowRootPushedWithHostId:(int)arg1 root:(id)arg2;

@end

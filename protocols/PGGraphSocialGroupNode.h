/* made by EzioChiu.
 */

@protocol PGGraphSocialGroupNode <NSObject>

@required

- (unsigned long long)rank;
- (void)socialGroupEnumerateMomentNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphMomentNode *, bool*, void*
- (void)socialGroupEnumeratePersonNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphPersonNode *, bool*, void*
- (NSSet *)socialGroupMomentNodes;
- (NSSet *)socialGroupPersonNodes;

@end

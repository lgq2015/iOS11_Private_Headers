/* made by EzioChiu.
 */

@protocol PGGraphPersonNode <NSObject>

@required

- (bool)belongsToBestSocialGroup;
- (void)personEnumerateMomentNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphPresentEdge *, PGGraphMomentNode *, bool*, void*
- (void)personEnumerateSocialGroupNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphSocialGroupNode *, bool*, void*
- (bool)personIsUserCreated;
- (NSSet *)personMomentNodes;
- (NSSet *)personSocialGroupNodes;

@end

/* made by EzioChiu.
 */

@protocol PGGraphAddressNode <NSObject>

@required

- (void)addressEnumerateAreaNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphAreaNode *, bool*, void*
- (NSSet *)areaNodes;
- (bool)isOcean;
- (bool)locationIsImproved;

@end

/* made by EzioChiu.
 */

@protocol PVPersonPromoterDelegate <NSObject>

@required

- (NSArray *)densityClusteringForObjects:(void *)arg1 maximumDistance:(void *)arg2 minimumNumberOfObjects:(void *)arg3 withDistanceBlock:(void *)arg4; // needs 4 arg types, found 9: NSArray *, double, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, double, id /* block */, id, void*
- (<PVFaceProtocol> *)keyFaceForPerson:(void *)arg1 qualityMeasureByFace:(void *)arg2 updateBlock:(void *)arg3; // needs 3 arg types, found 9: <PVPersonProtocol> *, NSMapTable *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, bool*, void*
- (NSArray *)performSocialGroupsIdentifiersWithPersonClusterManager:(void *)arg1 forPersons:(void *)arg2 overTheYearsComputation:(void *)arg3 updateBlock:(void *)arg4; // needs 4 arg types, found 10: PVPersonClusterManager *, NSSet *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, bool*, void*
- (NSString *)suggestedMeIdentifierWithPersonClusterManager:(void *)arg1 forPersons:(void *)arg2 updateBlock:(void *)arg3; // needs 3 arg types, found 9: PVPersonClusterManager *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, bool*, void*

@end

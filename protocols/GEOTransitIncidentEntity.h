/* made by EzioChiu.
 */

@protocol GEOTransitIncidentEntity <NSObject>

@required

- (bool)hasNextStopIDs;
- (unsigned long long)muid;
- (NSSet *)nextStopIDs;

@end

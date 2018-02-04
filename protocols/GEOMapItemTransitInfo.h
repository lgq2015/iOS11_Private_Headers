/* made by EzioChiu.
 */

@protocol GEOMapItemTransitInfo <GEOMapItemTransitSchedule>

@required

- (NSArray *)connections;
- (NSString *)displayName;
- (bool)hasTransitIncidentComponent;
- (NSArray *)incidents;
- (bool)isTransitIncidentsTTLExpired;
- (NSArray *)labelItems;
- (NSArray *)lines;
- (unsigned long long)linesCount;
- (NSArray *)linesForSystem:(id <GEOTransitSystem>)arg1;
- (NSArray *)systems;
- (unsigned long long)systemsCount;

@end

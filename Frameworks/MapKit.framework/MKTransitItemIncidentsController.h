/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitItemIncidentsController : NSObject {
    NSSet * _blockedIncidentEntities;
    NSMutableDictionary * _dominantIncidentForSequence;
    NSArray * _lineFilteredValidIncidents;
    <GEOTransitLineItem> * _lineItem;
    MKMapItem * _mapItem;
    NSDate * _nextIncidentChangeDate;
    NSMutableDictionary * _systemHasIncidents;
    NSArray * _validIncidents;
}

+ (id)sectionHeaderText;

- (void).cxx_destruct;
- (id)_blockedIncidentEntitiesAtDate:(id)arg1;
- (id)_dominantIncidentForSequence:(id)arg1 atDate:(id)arg2;
- (id)_validIncidentsAtDate:(id)arg1 filterToOnceIncidentPerLine:(bool)arg2;
- (void)_validateCacheForDate:(id)arg1;
- (id)blockedIncidentEntitiesAtDate:(id)arg1;
- (id)dominantIncidentForSequence:(id)arg1 atDate:(id)arg2;
- (id)initWithLineItem:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (void)resetCache;
- (bool)systemHasIncidents:(id)arg1 atDate:(id)arg2;
- (id)validIncidentsAtDate:(id)arg1 filterToOnceIncidentPerLine:(bool)arg2;

@end

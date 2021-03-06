/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceRouteSelectionsRow : NSObject {
    double  _endTimestamp;
    NSData * _routeID;
    unsigned long long  _selectedRouteIndex;
    double  _startTimestamp;
}

@property (nonatomic) double endTimestamp;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic) unsigned long long selectedRouteIndex;
@property (nonatomic) double startTimestamp;

- (void).cxx_destruct;
- (double)endTimestamp;
- (id)routeID;
- (unsigned long long)selectedRouteIndex;
- (void)setEndTimestamp:(double)arg1;
- (void)setRouteID:(id)arg1;
- (void)setSelectedRouteIndex:(unsigned long long)arg1;
- (void)setStartTimestamp:(double)arg1;
- (double)startTimestamp;

@end

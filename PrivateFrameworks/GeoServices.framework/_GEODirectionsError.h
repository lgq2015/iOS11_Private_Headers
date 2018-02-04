/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEODirectionsError : NSObject <GEODirectionsError, NSSecureCoding> {
    GEOAlert * _alert;
    struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _problemDetails;
    unsigned long long  _problemDetailsCount;
    _GEOTransitRoutingIncidentMessage * _routingIncidentMessage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long firstDirectionsErrorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitRoutingIncidentMessage> *incidentMessage;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_copyProblemDetails:(struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (bool)_errorCode:(long long)arg1 toProblem:(out int*)arg2;
- (long long)_errorCodeForProblemDetail:(struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)firstDirectionsErrorCode;
- (bool)hasError:(long long)arg1;
- (id)incidentMessage;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (id)initWithWaypointIndex:(unsigned long long)arg1;
- (id)localizedDescription;
- (id)localizedTitle;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitRoutingIncidentMessage : NSObject <GEOTransitRoutingIncidentMessage, NSSecureCoding> {
    GEOPBTransitRoutingIncidentMessage * _routingIncidentMessage;
    NSArray * _transitIncidents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *routingMessage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *transitIncidents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_fakeTransitLineIncidentInLine:(id)arg1;
- (void)_populateTransitIncidentsWithDecoderData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initFakeLineIncidentMessageInLine:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncidentMessage:(id)arg1 decoderData:(id)arg2;
- (id)initWithIncidentMessageIndex:(unsigned long long)arg1 decoderData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)routingMessage;
- (id)transitIncidents;

@end

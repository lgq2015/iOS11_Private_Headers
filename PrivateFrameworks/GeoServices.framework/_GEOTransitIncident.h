/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitIncident : NSObject <GEOTransitIncident, NSSecureCoding> {
    GEOPBTransitIncident * _incident;
}

@property (nonatomic, readonly) NSArray *affectedEntities;
@property (getter=isBlockingIncident, nonatomic, readonly) bool blockingIncident;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *fullDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long iconType;
@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic, readonly) NSString *messageForNonRoutable;
@property (nonatomic, readonly) NSString *messageForRoutePlanning;
@property (nonatomic, readonly) NSString *messageForRouteStepping;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)affectedEntities;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)fullDescription;
- (unsigned long long)hash;
- (long long)iconType;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncident:(id)arg1;
- (bool)isBlockingIncident;
- (bool)isEqual:(id)arg1;
- (id)lastUpdated;
- (id)messageForNonRoutable;
- (id)messageForRoutePlanning;
- (id)messageForRouteStepping;
- (unsigned long long)muid;
- (id)startDate;
- (id)summary;
- (id)title;

@end

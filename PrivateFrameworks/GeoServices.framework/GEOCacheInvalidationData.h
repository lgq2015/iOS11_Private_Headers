/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheInvalidationData : NSObject {
    double  _timestamp;
    double  _ttl;
    unsigned int  _version;
    NSArray * _versionDomains;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) double ttl;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) NSArray *versionDomains;

- (void).cxx_destruct;
- (id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned int)arg3 domains:(id)arg4;
- (double)timestamp;
- (double)ttl;
- (unsigned int)version;
- (id)versionDomains;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhoneNumberResolverLocalProxy : NSObject <GEOPhoneNumberResolving> {
    GEOPNRReadersCache * _readersCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) GEOPNRReadersCache *readersCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)readersCache;
- (id)resolveFullyQualifiedPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id*)arg3;
- (void)resolvePhoneNumbers:(id)arg1 handler:(id /* block */)arg2 queue:(id)arg3;
- (id)resolveUnknownFormatPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id*)arg3;
- (id)resolvedStringForCC:(id)arg1 inCountry:(id)arg2 locationIndex:(unsigned int)arg3 error:(id*)arg4;

@end

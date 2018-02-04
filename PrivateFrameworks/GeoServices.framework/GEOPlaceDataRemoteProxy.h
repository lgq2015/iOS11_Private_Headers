/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataRemoteProxy : NSObject <GEOPlaceDataProxy> {
    NSObject<OS_dispatch_queue> * _requestQ;
    NSMapTable * _requestToUUID;
    NSLock * _requestToUUIDLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_parseReply:(id)arg1 placeResponse:(id*)arg2 userInfo:(id*)arg3 error:(id*)arg4;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)arg1;
- (void)cancelRequest:(id)arg1;
- (void)clearCache;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id /* block */)arg1;
- (id)init;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 networkActivity:(id /* block */)arg6 requesterHandler:(id /* block */)arg7;
- (void)requestComponentsFromNetwork:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 requesterHandler:(id /* block */)arg6;
- (void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 requesterHandler:(id /* block */)arg6;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3 auditToken:(id)arg4 requesterHandler:(id /* block */)arg5;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(id /* block */)arg2;
- (void)trackPlaceData:(id)arg1;

@end

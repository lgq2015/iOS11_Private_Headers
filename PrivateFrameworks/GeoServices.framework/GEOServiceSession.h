/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOServiceSession : NSObject {
    GEOProtobufSession * _protobufSession;
    unsigned long long  _urlType;
}

@property (nonatomic, readonly) long long experimentType;
@property (nonatomic, readonly) GEOProtobufSession *protobufSession;
@property (nonatomic, readonly) int serviceType;
@property (nonatomic, readonly) unsigned long long urlType;

+ (id)sharedDispatcherServiceSession;

- (void).cxx_destruct;
- (id)URLForRequest:(id)arg1;
- (long long)_experimentType;
- (int)experimentDispatcherRequestTypeForRequest:(id)arg1;
- (long long)experimentType;
- (id)init;
- (id)initWithProtobufSession:(id)arg1 urlType:(unsigned long long)arg2;
- (id)protobufSession;
- (int)serviceType;
- (id)serviceTypeNumber;
- (id)taskWithKind:(int)arg1 request:(id)arg2 traits:(id)arg3 timeout:(double)arg4 auditToken:(id)arg5 queue:(id)arg6 completionHandler:(id /* block */)arg7;
- (unsigned long long)urlType;

@end

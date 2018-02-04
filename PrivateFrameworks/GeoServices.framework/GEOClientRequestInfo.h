/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOClientRequestInfo : NSObject {
    NSString * _clientID;
    NSMutableDictionary * _requests;
}

@property (nonatomic, readonly) NSString *clientID;
@property (nonatomic, readonly) NSDictionary *requests;

- (void).cxx_destruct;
- (id)clientID;
- (unsigned long long)countForRequestType:(unsigned char)arg1;
- (void)incrementCountForRequestType:(unsigned char)arg1;
- (id)init;
- (id)initWithClientID:(id)arg1;
- (id)requests;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceCommuteDirectionsRequestRow : NSObject {
    unsigned long long  _destinationID;
    GEODirectionsRequest * _request;
    double  _requestTimestamp;
    GEODirectionsResponse * _response;
    NSError * _responseError;
    double  _responseTimestamp;
}

@property (nonatomic) unsigned long long destinationID;
@property (nonatomic, retain) GEODirectionsRequest *request;
@property (nonatomic) double requestTimestamp;
@property (nonatomic, retain) GEODirectionsResponse *response;
@property (nonatomic, retain) NSError *responseError;
@property (nonatomic) double responseTimestamp;

- (void).cxx_destruct;
- (unsigned long long)destinationID;
- (id)request;
- (double)requestTimestamp;
- (id)response;
- (id)responseError;
- (double)responseTimestamp;
- (void)setDestinationID:(unsigned long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestTimestamp:(double)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseError:(id)arg1;
- (void)setResponseTimestamp:(double)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface HTSHTTPMessageResponse : HTSHTTPMessage {
    HTSHTTPMessageRequest * _request;
    double  _sendTime;
    NSMutableData * _serializedData;
    int  _statusCode;
    NSString * _statusDescription;
    NSString * _trackingDescription;
    unsigned long long  _written;
}

@property (nonatomic, retain) HTSHTTPMessageRequest *request;
@property (nonatomic) double sendTime;
@property (nonatomic, retain) NSMutableData *serializedData;
@property (nonatomic) int statusCode;
@property (nonatomic, copy) NSString *statusDescription;
@property (nonatomic, copy) NSString *trackingDescription;
@property (nonatomic) unsigned long long written;

- (struct __CFHTTPMessage { }*)copyMessage;
- (void)dealloc;
- (id)request;
- (double)sendTime;
- (id)serializedData;
- (void)setRequest:(id)arg1;
- (void)setSendTime:(double)arg1;
- (void)setSerializedData:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setStatusDescription:(id)arg1;
- (void)setTrackingDescription:(id)arg1;
- (void)setWritten:(unsigned long long)arg1;
- (int)statusCode;
- (id)statusDescription;
- (id)trackingDescription;
- (unsigned long long)written;

@end

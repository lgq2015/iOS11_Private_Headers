/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNetworkEvent : NSObject <NSCopying> {
    NSString * _HTTPMethod;
    NSDictionary * _HTTPResponseHeaders;
    unsigned long long  _HTTPStatusCode;
    NSURL * _URL;
    NSString * _containerName;
    NSError * _error;
    NSString * _operationID;
    unsigned long long  _requestSize;
    NSString * _requestUUID;
    NSString * _responseMIMEType;
    unsigned long long  _responseSize;
    double  _startTime;
    long long  _type;
    NSDictionary * _w3cNavigationTiming;
}

@property (nonatomic, copy) NSString *HTTPMethod;
@property (nonatomic, copy) NSDictionary *HTTPResponseHeaders;
@property (nonatomic) unsigned long long HTTPStatusCode;
@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, readonly) double connectDuration;
@property (nonatomic, copy) NSString *containerName;
@property (nonatomic, readonly) double dnsDuration;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, readonly) double fetchStartTime;
@property (nonatomic, copy) NSString *operationID;
@property (nonatomic, readonly) double requestDuration;
@property (nonatomic) unsigned long long requestSize;
@property (nonatomic, copy) NSString *requestUUID;
@property (nonatomic, readonly) double responseDuration;
@property (nonatomic, readonly) double responseEndTime;
@property (nonatomic, copy) NSString *responseMIMEType;
@property (nonatomic) unsigned long long responseSize;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) double totalDuration;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSDictionary *w3cNavigationTiming;

- (void).cxx_destruct;
- (id)HTTPMethod;
- (id)HTTPResponseHeaders;
- (unsigned long long)HTTPStatusCode;
- (id)URL;
- (double)connectDuration;
- (id)containerName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (double)dnsDuration;
- (id)error;
- (double)fetchStartTime;
- (id)operationID;
- (double)requestDuration;
- (unsigned long long)requestSize;
- (id)requestUUID;
- (double)responseDuration;
- (double)responseEndTime;
- (id)responseMIMEType;
- (unsigned long long)responseSize;
- (void)setContainerName:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setHTTPResponseHeaders:(id)arg1;
- (void)setHTTPStatusCode:(unsigned long long)arg1;
- (void)setOperationID:(id)arg1;
- (void)setRequestSize:(unsigned long long)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setResponseMIMEType:(id)arg1;
- (void)setResponseSize:(unsigned long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setURL:(id)arg1;
- (void)setW3cNavigationTiming:(id)arg1;
- (double)startTime;
- (double)totalDuration;
- (long long)type;
- (id)w3cNavigationTiming;

@end

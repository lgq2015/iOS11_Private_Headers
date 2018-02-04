/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONSURLSessionTaskState : GEOCapturedState {
    long long  _countOfBytesExpectedToReceive;
    long long  _countOfBytesExpectedToSend;
    long long  _countOfBytesReceived;
    long long  _countOfBytesSent;
    NSURLRequest * _currentRequest;
    NSError * _error;
    NSURLRequest * _originalRequest;
    float  _priority;
    NSURLResponse * _response;
    long long  _state;
    NSString * _taskClassName;
    NSString * _taskDescription;
    unsigned long long  _taskIdentifier;
}

+ (const char *)decoderType;
+ (id)stateWithTask:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

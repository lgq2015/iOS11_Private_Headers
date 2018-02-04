/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataXPCSessionTaskState : GEOCapturedState {
    double  _endTime;
    NSError * _error;
    double  _now;
    long long  _rawPointer;
    unsigned int  _receivedDataLength;
    GEODataRequestState * _requestState;
    double  _startTime;
    unsigned int  _taskIdentifier;
}

+ (const char *)decoderType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataURLSessionTaskState : GEOCapturedState {
    GEONSURLSessionTaskState * _backingTask;
    bool  _backingTaskNeedsResume;
    unsigned int  _cachedDataLength;
    double  _endTime;
    double  _now;
    long long  _rawPointer;
    unsigned int  _receivedDataLength;
    int  _requestKind;
    double  _startTime;
    unsigned int  _taskIdentifier;
}

+ (const char *)decoderType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

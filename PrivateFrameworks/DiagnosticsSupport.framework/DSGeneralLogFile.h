/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSGeneralLogFile : NSObject {
    NSString * _currentOSVersion;
    NSString * _hardwareModel;
    NSDate * _logStartDate;
    int  _logVersion;
    NSDate * _restoreDate;
    NSString * _serialNumber;
    NSDate * _updateDate;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *currentOSVersion;
@property (nonatomic, readonly) NSString *hardwareModel;
@property (nonatomic, readonly) NSDate *logStartDate;
@property (nonatomic, readonly) int logVersion;
@property (nonatomic, readonly) NSDate *restoreDate;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSDate *updateDate;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)currentOSVersion;
- (bool)enumerateLogLinesWithIDs:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)hardwareModel;
- (id)initWithURL:(id)arg1;
- (id)logStartDate;
- (int)logVersion;
- (bool)parseDetailsWithURL:(id)arg1;
- (bool)parseHeadersWithLine:(id)arg1;
- (id)restoreDate;
- (id)serialNumber;
- (id)updateDate;
- (id)url;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface ASTrafficLogger : NSObject {
    bool  _didFlushLogs;
    bool  _isOutgoingTraffic;
    NSFileHandle * _lookasideFileHandle;
    NSString * _lookasideFilePath;
}

@property (nonatomic) bool isOutgoingTraffic;

+ (id)_logQueue;

- (void).cxx_destruct;
- (void)_moveLogFileContentsAtPath:(id)arg1;
- (void)_openLookasideFile;
- (void)dealloc;
- (void)flushLogs;
- (bool)isOutgoingTraffic;
- (void)logPlainTextData:(id)arg1;
- (void)logWBXMLData:(id)arg1;
- (void)setIsOutgoingTraffic:(bool)arg1;

@end

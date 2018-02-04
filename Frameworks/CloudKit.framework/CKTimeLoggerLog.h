/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKTimeLoggerLog : NSObject <NSCoding> {
    double  _beginTime;
    NSString * _beginningMessage;
    double  _endTime;
    NSString * _endingMessage;
    NSMutableArray * _pauseRecords;
    NSString * _type;
}

@property (nonatomic) double beginTime;
@property (nonatomic, retain) NSString *beginningMessage;
@property (readonly) double elapsedTime;
@property (nonatomic) double endTime;
@property (nonatomic, retain) NSString *endingMessage;
@property (nonatomic, retain) NSMutableArray *pauseRecords;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (void)appendStatusReportToString:(id)arg1 withIndent:(unsigned long long)arg2 showingPointers:(bool)arg3;
- (double)beginTime;
- (id)beginningMessage;
- (void)dealloc;
- (id)description;
- (double)elapsedTime;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)endingMessage;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)pauseRecords;
- (void)setBeginTime:(double)arg1;
- (void)setBeginningMessage:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setEndingMessage:(id)arg1;
- (void)setPauseRecords:(id)arg1;
- (void)setType:(id)arg1;
- (void)togglePauseWithTime:(double)arg1 message:(id)arg2;
- (id)type;

@end

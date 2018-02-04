/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogEnvelope : NSObject {
    NSString * _function;
    int  _level;
    NSString * _logName;
    unsigned int  _machPort;
    NSString * _message;
    int  _processID;
    NSString * _processName;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *function;
@property (nonatomic) int level;
@property (nonatomic, retain) NSString *logName;
@property (nonatomic) unsigned int machPort;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) int processID;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)description;
- (id)function;
- (id)init;
- (id)initWithLogName:(id)arg1 level:(int)arg2 message:(id)arg3;
- (int)level;
- (id)logName;
- (unsigned int)machPort;
- (id)message;
- (int)processID;
- (id)processName;
- (void)setFunction:(id)arg1;
- (void)setLevel:(int)arg1;
- (void)setLogName:(id)arg1;
- (void)setMachPort:(unsigned int)arg1;
- (void)setMessage:(id)arg1;
- (void)setProcessID:(int)arg1;
- (void)setProcessName:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end

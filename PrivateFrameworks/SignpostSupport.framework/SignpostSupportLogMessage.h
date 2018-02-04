/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportLogMessage : SignpostSupportObject <SignpostSupportLoggingSupportArchiveEvent> {
    unsigned long long  __machContinuousTimestamp;
    NSString * _message;
    unsigned char  _messageType;
    int  _processID;
    NSString * _processImagePath;
    NSUUID * _processImageUUID;
    NSString * _processName;
    unsigned long long  _processUniqueID;
    unsigned long long  _threadID;
}

@property (nonatomic) unsigned long long _machContinuousTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) unsigned char messageType;
@property (nonatomic) int processID;
@property (nonatomic, retain) NSString *processImagePath;
@property (nonatomic, retain) NSUUID *processImageUUID;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) unsigned long long processUniqueID;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long threadID;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (unsigned long long)_machContinuousTimestamp;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)message;
- (unsigned char)messageType;
- (int)processID;
- (id)processImagePath;
- (id)processImageUUID;
- (id)processName;
- (unsigned long long)processUniqueID;
- (id)serializeableDictionary;
- (void)setMessage:(id)arg1;
- (void)setMessageType:(unsigned char)arg1;
- (void)setProcessID:(int)arg1;
- (void)setProcessImagePath:(id)arg1;
- (void)setProcessImageUUID:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setProcessUniqueID:(unsigned long long)arg1;
- (void)setThreadID:(unsigned long long)arg1;
- (void)set_machContinuousTimestamp:(unsigned long long)arg1;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)threadID;

// Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection

- (id)initWithOSLogEventProxy:(id)arg1;

@end

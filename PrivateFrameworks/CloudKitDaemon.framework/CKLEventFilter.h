/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKLEventFilter : NSObject {
    NSDictionary * _categoriesBySubsystem;
    unsigned long long  _logTypes;
    NSString * _processName;
    bool  _simulatorMessagesOnly;
}

@property (nonatomic, retain) NSDictionary *categoriesBySubsystem;
@property (nonatomic) unsigned long long logTypes;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) bool simulatorMessagesOnly;

- (void).cxx_destruct;
- (void)_initFilterDict;
- (id)categoriesBySubsystem;
- (bool)hasLogType:(unsigned long long)arg1;
- (bool)hasOnlyLogType:(unsigned long long)arg1;
- (id)initWithLogTypes:(unsigned long long)arg1;
- (unsigned long long)logTypes;
- (bool)matchesEvent:(id)arg1;
- (id)processName;
- (void)setCategoriesBySubsystem:(id)arg1;
- (void)setLogTypes:(unsigned long long)arg1;
- (void)setProcessName:(id)arg1;
- (void)setSimulatorMessagesOnly:(bool)arg1;
- (bool)simulatorMessagesOnly;

@end

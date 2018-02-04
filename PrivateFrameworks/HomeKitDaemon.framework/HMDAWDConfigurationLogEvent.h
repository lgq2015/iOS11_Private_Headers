/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAWDConfigurationLogEvent : HMDLogEvent <HMDAWDLogEvent> {
    unsigned int  _databaseSize;
    NSMutableArray * _homeConfigurations;
    bool  _isResidentCapable;
    bool  _isResidentEnabled;
    unsigned int  _metadataVersion;
}

@property unsigned int databaseSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *homeConfigurations;
@property bool isResidentCapable;
@property bool isResidentEnabled;
@property unsigned int metadataVersion;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (unsigned int)databaseSize;
- (id)homeConfigurations;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)isResidentCapable;
- (bool)isResidentEnabled;
- (unsigned int)metadataVersion;
- (id)metricForAWD;
- (void)setDatabaseSize:(unsigned int)arg1;
- (void)setIsResidentCapable:(bool)arg1;
- (void)setIsResidentEnabled:(bool)arg1;
- (void)setMetadataVersion:(unsigned int)arg1;

@end

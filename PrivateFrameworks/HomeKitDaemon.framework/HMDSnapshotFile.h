/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSnapshotFile : HMFObject <HMFLogging> {
    NSNumber * _aspectRatio;
    NSString * _directory;
    bool  _externalFilePath;
    NSString * _filePath;
    NSNumber * _slotIdentifier;
    HMFOSTransaction * _snapshotCATransaction;
    NSDate * _snapshotTimestamp;
}

@property (nonatomic, readonly) NSNumber *aspectRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *directory;
@property (nonatomic, readonly) bool externalFilePath;
@property (nonatomic, readonly) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *slotIdentifier;
@property (nonatomic, retain) HMFOSTransaction *snapshotCATransaction;
@property (nonatomic, readonly) NSDate *snapshotTimestamp;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)aspectRatio;
- (id)copyFileAtPath:(id)arg1 snapshotTimestamp:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)directory;
- (bool)externalFilePath;
- (id)filePath;
- (unsigned long long)hash;
- (id)initWithImageDirectory:(id)arg1;
- (id)initWithImageDirectory:(id)arg1 externalFilePath:(id)arg2 snapshotTimestamp:(id)arg3;
- (id)initWithImageDirectory:(id)arg1 filePath:(id)arg2 snapshotTimestamp:(id)arg3;
- (id)initWithImageDirectory:(id)arg1 snapshotData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (bool)prepareParametersWithFilePath:(id)arg1 snapshotData:(id)arg2 directory:(id)arg3 snapshotTimestamp:(id)arg4 resize:(bool)arg5 writeBack:(bool)arg6;
- (id)setFileData:(id)arg1 snapshotTimestamp:(id)arg2;
- (void)setSlotIdentifier:(id)arg1;
- (void)setSnapshotCATransaction:(id)arg1;
- (id)slotIdentifier;
- (id)snapshotCATransaction;
- (id)snapshotTimestamp;
- (void)updateSlotIdentifier;

@end

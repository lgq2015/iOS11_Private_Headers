/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentMeshMeshStorage : HMFObject {
    NSMutableSet * _accessoryUUIDs;
    HMDDevice * _device;
    bool  _enabled;
    unsigned long long  _generationCount;
    HMDResidentMesh * _owner;
}

@property (nonatomic, retain) NSMutableSet *accessoryUUIDs;
@property (nonatomic, retain) HMDDevice *device;
@property (nonatomic) bool enabled;
@property (nonatomic) unsigned long long generationCount;
@property (nonatomic) HMDResidentMesh *owner;

- (void).cxx_destruct;
- (void)_requestStatus;
- (id)accessoryUUIDs;
- (id)device;
- (bool)enabled;
- (unsigned long long)generationCount;
- (id)initWithDevice:(id)arg1 owner:(id)arg2;
- (id)owner;
- (void)setAccessoryUUIDs:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGenerationCount:(unsigned long long)arg1;
- (void)setOwner:(id)arg1;

@end

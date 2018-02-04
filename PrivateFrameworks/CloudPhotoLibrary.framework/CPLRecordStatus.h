/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLRecordStatus : NSObject <NSSecureCoding> {
    unsigned long long  _generation;
    CPLRecordChange * _record;
    union { 
        struct { 
            unsigned int unknown : 1; 
            unsigned int quarantined : 1; 
            unsigned int resetting : 1; 
            unsigned int uploaded : 1; 
            unsigned int waitingForUpload : 1; 
            unsigned int uploading : 1; 
            unsigned int waitingForUpdate : 1; 
            unsigned int updating : 1; 
        } status; 
        unsigned int packedStatus; 
    }  _status;
}

@property (nonatomic, readonly) unsigned long long generation;
@property (getter=isQuarantined, nonatomic) bool quarantined;
@property (nonatomic, readonly) CPLRecordChange *record;
@property (getter=isResetting, nonatomic) bool resetting;
@property (nonatomic, readonly) NSString *statusDescription;
@property (getter=isUnknown, nonatomic) bool unknown;
@property (getter=isUpdating, nonatomic) bool updating;
@property (getter=isUploaded, nonatomic) bool uploaded;
@property (getter=isUploading, nonatomic) bool uploading;
@property (getter=isWaitingForUpdate, nonatomic) bool waitingForUpdate;
@property (getter=isWaitingForUpload, nonatomic) bool waitingForUpload;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)generation;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2;
- (bool)isQuarantined;
- (bool)isResetting;
- (bool)isUnknown;
- (bool)isUpdating;
- (bool)isUploaded;
- (bool)isUploading;
- (bool)isWaitingForUpdate;
- (bool)isWaitingForUpload;
- (id)record;
- (void)setQuarantined:(bool)arg1;
- (void)setResetting:(bool)arg1;
- (void)setUnknown:(bool)arg1;
- (void)setUpdating:(bool)arg1;
- (void)setUploaded:(bool)arg1;
- (void)setUploading:(bool)arg1;
- (void)setWaitingForUpdate:(bool)arg1;
- (void)setWaitingForUpload:(bool)arg1;
- (id)statusDescription;

@end

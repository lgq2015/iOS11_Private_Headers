/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {
    bool  _cancelled;
    long long  _priority;
    CPLResource * _resource;
    NSString * _taskIdentifier;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (getter=isHighPriority, nonatomic) bool highPriority;
@property (nonatomic, retain) CPLResource *resource;
@property (nonatomic, copy) NSString *taskIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)cancelTask;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCancelled;
- (bool)isEqual:(id)arg1;
- (bool)isHighPriority;
- (void)launch;
- (id)resource;
- (void)setHighPriority:(bool)arg1;
- (void)setResource:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (id)taskIdentifier;

@end

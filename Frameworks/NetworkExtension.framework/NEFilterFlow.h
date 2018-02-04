/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterFlow : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NEFilterAbsoluteVerdict * _currentVerdict;
    int  _epid;
    NSUUID * _flowUUID;
    bool  _isOpen;
    bool  _isRemediationFlow;
    int  _pid;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _sourceAppIdentifier;
    NSData * _sourceAppUniqueIdentifier;
    NSString * _sourceAppVersion;
}

@property (copy) NSURL *URL;
@property (retain) NEFilterAbsoluteVerdict *currentVerdict;
@property int epid;
@property (copy) NSUUID *flowUUID;
@property bool isOpen;
@property bool isRemediationFlow;
@property int pid;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) NSString *sourceAppIdentifier;
@property (copy) NSData *sourceAppUniqueIdentifier;
@property (copy) NSString *sourceAppVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)close;
- (void)copySourceAppInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentVerdict;
- (void)encodeWithCoder:(id)arg1;
- (int)epid;
- (id)flowUUID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 sourceAppIdentifier:(id)arg2;
- (bool)isOpen;
- (bool)isRemediationFlow;
- (int)pid;
- (id)queue;
- (void)setCurrentVerdict:(id)arg1;
- (void)setEpid:(int)arg1;
- (void)setFlowUUID:(id)arg1;
- (void)setIsOpen:(bool)arg1;
- (void)setIsRemediationFlow:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setSourceAppIdentifier:(id)arg1;
- (void)setSourceAppUniqueIdentifier:(id)arg1;
- (void)setSourceAppVersion:(id)arg1;
- (void)setURL:(id)arg1;
- (id)sourceAppIdentifier;
- (id)sourceAppUniqueIdentifier;
- (id)sourceAppVersion;

@end

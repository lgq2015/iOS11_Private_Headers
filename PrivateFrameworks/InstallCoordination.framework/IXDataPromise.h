/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXDataPromise : NSObject <NSSecureCoding> {
    bool  _complete;
    NSError * _error;
    unsigned long long  _errorSourceIdentifier;
    IXDataPromiseSeed * _seed;
}

@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic, readonly) unsigned long long creatorIdentifier;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSError *errorOccurred;
@property (nonatomic) unsigned long long errorSourceIdentifier;
@property (nonatomic, readonly) NSError *localError;
@property (nonatomic, readonly) bool localIsComplete;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) double percentComplete;
@property (nonatomic, retain) IXDataPromiseSeed *seed;
@property (nonatomic, readonly) Class seedClass;
@property (nonatomic, readonly) unsigned long long totalBytesNeededOnDisk;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (id)outstandingPromisesForCreator:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2;
- (oneway void)_clientDelegate_didComplete;
- (void)_updateInitWithSeed:(id)arg1 notifyDaemon:(bool)arg2;
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id*)arg3;
- (void)cancelForReason:(id)arg1 completion:(id /* block */)arg2;
- (bool)cancelForReason:(id)arg1 error:(id*)arg2;
- (unsigned long long)creatorIdentifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)errorOccurred;
- (unsigned long long)errorSourceIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;
- (id)initWithSeed:(id)arg1;
- (bool)isComplete;
- (bool)isEqual:(id)arg1;
- (id)localError;
- (bool)localIsComplete;
- (id)name;
- (double)percentComplete;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)resetWithCompletion:(id /* block */)arg1;
- (bool)resetWithError:(id*)arg1;
- (id)seed;
- (Class)seedClass;
- (void)setComplete:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setErrorSourceIdentifier:(unsigned long long)arg1;
- (void)setPercentComplete:(double)arg1;
- (void)setSeed:(id)arg1;
- (unsigned long long)totalBytesNeededOnDisk;
- (id)uniqueIdentifier;

@end

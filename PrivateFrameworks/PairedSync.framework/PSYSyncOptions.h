/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYSyncOptions : NSObject <NSSecureCoding> {
    bool  _dryRun;
    NSUUID * _pairingIdentifier;
    NSUUID * _sessionIdentifier;
    unsigned long long  _syncSessionType;
    bool  _terminateDuringDryRun;
    PSYTestInput * _testInput;
}

@property (nonatomic) bool dryRun;
@property (nonatomic, retain) NSUUID *pairingIdentifier;
@property (nonatomic, retain) NSUUID *sessionIdentifier;
@property (nonatomic) unsigned long long syncSessionType;
@property (nonatomic) bool terminateDuringDryRun;
@property (nonatomic, retain) PSYTestInput *testInput;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (bool)dryRun;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pairingIdentifier;
- (id)sessionIdentifier;
- (void)setDryRun:(bool)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSyncSessionType:(unsigned long long)arg1;
- (void)setTerminateDuringDryRun:(bool)arg1;
- (void)setTestInput:(id)arg1;
- (unsigned long long)syncSessionType;
- (bool)terminateDuringDryRun;
- (id)testInput;

@end

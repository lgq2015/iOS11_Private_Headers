/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWatchSync : HMFObject {
    bool  _inProgress;
    NSUUID * _syncIdentifier;
    unsigned long long  _syncOption;
}

@property (nonatomic) bool inProgress;
@property (nonatomic, readonly, copy) NSUUID *syncIdentifier;
@property (nonatomic) unsigned long long syncOption;

- (void).cxx_destruct;
- (id)description;
- (bool)inProgress;
- (id)initWithSyncOption:(unsigned long long)arg1;
- (void)setInProgress:(bool)arg1;
- (void)setSyncOption:(unsigned long long)arg1;
- (id)syncIdentifier;
- (unsigned long long)syncOption;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerChangeState : NSObject <NSCopying, NSSecureCoding> {
    CKServerChangeToken * _changeToken;
    unsigned long long  _clientRequestID;
    NSDate * _lastSyncDownDate;
    long long  _lastSyncDownStatus;
}

@property (nonatomic, retain) CKServerChangeToken *changeToken;
@property (nonatomic) unsigned long long clientRequestID;
@property (nonatomic, readonly) bool hasNeverSyncedDown;
@property (retain) NSDate *lastSyncDownDate;
@property (nonatomic) long long lastSyncDownStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changeToken;
- (unsigned long long)clientRequestID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)forgetChangeTokens;
- (void)forgetClientRequestID;
- (bool)hasNeverSyncedDown;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerSyncState:(id)arg1;
- (id)lastSyncDownDate;
- (long long)lastSyncDownStatus;
- (void)setChangeToken:(id)arg1;
- (void)setClientRequestID:(unsigned long long)arg1;
- (void)setLastSyncDownDate:(id)arg1;
- (void)setLastSyncDownStatus:(long long)arg1;
- (bool)updateWithServerChangeToken:(id)arg1 clientRequestID:(unsigned long long)arg2 syncDownStatus:(long long)arg3;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCSessionUserInfoTransfer : NSObject <NSSecureCoding> {
    NSString * _complicationTransferIdentifier;
    NSDate * _creationDate;
    bool  _currentComplicationInfo;
    NSError * _transferError;
    NSString * _transferIdentifier;
    bool  _transferring;
    WCUserInfo * _userInfoStorage;
}

@property (copy) NSString *complicationTransferIdentifier;
@property (nonatomic, retain) NSDate *creationDate;
@property (getter=isCurrentComplicationInfo, nonatomic) bool currentComplicationInfo;
@property (retain) NSError *transferError;
@property (copy) NSString *transferIdentifier;
@property (getter=isTransferring, nonatomic) bool transferring;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;
@property (readonly, copy) NSData *userInfoData;
@property (nonatomic, retain) WCUserInfo *userInfoStorage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)cancel;
- (long long)compare:(id)arg1;
- (id)complicationTransferIdentifier;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplicationTransferIdentifier:(id)arg1;
- (id)initWithProtoBufFileURL:(id)arg1;
- (id)initWithTranferIdentifier:(id)arg1 complicationTransferIdentifier:(id)arg2 currentComplication:(bool)arg3;
- (bool)isCurrentComplicationInfo;
- (bool)isEqual:(id)arg1;
- (bool)isTransferring;
- (id)protobufData;
- (void)setComplicationTransferIdentifier:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCurrentComplicationInfo:(bool)arg1;
- (void)setTransferError:(id)arg1;
- (void)setTransferIdentifier:(id)arg1;
- (void)setTransferring:(bool)arg1;
- (void)setUserInfoStorage:(id)arg1;
- (id)transferError;
- (id)transferIdentifier;
- (bool)updateUserInfo:(id)arg1 error:(id*)arg2;
- (bool)updateUserInfoData:(id)arg1 error:(id*)arg2;
- (id)userInfo;
- (id)userInfoData;
- (id)userInfoStorage;
- (bool)verifyUserInfo;

@end
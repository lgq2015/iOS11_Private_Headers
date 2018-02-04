/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSFamilyMember : NSObject <SSXPCCoding> {
    bool  _askToBuy;
    NSString * _firstName;
    NSString * _iCloudAccountName;
    NSNumber * _iCloudIdentifier;
    NSNumber * _iTunesIdentifier;
    NSString * _lastName;
    bool  _me;
    bool  _sharingPurchases;
}

@property (nonatomic, readonly) bool askToBuy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *iCloudAccountName;
@property (nonatomic, retain) NSNumber *iCloudIdentifier;
@property (nonatomic, retain) NSNumber *iTunesIdentifier;
@property (nonatomic, retain) NSString *lastName;
@property (getter=isMe, nonatomic) bool me;
@property (getter=isSharingPurchases, nonatomic) bool sharingPurchases;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)askToBuy;
- (id)copyXPCEncoding;
- (id)description;
- (id)firstName;
- (id)iCloudAccountName;
- (id)iCloudIdentifier;
- (id)iTunesIdentifier;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isMe;
- (bool)isSharingPurchases;
- (id)lastName;
- (id)newCacheRepresentation;
- (void)setFirstName:(id)arg1;
- (void)setICloudAccountName:(id)arg1;
- (void)setICloudIdentifier:(id)arg1;
- (void)setITunesIdentifier:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMe:(bool)arg1;
- (void)setSharingPurchases:(bool)arg1;

@end

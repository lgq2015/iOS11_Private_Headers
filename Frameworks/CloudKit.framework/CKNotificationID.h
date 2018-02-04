/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKNotificationID : NSObject <CKXPCSuitableString, NSCopying, NSSecureCoding> {
    NSString * _notificationUUID;
}

@property (nonatomic, copy) NSString *notificationUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKXPCSuitableString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)notificationUUID;
- (void)setNotificationUUID:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchNotificationChangesOperationResult : CKOperationResult <NSSecureCoding> {
    bool  _moreComing;
    CKServerChangeToken * _serverChangeToken;
}

@property (nonatomic) bool moreComing;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)moreComing;
- (id)serverChangeToken;
- (void)setMoreComing:(bool)arg1;
- (void)setServerChangeToken:(id)arg1;

@end

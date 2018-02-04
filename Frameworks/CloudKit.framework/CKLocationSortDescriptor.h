/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding> {
    CLLocation * _relativeLocation;
}

@property (nonatomic, copy) CLLocation *relativeLocation;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (long long)compareObject:(id)arg1 toObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 relativeLocation:(id)arg2;
- (id)relativeLocation;
- (void)setRelativeLocation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)CKDPQuerySort;

@end

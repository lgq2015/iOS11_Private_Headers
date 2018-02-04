/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKShareRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _courseIdentifier;
    NSData * _previewImageData;
    NSDictionary * _sandboxExtensions;
    NSString * _shareDescription;
    NSString * _sourceBundleIdentifier;
    NSString * _targetIdentifier;
    NSString * _targetType;
    NSArray * _urls;
}

@property (nonatomic, copy) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, retain) NSData *previewImageData;
@property (nonatomic, retain) NSDictionary *sandboxExtensions;
@property (nonatomic, copy) NSString *shareDescription;
@property (nonatomic, copy) NSString *sourceBundleIdentifier;
@property (nonatomic, copy) NSString *targetIdentifier;
@property (nonatomic, copy) NSString *targetType;
@property (nonatomic, copy) NSArray *urls;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previewImageData;
- (id)sandboxExtensions;
- (void)setCourseIdentifier:(id)arg1;
- (void)setPreviewImageData:(id)arg1;
- (void)setSandboxExtensions:(id)arg1;
- (void)setShareDescription:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (void)setTargetIdentifier:(id)arg1;
- (void)setTargetType:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)shareDescription;
- (id)sourceBundleIdentifier;
- (id)targetIdentifier;
- (id)targetType;
- (id)urls;

@end

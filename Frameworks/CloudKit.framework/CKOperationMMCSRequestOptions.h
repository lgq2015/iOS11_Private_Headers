/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding> {
    bool  _resumableContainerLimpMode;
}

@property (nonatomic) bool resumableContainerLimpMode;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)resumableContainerLimpMode;
- (void)setResumableContainerLimpMode:(bool)arg1;

@end

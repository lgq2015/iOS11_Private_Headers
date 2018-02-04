/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXAppRepresentation : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    long long  _layoutRole;
    int  _pid;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool isLayoutFullscreenModal;
@property (nonatomic, readonly) bool isLayoutPrimary;
@property (nonatomic) long long layoutRole;
@property (nonatomic) int pid;

+ (id)appWithPID:(int)arg1 bundleID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isLayoutFullscreenModal;
- (bool)isLayoutPrimary;
- (long long)layoutRole;
- (int)pid;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLayoutRole:(long long)arg1;
- (void)setPid:(int)arg1;

@end

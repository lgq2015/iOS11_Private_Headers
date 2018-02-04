/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRiWorkSharingInfo : NSObject <NSSecureCoding> {
    BOOL  _options;
}

@property (nonatomic, readonly) BOOL options;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)options;

@end

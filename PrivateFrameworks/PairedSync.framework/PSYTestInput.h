/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYTestInput : NSObject <NSSecureCoding> {
    long long  _action;
}

@property (nonatomic) long long action;

+ (bool)supportsSecureCoding;
+ (id)testInputWithAction:(long long)arg1;

- (long long)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAction:(long long)arg1;

@end

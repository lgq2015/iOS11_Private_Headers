/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTPredictedContent : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    double  _confidence;
    NSString * _contentIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *contentIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 confidence:(double)arg3;
- (id)bundleIdentifier;
- (double)confidence;
- (id)contentIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 confidence:(double)arg3;

@end

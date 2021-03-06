/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVLoggingLevelPair : NSObject {
    long long  _maxConsoleLoggingLevel;
    long long  _maxFileLoggingLevel;
}

@property (nonatomic) long long maxConsoleLoggingLevel;
@property (nonatomic) long long maxFileLoggingLevel;

+ (id)pairWithMaxConsoleLevel:(long long)arg1 maxFileLevel:(long long)arg2;

- (id)initWithMaxConsoleLevel:(long long)arg1 maxFileLevel:(long long)arg2;
- (long long)maxConsoleLoggingLevel;
- (long long)maxFileLoggingLevel;
- (void)setMaxConsoleLoggingLevel:(long long)arg1;
- (void)setMaxFileLoggingLevel:(long long)arg1;

@end

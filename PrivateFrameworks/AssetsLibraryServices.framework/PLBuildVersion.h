/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLBuildVersion : NSObject {
    NSString * _majorBuildLetterString;
    long long  _majorBuildNumber;
    NSString * _minorBuildLetterString;
    long long  _minorBuildNumber;
    NSString * _stringRepresentation;
}

@property (nonatomic, readonly, copy) NSString *majorBuildLetterString;
@property (nonatomic, readonly) long long majorBuildNumber;
@property (nonatomic, readonly, copy) NSString *minorBuildLetterString;
@property (nonatomic, readonly) long long minorBuildNumber;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;

- (long long)compareBuildVersion:(id)arg1 withPrecision:(long long)arg2;
- (long long)compareBuildVersionString:(id)arg1 withPrecision:(long long)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithString:(id)arg1;
- (id)majorBuildLetterString;
- (long long)majorBuildNumber;
- (id)minorBuildLetterString;
- (long long)minorBuildNumber;
- (id)stringRepresentation;

@end

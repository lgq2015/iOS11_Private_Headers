/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLVersionInfo : NSObject {
    long long  _majorVersion;
    long long  _minorVersion;
    long long  _patchVersion;
    NSString * _variantString;
}

@property (readonly) long long majorVersion;
@property (readonly) long long minorVersion;
@property (readonly) long long patchVersion;
@property (readonly) NSString *variantString;
@property (nonatomic, readonly) NSString *versionNumberString;
@property (nonatomic, readonly) NSString *versionString;

+ (id)versionInfoWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 variant:(id)arg4;
+ (id)versionInfoWithString:(id)arg1;

- (void).cxx_destruct;
- (id)initWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 variant:(id)arg4;
- (long long)majorVersion;
- (long long)minorVersion;
- (bool)olderThan:(id)arg1;
- (long long)patchVersion;
- (id)variantString;
- (id)versionNumberString;
- (id)versionString;

@end
